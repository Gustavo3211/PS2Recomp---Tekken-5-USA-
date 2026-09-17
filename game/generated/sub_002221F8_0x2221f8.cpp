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

// Function: sub_002221F8
// Address: 0x2221f8 - 0x222308
void sub_002221F8_0x2221f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002221F8_0x2221f8");
#endif

    switch (ctx->pc) {
        case 0x222230u: goto label_222230;
        case 0x222244u: goto label_222244;
        case 0x222260u: goto label_222260;
        case 0x222274u: goto label_222274;
        case 0x222298u: goto label_222298;
        case 0x2222b0u: goto label_2222b0;
        case 0x2222e0u: goto label_2222e0;
        default: break;
    }

    ctx->pc = 0x2221f8u;

    // 0x2221f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2221f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2221fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2221fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x222200: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x222200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222208: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22220c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22220cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x222210: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x222210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222214: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x222214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x222218: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x222218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22221c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22221cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x222220: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x222220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222224: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x222224u;
    {
        const bool branch_taken_0x222224 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x222228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222224u;
        // 0x222228: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222224) {
            ctx->pc = 0x222254u;
            goto label_222254;
        }
    }
    ctx->pc = 0x22222Cu;
    // 0x22222c: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x22222cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_222230:
    // 0x222230: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222234: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x222238: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x222238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22223c: 0xc088822  jal         func_222088
    ctx->pc = 0x22223Cu;
    SET_GPR_U32(ctx, 31, 0x222244u);
    ctx->pc = 0x222240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22223Cu;
    // 0x222240: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222088u, 0x22223Cu, 0x222244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222244u;
label_222244:
    // 0x222244: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x222244u;
    {
        const bool branch_taken_0x222244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222244u;
        // 0x222248: 0x212182a  slt         $v1, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222244) {
            ctx->pc = 0x2222B8u;
            goto label_2222b8;
        }
    }
    ctx->pc = 0x22224Cu;
    // 0x22224c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22224Cu;
    {
        const bool branch_taken_0x22224c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22224Cu;
        // 0x222250: 0x103100  sll         $a2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22224c) {
            ctx->pc = 0x222230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222230;
        }
    }
    ctx->pc = 0x222254u;
label_222254:
    // 0x222254: 0x1a80000b  blez        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x222254u;
    {
        const bool branch_taken_0x222254 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x222258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222254u;
        // 0x222258: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222254) {
            ctx->pc = 0x222284u;
            goto label_222284;
        }
    }
    ctx->pc = 0x22225Cu;
    // 0x22225c: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x22225cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_222260:
    // 0x222260: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222264: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x222264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x222268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22226c: 0xc088822  jal         func_222088
    ctx->pc = 0x22226Cu;
    SET_GPR_U32(ctx, 31, 0x222274u);
    ctx->pc = 0x222270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22226Cu;
    // 0x222270: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222088u, 0x22226Cu, 0x222274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222274u;
label_222274:
    // 0x222274: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x222274u;
    {
        const bool branch_taken_0x222274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222274u;
        // 0x222278: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222274) {
            ctx->pc = 0x2222B8u;
            goto label_2222b8;
        }
    }
    ctx->pc = 0x22227Cu;
    // 0x22227c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22227Cu;
    {
        const bool branch_taken_0x22227c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22227Cu;
        // 0x222280: 0x103100  sll         $a2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22227c) {
            ctx->pc = 0x222260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222260;
        }
    }
    ctx->pc = 0x222284u;
label_222284:
    // 0x222284: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x222284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x222288: 0x1a80000f  blez        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x222288u;
    {
        const bool branch_taken_0x222288 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x22228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222288u;
        // 0x22228c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222288) {
            ctx->pc = 0x2222C8u;
            goto label_2222c8;
        }
    }
    ctx->pc = 0x222290u;
    // 0x222290: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x222290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x222294: 0x0  nop
    ctx->pc = 0x222294u;
    // NOP
label_222298:
    // 0x222298: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22229c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x22229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2222a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2222a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2222a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222a8: 0xc0887f6  jal         func_221FD8
    ctx->pc = 0x2222A8u;
    SET_GPR_U32(ctx, 31, 0x2222B0u);
    ctx->pc = 0x2222ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222A8u;
    // 0x2222ac: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221FD8u, 0x2222A8u, 0x2222B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222B0u;
label_2222b0:
    // 0x2222b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2222B0u;
    {
        const bool branch_taken_0x2222b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222B0u;
        // 0x2222b4: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222b0) {
            ctx->pc = 0x2222C0u;
            goto label_2222c0;
        }
    }
    ctx->pc = 0x2222B8u;
label_2222b8:
    // 0x2222b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2222B8u;
    {
        const bool branch_taken_0x2222b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222B8u;
        // 0x2222bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222b8) {
            ctx->pc = 0x2222E4u;
            goto label_2222e4;
        }
    }
    ctx->pc = 0x2222C0u;
label_2222c0:
    // 0x2222c0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2222C0u;
    {
        const bool branch_taken_0x2222c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2222C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222C0u;
        // 0x2222c4: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222c0) {
            ctx->pc = 0x222298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222298;
        }
    }
    ctx->pc = 0x2222C8u;
label_2222c8:
    // 0x2222c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x2222c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2222cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2222ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222d0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2222d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2222d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2222d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222d8: 0xc0887f6  jal         func_221FD8
    ctx->pc = 0x2222D8u;
    SET_GPR_U32(ctx, 31, 0x2222E0u);
    ctx->pc = 0x2222DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222D8u;
    // 0x2222dc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221FD8u, 0x2222D8u, 0x2222E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222E0u;
label_2222e0:
    // 0x2222e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2222e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2222e4:
    // 0x2222e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2222e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2222e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2222e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2222ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2222ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2222f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2222f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2222f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2222f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2222f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2222f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2222fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2222FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222FCu;
        // 0x222300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2222FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222304u;
    // 0x222304: 0x0  nop
    ctx->pc = 0x222304u;
    // NOP
    ctx->pc = 0x222308u;
}
