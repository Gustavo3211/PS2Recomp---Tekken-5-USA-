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

// Function: sub_00200AF8
// Address: 0x200af8 - 0x200b68
void sub_00200AF8_0x200af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200AF8_0x200af8");
#endif

    switch (ctx->pc) {
        case 0x200b44u: goto label_200b44;
        default: break;
    }

    ctx->pc = 0x200af8u;

    // 0x200af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200afc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x200b00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200b10: 0x26040820  addiu       $a0, $s0, 0x820
    ctx->pc = 0x200b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x200b14: 0x26020818  addiu       $v0, $s0, 0x818
    ctx->pc = 0x200b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2072));
    // 0x200b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200b1c: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x200b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x200b20: 0x8cc30248  lw          $v1, 0x248($a2)
    ctx->pc = 0x200b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
    // 0x200b24: 0x8cc7024c  lw          $a3, 0x24C($a2)
    ctx->pc = 0x200b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 588)));
    // 0x200b28: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x200b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x200b2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x200b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x200b30: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x200b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x200b34: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x200b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x200b38: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x200b38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x200b3c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x200B3Cu;
    SET_GPR_U32(ctx, 31, 0x200B44u);
    ctx->pc = 0x200B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B3Cu;
    // 0x200b40: 0xa4800004  sh          $zero, 0x4($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x200B3Cu, 0x200B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B44u;
label_200b44:
    // 0x200b44: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x200b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x200b48: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x200b48u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x200b4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x200b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200b50: 0x2010  mfhi        $a0
    ctx->pc = 0x200b50u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x200b54: 0xa60402c6  sh          $a0, 0x2C6($s0)
    ctx->pc = 0x200b54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 710), (uint16_t)GPR_U32(ctx, 4));
    // 0x200b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x200B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B5Cu;
        // 0x200b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200B64u;
    // 0x200b64: 0x0  nop
    ctx->pc = 0x200b64u;
    // NOP
    ctx->pc = 0x200b68u;
}
