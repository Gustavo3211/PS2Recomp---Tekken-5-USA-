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

// Function: sub_0035C9E0
// Address: 0x35c9e0 - 0x35ca68
void sub_0035C9E0_0x35c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C9E0_0x35c9e0");
#endif

    switch (ctx->pc) {
        case 0x35ca24u: goto label_35ca24;
        default: break;
    }

    ctx->pc = 0x35c9e0u;

    // 0x35c9e0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35c9e4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x35c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35c9e8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35c9ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c9ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c9f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c9f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35c9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9f8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35c9fc: 0x2c840030  sltiu       $a0, $a0, 0x30
    ctx->pc = 0x35c9fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x35ca00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ca04: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ca04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ca08: 0x242127b8  addiu       $at, $at, 0x27B8
    ctx->pc = 0x35ca08u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 10168));
    // 0x35ca0c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x35ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35ca10: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35CA10u;
    {
        const bool branch_taken_0x35ca10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CA10u;
        // 0x35ca14: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ca10) {
            ctx->pc = 0x35CA30u;
            goto label_35ca30;
        }
    }
    ctx->pc = 0x35CA18u;
    // 0x35ca18: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ca1c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35CA1Cu;
    SET_GPR_U32(ctx, 31, 0x35CA24u);
    ctx->pc = 0x35CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CA1Cu;
    // 0x35ca20: 0x24845a08  addiu       $a0, $a0, 0x5A08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35CA1Cu, 0x35CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CA24u;
label_35ca24:
    // 0x35ca24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35CA24u;
    {
        const bool branch_taken_0x35ca24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CA24u;
        // 0x35ca28: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ca24) {
            ctx->pc = 0x35CA58u;
            goto label_35ca58;
        }
    }
    ctx->pc = 0x35CA2Cu;
    // 0x35ca2c: 0x0  nop
    ctx->pc = 0x35ca2cu;
    // NOP
label_35ca30:
    // 0x35ca30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35ca30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35ca34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35ca34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ca38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ca38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ca3c: 0xa060000c  sb          $zero, 0xC($v1)
    ctx->pc = 0x35ca3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ca40: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ca40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ca44: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x35ca44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x35ca48: 0xa020139e  sb          $zero, 0x139E($at)
    ctx->pc = 0x35ca48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 5022), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ca4c: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x35ca4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x35ca50: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x35ca50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x35ca54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x35ca54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_35ca58:
    // 0x35ca58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ca5c: 0x3e00008  jr          $ra
    ctx->pc = 0x35CA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CA5Cu;
        // 0x35ca60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CA64u;
    // 0x35ca64: 0x0  nop
    ctx->pc = 0x35ca64u;
    // NOP
    ctx->pc = 0x35ca68u;
}
