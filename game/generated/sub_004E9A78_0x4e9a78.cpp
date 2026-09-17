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

// Function: sub_004E9A78
// Address: 0x4e9a78 - 0x4e9af8
void sub_004E9A78_0x4e9a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9A78_0x4e9a78");
#endif

    switch (ctx->pc) {
        case 0x4e9a8cu: goto label_4e9a8c;
        default: break;
    }

    ctx->pc = 0x4e9a78u;

    // 0x4e9a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e9a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e9a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e9a80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e9a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e9a84: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E9A84u;
    SET_GPR_U32(ctx, 31, 0x4E9A8Cu);
    ctx->pc = 0x4E9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9A84u;
    // 0x4e9a88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E9A84u, 0x4E9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9A8Cu;
label_4e9a8c:
    // 0x4e9a8c: 0x2403008b  addiu       $v1, $zero, 0x8B
    ctx->pc = 0x4e9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x4e9a90: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4e9a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4e9a94: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4e9a94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e9a98: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x4e9a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4e9a9c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e9a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9aa0: 0x24470014  addiu       $a3, $v0, 0x14
    ctx->pc = 0x4e9aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4e9aa4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4e9aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e9aa8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4e9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4e9aac: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e9aacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e9ab0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9ab4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e9ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e9ab8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9abc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e9abcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e9ac0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4e9ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e9ac4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e9ac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e9ac8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9acc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9ad0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e9ad4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x4e9ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e9ad8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e9ad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e9adc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e9ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e9ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e9ae4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e9ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e9ae8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4e9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4e9aec: 0x3e00008  jr          $ra
    ctx->pc = 0x4E9AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9AECu;
        // 0x4e9af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9AF4u;
    // 0x4e9af4: 0x0  nop
    ctx->pc = 0x4e9af4u;
    // NOP
    ctx->pc = 0x4e9af8u;
}
