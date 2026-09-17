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

// Function: sub_0048BBF0
// Address: 0x48bbf0 - 0x48bc48
void sub_0048BBF0_0x48bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BBF0_0x48bbf0");
#endif

    ctx->pc = 0x48bbf0u;

    // 0x48bbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48bbf4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x48bbf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bbf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bbfc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48bc00: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48bc04: 0x94c501b6  lhu         $a1, 0x1B6($a2)
    ctx->pc = 0x48bc04u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 438)));
    // 0x48bc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48bc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bc0c: 0xa4452332  sh          $a1, 0x2332($v0)
    ctx->pc = 0x48bc0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B2u, _value); } while (0);
    // 0x48bc10: 0x84c30012  lh          $v1, 0x12($a2)
    ctx->pc = 0x48bc10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x48bc14: 0xa4432334  sh          $v1, 0x2334($v0)
    ctx->pc = 0x48bc14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x48bc18: 0x84c50016  lh          $a1, 0x16($a2)
    ctx->pc = 0x48bc18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x48bc1c: 0xa4452336  sh          $a1, 0x2336($v0)
    ctx->pc = 0x48bc1cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x48bc20: 0x84c3001a  lh          $v1, 0x1A($a2)
    ctx->pc = 0x48bc20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x48bc24: 0xa4432338  sh          $v1, 0x2338($v0)
    ctx->pc = 0x48bc24u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B8u, _value); } while (0);
    // 0x48bc28: 0x8cc50124  lw          $a1, 0x124($a2)
    ctx->pc = 0x48bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x48bc2c: 0xac452340  sw          $a1, 0x2340($v0)
    ctx->pc = 0x48bc2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9C0u, _value); } while (0);
    // 0x48bc30: 0x8cc30128  lw          $v1, 0x128($a2)
    ctx->pc = 0x48bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
    // 0x48bc34: 0xac432344  sw          $v1, 0x2344($v0)
    ctx->pc = 0x48bc34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9C4u, _value); } while (0);
    // 0x48bc38: 0x8cc5012c  lw          $a1, 0x12C($a2)
    ctx->pc = 0x48bc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 300)));
    // 0x48bc3c: 0xac452348  sw          $a1, 0x2348($v0)
    ctx->pc = 0x48bc3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9C8u, _value); } while (0);
    // 0x48bc40: 0x8122e2c  j           func_48B8B0
    ctx->pc = 0x48BC40u;
    ctx->pc = 0x48BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BC40u;
    // 0x48bc44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B8B0u, 0x48BC40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48BC48u;
}
