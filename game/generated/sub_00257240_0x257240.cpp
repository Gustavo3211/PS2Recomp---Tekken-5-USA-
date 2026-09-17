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

// Function: sub_00257240
// Address: 0x257240 - 0x257308
void sub_00257240_0x257240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257240_0x257240");
#endif

    switch (ctx->pc) {
        case 0x257278u: goto label_257278;
        case 0x257280u: goto label_257280;
        case 0x257294u: goto label_257294;
        case 0x2572ecu: goto label_2572ec;
        default: break;
    }

    ctx->pc = 0x257240u;

    // 0x257240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257248: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x257248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25724c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x257250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257254: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x257254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x257258: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x257258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25725c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x257260: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257264: 0x8e430894  lw          $v1, 0x894($s2)
    ctx->pc = 0x257264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x257268: 0x86530012  lh          $s3, 0x12($s2)
    ctx->pc = 0x257268u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x25726c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x25726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x257270: 0xc095bec  jal         func_256FB0
    ctx->pc = 0x257270u;
    SET_GPR_U32(ctx, 31, 0x257278u);
    ctx->pc = 0x257274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257270u;
    // 0x257274: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256FB0u, 0x257270u, 0x257278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257278u;
label_257278:
    // 0x257278: 0x9645003c  lhu         $a1, 0x3C($s2)
    ctx->pc = 0x257278u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x25727c: 0x0  nop
    ctx->pc = 0x25727cu;
    // NOP
label_257280:
    // 0x257280: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x257280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257288: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x257288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25728c: 0xc095bf8  jal         func_256FE0
    ctx->pc = 0x25728Cu;
    SET_GPR_U32(ctx, 31, 0x257294u);
    ctx->pc = 0x257290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25728Cu;
    // 0x257290: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256FE0u, 0x25728Cu, 0x257294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257294u;
label_257294:
    // 0x257294: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x257294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x257298: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x257298u;
    {
        const bool branch_taken_0x257298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257298) {
            ctx->pc = 0x25729Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257298u;
            // 0x25729c: 0x9645003c  lhu         $a1, 0x3C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257280;
        }
    }
    ctx->pc = 0x2572A0u;
    // 0x2572a0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2572a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2572a4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2572a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2572a8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2572a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2572ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2572acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2572b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2572b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2572b4: 0x24a5fe40  addiu       $a1, $a1, -0x1C0
    ctx->pc = 0x2572b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966848));
    // 0x2572b8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2572b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2572bc: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x2572bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x2572c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2572c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2572c4: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x2572c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x2572c8: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x2572c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2572cc: 0x24a60c80  addiu       $a2, $a1, 0xC80
    ctx->pc = 0x2572ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3200));
    // 0x2572d0: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x2572d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x2572d4: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x2572d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x2572d8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2572d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x2572dc: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2572dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2572e0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2572e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2572e4: 0xc095a18  jal         func_256860
    ctx->pc = 0x2572E4u;
    SET_GPR_U32(ctx, 31, 0x2572ECu);
    ctx->pc = 0x2572E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2572E4u;
    // 0x2572e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256860u, 0x2572E4u, 0x2572ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2572ECu;
label_2572ec:
    // 0x2572ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2572ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2572f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2572f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2572f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2572f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2572f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2572f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2572fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2572fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257300: 0x3e00008  jr          $ra
    ctx->pc = 0x257300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257300u;
        // 0x257304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257308u;
}
