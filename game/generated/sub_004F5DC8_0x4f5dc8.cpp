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

// Function: sub_004F5DC8
// Address: 0x4f5dc8 - 0x4f5e20
void sub_004F5DC8_0x4f5dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5DC8_0x4f5dc8");
#endif

    ctx->pc = 0x4f5dc8u;

    // 0x4f5dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f5dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f5dcc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4f5dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f5dd4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4f5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4f5dd8: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4f5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4f5ddc: 0x94c501b6  lhu         $a1, 0x1B6($a2)
    ctx->pc = 0x4f5ddcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 438)));
    // 0x4f5de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5de4: 0xa4452332  sh          $a1, 0x2332($v0)
    ctx->pc = 0x4f5de4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B2u, _value); } while (0);
    // 0x4f5de8: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x4f5de8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x4f5dec: 0xa4432334  sh          $v1, 0x2334($v0)
    ctx->pc = 0x4f5decu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x4f5df0: 0x94c50016  lhu         $a1, 0x16($a2)
    ctx->pc = 0x4f5df0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x4f5df4: 0xa4452336  sh          $a1, 0x2336($v0)
    ctx->pc = 0x4f5df4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x4f5df8: 0x94c3001a  lhu         $v1, 0x1A($a2)
    ctx->pc = 0x4f5df8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x4f5dfc: 0xa4432338  sh          $v1, 0x2338($v0)
    ctx->pc = 0x4f5dfcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B8u, _value); } while (0);
    // 0x4f5e00: 0x8cc50124  lw          $a1, 0x124($a2)
    ctx->pc = 0x4f5e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x4f5e04: 0xac452340  sw          $a1, 0x2340($v0)
    ctx->pc = 0x4f5e04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9C0u, _value); } while (0);
    // 0x4f5e08: 0x8cc30128  lw          $v1, 0x128($a2)
    ctx->pc = 0x4f5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
    // 0x4f5e0c: 0xac432344  sw          $v1, 0x2344($v0)
    ctx->pc = 0x4f5e0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9C4u, _value); } while (0);
    // 0x4f5e10: 0x8cc5012c  lw          $a1, 0x12C($a2)
    ctx->pc = 0x4f5e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 300)));
    // 0x4f5e14: 0xac452348  sw          $a1, 0x2348($v0)
    ctx->pc = 0x4f5e14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9C8u, _value); } while (0);
    // 0x4f5e18: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x4F5E18u;
    ctx->pc = 0x4F5E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5E18u;
    // 0x4f5e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x4F5E20u;
}
