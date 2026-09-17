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

// Function: sub_0011A1A8
// Address: 0x11a1a8 - 0x11a268
void sub_0011A1A8_0x11a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A1A8_0x11a1a8");
#endif

    switch (ctx->pc) {
        case 0x11a1f0u: goto label_11a1f0;
        case 0x11a230u: goto label_11a230;
        case 0x11a23cu: goto label_11a23c;
        case 0x11a24cu: goto label_11a24c;
        default: break;
    }

    ctx->pc = 0x11a1a8u;

label_11a1a8:
    // 0x11a1a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a1ac: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x11a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x11a1b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a1b8: 0x28980  sll         $s1, $v0, 6
    ctx->pc = 0x11a1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x11a1bc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A1BCu;
    {
        const bool branch_taken_0x11a1bc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1BCu;
        // 0x11a1c0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1bc) {
            ctx->pc = 0x11A1D4u;
            goto label_11a1d4;
        }
    }
    ctx->pc = 0x11A1C4u;
    // 0x11a1c4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x11a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11a1c8: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x11a1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x11a1cc: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A1CCu;
    {
        const bool branch_taken_0x11a1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11a1cc) {
            ctx->pc = 0x11A1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A1CCu;
            // 0x11a1d0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A1DCu;
            goto label_11a1dc;
        }
    }
    ctx->pc = 0x11A1D4u;
label_11a1d4:
    // 0x11a1d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11A1D4u;
    {
        const bool branch_taken_0x11a1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1D4u;
        // 0x11a1d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1d4) {
            ctx->pc = 0x11A200u;
            goto label_11a200;
        }
    }
    ctx->pc = 0x11A1DCu;
label_11a1dc:
    // 0x11a1dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11a1e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A1E0u;
    {
        const bool branch_taken_0x11a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1E0u;
        // 0x11a1e4: 0xde300018  ld          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1e0) {
            ctx->pc = 0x11A1FCu;
            goto label_11a1fc;
        }
    }
    ctx->pc = 0x11A1E8u;
    // 0x11a1e8: 0xc0466c0  jal         func_119B00
    ctx->pc = 0x11A1E8u;
    SET_GPR_U32(ctx, 31, 0x11A1F0u);
    ctx->pc = 0x119B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B00u, 0x11A1E8u, 0x11A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1F0u;
label_11a1f0:
    // 0x11a1f0: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x11a1f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11a1f4: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x11a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x11a1f8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x11a1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_11a1fc:
    // 0x11a1fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11a1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a200:
    // 0x11a200: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a204: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a20c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A20Cu;
        // 0x11a210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A214u;
    // 0x11a214: 0x0  nop
    ctx->pc = 0x11a214u;
    // NOP
    // 0x11a218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a21c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a220: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a228: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11A228u;
    SET_GPR_U32(ctx, 31, 0x11A230u);
    ctx->pc = 0x11A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A228u;
    // 0x11a22c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11A228u, 0x11A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A230u;
label_11a230:
    // 0x11a230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a234: 0xc04686a  jal         func_11A1A8
    ctx->pc = 0x11A234u;
    SET_GPR_U32(ctx, 31, 0x11A23Cu);
    ctx->pc = 0x11A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A234u;
    // 0x11a238: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A1A8u;
    goto label_11a1a8;
    ctx->pc = 0x11A23Cu;
label_11a23c:
    // 0x11a23c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A23Cu;
    {
        const bool branch_taken_0x11a23c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A23Cu;
        // 0x11a240: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a23c) {
            ctx->pc = 0x11A24Cu;
            goto label_11a24c;
        }
    }
    ctx->pc = 0x11A244u;
    // 0x11a244: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A244u;
    SET_GPR_U32(ctx, 31, 0x11A24Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A244u, 0x11A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A24Cu;
label_11a24c:
    // 0x11a24c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11a24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a254: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a25c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A25Cu;
        // 0x11a260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A264u;
    // 0x11a264: 0x0  nop
    ctx->pc = 0x11a264u;
    // NOP
    ctx->pc = 0x11a268u;
}
