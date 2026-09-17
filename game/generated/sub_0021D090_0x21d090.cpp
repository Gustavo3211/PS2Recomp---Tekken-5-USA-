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

// Function: sub_0021D090
// Address: 0x21d090 - 0x21d108
void sub_0021D090_0x21d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D090_0x21d090");
#endif

    switch (ctx->pc) {
        case 0x21d0acu: goto label_21d0ac;
        case 0x21d0b4u: goto label_21d0b4;
        case 0x21d0c8u: goto label_21d0c8;
        case 0x21d0d4u: goto label_21d0d4;
        case 0x21d0e0u: goto label_21d0e0;
        case 0x21d0e8u: goto label_21d0e8;
        case 0x21d0f0u: goto label_21d0f0;
        default: break;
    }

    ctx->pc = 0x21d090u;

    // 0x21d090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d09c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d0a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d0a4: 0xc086644  jal         func_219910
    ctx->pc = 0x21D0A4u;
    SET_GPR_U32(ctx, 31, 0x21D0ACu);
    ctx->pc = 0x21D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D0A4u;
    // 0x21d0a8: 0x9204002d  lbu         $a0, 0x2D($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21D0A4u, 0x21D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D0ACu;
label_21d0ac:
    // 0x21d0ac: 0xc09d940  jal         func_276500
    ctx->pc = 0x21D0ACu;
    SET_GPR_U32(ctx, 31, 0x21D0B4u);
    ctx->pc = 0x21D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D0ACu;
    // 0x21d0b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x21D0ACu, 0x21D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D0B4u;
label_21d0b4:
    // 0x21d0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d0b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D0B8u;
    {
        const bool branch_taken_0x21d0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D0B8u;
        // 0x21d0bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d0b8) {
            ctx->pc = 0x21D0C8u;
            goto label_21d0c8;
        }
    }
    ctx->pc = 0x21D0C0u;
    // 0x21d0c0: 0xc0851b6  jal         func_2146D8
    ctx->pc = 0x21D0C0u;
    SET_GPR_U32(ctx, 31, 0x21D0C8u);
    ctx->pc = 0x21D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D0C0u;
    // 0x21d0c4: 0x8e060038  lw          $a2, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2146D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2146D8u, 0x21D0C0u, 0x21D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D0C8u;
label_21d0c8:
    // 0x21d0c8: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x21d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21d0cc: 0xc086b22  jal         func_21AC88
    ctx->pc = 0x21D0CCu;
    SET_GPR_U32(ctx, 31, 0x21D0D4u);
    ctx->pc = 0x21D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D0CCu;
    // 0x21d0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC88u, 0x21D0CCu, 0x21D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D0D4u;
label_21d0d4:
    // 0x21d0d4: 0x9204002e  lbu         $a0, 0x2E($s0)
    ctx->pc = 0x21d0d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x21d0d8: 0xc08664a  jal         func_219928
    ctx->pc = 0x21D0D8u;
    SET_GPR_U32(ctx, 31, 0x21D0E0u);
    ctx->pc = 0x21D0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D0D8u;
    // 0x21d0dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x21D0D8u, 0x21D0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D0E0u;
label_21d0e0:
    // 0x21d0e0: 0xc086b42  jal         func_21AD08
    ctx->pc = 0x21D0E0u;
    SET_GPR_U32(ctx, 31, 0x21D0E8u);
    ctx->pc = 0x21D0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D0E0u;
    // 0x21d0e4: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AD08u, 0x21D0E0u, 0x21D0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D0E8u;
label_21d0e8:
    // 0x21d0e8: 0xc07c47a  jal         func_1F11E8
    ctx->pc = 0x21D0E8u;
    SET_GPR_U32(ctx, 31, 0x21D0F0u);
    ctx->pc = 0x21D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D0E8u;
    // 0x21d0ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F11E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F11E8u, 0x21D0E8u, 0x21D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D0F0u;
label_21d0f0:
    // 0x21d0f0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x21d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x21d0f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d0f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d0f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d0fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d100: 0x3e00008  jr          $ra
    ctx->pc = 0x21D100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D100u;
        // 0x21d104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D108u;
}
