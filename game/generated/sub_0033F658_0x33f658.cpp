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

// Function: sub_0033F658
// Address: 0x33f658 - 0x33f6e8
void sub_0033F658_0x33f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F658_0x33f658");
#endif

    ctx->pc = 0x33f658u;

    // 0x33f658: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x33f658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x33f65c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x33f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x33f660: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x33f660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x33f664: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x33f664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x33f668: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x33f668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x33f66c: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x33f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x33f670: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x33f670u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x400414u));
    // 0x33f674: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x33f674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f678: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x33f678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x33f67c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x33f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x33f680: 0x24a70030  addiu       $a3, $a1, 0x30
    ctx->pc = 0x33f680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x33f684: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x33f684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x33f688: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33f688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33f68c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x33f68cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x33f690: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x33f690u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x33f694: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33f694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33f698: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x33f698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f69c: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x33f69cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x33f6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x33F6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6A0u;
        // 0x33f6a4: 0xacc70014  sw          $a3, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F6A8u;
    // 0x33f6a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x33f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x33f6ac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33f6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33f6b0: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x33f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x33f6b4: 0x3442002e  ori         $v0, $v0, 0x2E
    ctx->pc = 0x33f6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46);
    // 0x33f6b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33f6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33f6bc: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x33f6bcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33f6c0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x33f6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x33f6c4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x33f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33f6c8: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x33f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x33f6cc: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x33f6ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x33f6d0: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x33f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x33f6d4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x33f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33f6d8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x33f6d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33f6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x33F6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6DCu;
        // 0x33f6e0: 0x7ca30020  sq          $v1, 0x20($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F6E4u;
    // 0x33f6e4: 0x0  nop
    ctx->pc = 0x33f6e4u;
    // NOP
    ctx->pc = 0x33f6e8u;
}
