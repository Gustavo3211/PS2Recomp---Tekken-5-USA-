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

// Function: sub_0048BC98
// Address: 0x48bc98 - 0x48bd00
void sub_0048BC98_0x48bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BC98_0x48bc98");
#endif

    ctx->pc = 0x48bc98u;

    // 0x48bc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48bc9c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x48bc9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bca4: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x48bca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x48bca8: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x48bca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x48bcac: 0x94e301b6  lhu         $v1, 0x1B6($a3)
    ctx->pc = 0x48bcacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 438)));
    // 0x48bcb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48bcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bcb4: 0xa4c32332  sh          $v1, 0x2332($a2)
    ctx->pc = 0x48bcb4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B2u, _value); } while (0);
    // 0x48bcb8: 0x84e20012  lh          $v0, 0x12($a3)
    ctx->pc = 0x48bcb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x48bcbc: 0xa4c22334  sh          $v0, 0x2334($a2)
    ctx->pc = 0x48bcbcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x48bcc0: 0x84e30016  lh          $v1, 0x16($a3)
    ctx->pc = 0x48bcc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x48bcc4: 0xa4c32336  sh          $v1, 0x2336($a2)
    ctx->pc = 0x48bcc4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x48bcc8: 0x84e5001a  lh          $a1, 0x1A($a3)
    ctx->pc = 0x48bcc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x48bccc: 0xa4c52338  sh          $a1, 0x2338($a2)
    ctx->pc = 0x48bcccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B8u, _value); } while (0);
    // 0x48bcd0: 0x8ce20124  lw          $v0, 0x124($a3)
    ctx->pc = 0x48bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
    // 0x48bcd4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x48bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x48bcd8: 0xacc22340  sw          $v0, 0x2340($a2)
    ctx->pc = 0x48bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9024), GPR_U32(ctx, 2));
    // 0x48bcdc: 0x8ce30128  lw          $v1, 0x128($a3)
    ctx->pc = 0x48bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 296)));
    // 0x48bce0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x48bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x48bce4: 0xacc32344  sw          $v1, 0x2344($a2)
    ctx->pc = 0x48bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9028), GPR_U32(ctx, 3));
    // 0x48bce8: 0x8ce2012c  lw          $v0, 0x12C($a3)
    ctx->pc = 0x48bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 300)));
    // 0x48bcec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x48bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x48bcf0: 0xacc22348  sw          $v0, 0x2348($a2)
    ctx->pc = 0x48bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9032), GPR_U32(ctx, 2));
    // 0x48bcf4: 0x8122e2c  j           func_48B8B0
    ctx->pc = 0x48BCF4u;
    ctx->pc = 0x48BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BCF4u;
    // 0x48bcf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B8B0u, 0x48BCF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48BCFCu;
    // 0x48bcfc: 0x0  nop
    ctx->pc = 0x48bcfcu;
    // NOP
    ctx->pc = 0x48bd00u;
}
