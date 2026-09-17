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

// Function: sub_00119B00
// Address: 0x119b00 - 0x119bd0
void sub_00119B00_0x119b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119B00_0x119b00");
#endif

    switch (ctx->pc) {
        case 0x119b50u: goto label_119b50;
        case 0x119b64u: goto label_119b64;
        case 0x119bb8u: goto label_119bb8;
        default: break;
    }

    ctx->pc = 0x119b00u;

    // 0x119b00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x119b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x119b04: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x119b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x119b08: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x119b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x119b0c: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x119b0cu;
    SET_GPR_ZE32(ctx, 2, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x119b10: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x119b10u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x119b14: 0xdc8a2148  ld          $t2, 0x2148($a0)
    ctx->pc = 0x119b14u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x132148u));
    // 0x119b18: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x119b18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x119b1c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119B1Cu;
    {
        const bool branch_taken_0x119b1c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B1Cu;
        // 0x119b20: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b1c) {
            ctx->pc = 0x119B2Cu;
            goto label_119b2c;
        }
    }
    ctx->pc = 0x119B24u;
    // 0x119b24: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x119b24u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119b28: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x119b28u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_119b2c:
    // 0x119b2c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x119b2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x119b30: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x119b30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x119b34: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x119b34u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x119b38: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x119b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x119b3c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x119b3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x119b40: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x119b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x119b44: 0x3e00008  jr          $ra
    ctx->pc = 0x119B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119B4Cu;
    // 0x119b4c: 0x0  nop
    ctx->pc = 0x119b4cu;
    // NOP
label_119b50:
    // 0x119b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119b58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119b5c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x119B5Cu;
    SET_GPR_U32(ctx, 31, 0x119B64u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x119B5Cu, 0x119B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B64u;
label_119b64:
    // 0x119b64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x119b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x119b68: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x119b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x119b6c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x119b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x119b70: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x119b70u;
    SET_GPR_ZE32(ctx, 16, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x119b74: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x119b74u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x119b78: 0xdc8a2148  ld          $t2, 0x2148($a0)
    ctx->pc = 0x119b78u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x132148u));
    // 0x119b7c: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x119b7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x119b80: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119B80u;
    {
        const bool branch_taken_0x119b80 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B80u;
        // 0x119b84: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b80) {
            ctx->pc = 0x119B90u;
            goto label_119b90;
        }
    }
    ctx->pc = 0x119B88u;
    // 0x119b88: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x119b88u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119b8c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x119b8cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_119b90:
    // 0x119b90: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x119b90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x119b94: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x119b94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x119b98: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x119b98u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x119b9c: 0x20a8025  or          $s0, $s0, $t2
    ctx->pc = 0x119b9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 10));
    // 0x119ba0: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x119ba0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x119ba4: 0x1308014  dsllv       $s0, $s0, $t1
    ctx->pc = 0x119ba4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x119ba8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119BA8u;
    {
        const bool branch_taken_0x119ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BA8u;
        // 0x119bac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ba8) {
            ctx->pc = 0x119BBCu;
            goto label_119bbc;
        }
    }
    ctx->pc = 0x119BB0u;
    // 0x119bb0: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x119BB0u;
    SET_GPR_U32(ctx, 31, 0x119BB8u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x119BB0u, 0x119BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119BB8u;
label_119bb8:
    // 0x119bb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119bbc:
    // 0x119bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x119BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BC4u;
        // 0x119bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119BCCu;
    // 0x119bcc: 0x0  nop
    ctx->pc = 0x119bccu;
    // NOP
    ctx->pc = 0x119bd0u;
}
