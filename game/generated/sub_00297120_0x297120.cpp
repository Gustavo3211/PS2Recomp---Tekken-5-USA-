#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297120
// Address: 0x297120 - 0x297200
void sub_00297120_0x297120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297120_0x297120");
#endif

    switch (ctx->pc) {
        case 0x297160u: goto label_297160;
        case 0x29716cu: goto label_29716c;
        case 0x297178u: goto label_297178;
        case 0x297190u: goto label_297190;
        default: break;
    }

    ctx->pc = 0x297120u;

    // 0x297120: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x297120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x297124: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x297124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x297128: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x297128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29712c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29712cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297130: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x297130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x297134: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x297134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297138: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x297138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29713c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29713cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297140: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x297140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x297144: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x297144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297148: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x297148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x29714c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29714cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297150: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x297150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x297154: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x297154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x297158: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29715c: 0x0  nop
    ctx->pc = 0x29715cu;
    // NOP
label_297160:
    // 0x297160: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x297160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297164: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x297164u;
    SET_GPR_U32(ctx, 31, 0x29716Cu);
    ctx->pc = 0x297168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297164u;
    // 0x297168: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x297164u, 0x29716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29716Cu;
label_29716c:
    // 0x29716c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297170: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x297170u;
    SET_GPR_U32(ctx, 31, 0x297178u);
    ctx->pc = 0x297174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297170u;
    // 0x297174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x297170u, 0x297178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297178u;
label_297178:
    // 0x297178: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x297178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29717c: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x29717Cu;
    {
        const bool branch_taken_0x29717c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29717Cu;
        // 0x297180: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29717c) {
            ctx->pc = 0x2971CCu;
            goto label_2971cc;
        }
    }
    ctx->pc = 0x297184u;
    // 0x297184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297188: 0x26870008  addiu       $a3, $s4, 0x8
    ctx->pc = 0x297188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x29718c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x29718cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_297190:
    // 0x297190: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x297190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x297194: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x297194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x297198: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x297198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29719c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2971a0: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2971A0u;
    {
        const bool branch_taken_0x2971a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2971A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971A0u;
        // 0x2971a4: 0x28c20006  slti        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2971a0) {
            ctx->pc = 0x2971B0u;
            goto label_2971b0;
        }
    }
    ctx->pc = 0x2971A8u;
    // 0x2971a8: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x2971a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x2971ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2971acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2971b0:
    // 0x2971b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2971B0u;
    {
        const bool branch_taken_0x2971b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2971B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971B0u;
        // 0x2971b4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2971b0) {
            ctx->pc = 0x297190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297190;
        }
    }
    ctx->pc = 0x2971B8u;
    // 0x2971b8: 0x55000005  bnel        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2971B8u;
    {
        const bool branch_taken_0x2971b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2971b8) {
            ctx->pc = 0x2971BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2971B8u;
            // 0x2971bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2971D0u;
            goto label_2971d0;
        }
    }
    ctx->pc = 0x2971C0u;
    // 0x2971c0: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2971c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2971c4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2971c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2971c8: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2971c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
label_2971cc:
    // 0x2971cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2971ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2971d0:
    // 0x2971d0: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x2971d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2971d4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2971D4u;
    {
        const bool branch_taken_0x2971d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2971D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971D4u;
        // 0x2971d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2971d4) {
            ctx->pc = 0x297160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297160;
        }
    }
    ctx->pc = 0x2971DCu;
    // 0x2971dc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2971dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2971e0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2971e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2971e4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2971e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2971e8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2971e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2971ec: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2971ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2971f0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2971f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2971f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2971f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2971f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2971F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2971FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971F8u;
        // 0x2971fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2971F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297200u;
}
