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

// Function: sub_002ECF78
// Address: 0x2ecf78 - 0x2ed020
void sub_002ECF78_0x2ecf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECF78_0x2ecf78");
#endif

    switch (ctx->pc) {
        case 0x2ecf98u: goto label_2ecf98;
        default: break;
    }

    ctx->pc = 0x2ecf78u;

    // 0x2ecf78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ecf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ecf7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ecf80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ecf80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ecf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ecf88: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ecf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ecf8c: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x2ecf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x2ecf90: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x2ECF90u;
    SET_GPR_U32(ctx, 31, 0x2ECF98u);
    ctx->pc = 0x2ECF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF90u;
    // 0x2ecf94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x2ECF90u, 0x2ECF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF98u;
label_2ecf98:
    // 0x2ecf98: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ecf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ecf9c: 0x26030068  addiu       $v1, $s0, 0x68
    ctx->pc = 0x2ecf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x2ecfa0: 0x24420250  addiu       $v0, $v0, 0x250
    ctx->pc = 0x2ecfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x2ecfa4: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x2ecfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2ecfa8: 0x26060078  addiu       $a2, $s0, 0x78
    ctx->pc = 0x2ecfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2ecfac: 0x26070080  addiu       $a3, $s0, 0x80
    ctx->pc = 0x2ecfacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2ecfb0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2ecfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2ecfb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ecfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2ecfb8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2ecfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2ecfbc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ecfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ecfc0: 0x24840800  addiu       $a0, $a0, 0x800
    ctx->pc = 0x2ecfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x2ecfc4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ecfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2ecfc8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ecfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ecfcc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2ecfccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2ecfd0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ecfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2ecfd4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2ecfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2ecfd8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2ecfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2ecfdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ecfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecfe0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2ecfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2ecfe4: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x2ecfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x2ecfe8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2ecfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x2ecfec: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2ecfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2ecff0: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2ecff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x2ecff4: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2ecff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2ecff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFFCu;
        // 0x2ed000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED004u;
    // 0x2ed004: 0x0  nop
    ctx->pc = 0x2ed004u;
    // NOP
    // 0x2ed008: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ed008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ed00c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ed00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ed010: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2ed010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2ed014: 0x2484065c  addiu       $a0, $a0, 0x65C
    ctx->pc = 0x2ed014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1628));
    // 0x2ed018: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2ED018u;
    SET_GPR_U32(ctx, 31, 0x2ED020u);
    ctx->pc = 0x2ED01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED018u;
    // 0x2ed01c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2ED018u, 0x2ED020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED020u;
}
