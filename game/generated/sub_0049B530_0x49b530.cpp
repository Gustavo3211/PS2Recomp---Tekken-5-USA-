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

// Function: sub_0049B530
// Address: 0x49b530 - 0x49b598
void sub_0049B530_0x49b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B530_0x49b530");
#endif

    ctx->pc = 0x49b530u;

    // 0x49b530: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49b530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49b534: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x49b534u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49b538: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x49b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49b53c: 0x24482352  addiu       $t0, $v0, 0x2352
    ctx->pc = 0x49b53cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 9042));
    // 0x49b540: 0x24492354  addiu       $t1, $v0, 0x2354
    ctx->pc = 0x49b540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 9044));
    // 0x49b544: 0x244a2356  addiu       $t2, $v0, 0x2356
    ctx->pc = 0x49b544u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 9046));
    // 0x49b548: 0x244b2358  addiu       $t3, $v0, 0x2358
    ctx->pc = 0x49b548u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 9048));
    // 0x49b54c: 0x244c2360  addiu       $t4, $v0, 0x2360
    ctx->pc = 0x49b54cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 9056));
    // 0x49b550: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x49b550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F9D2u));
    // 0x49b554: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x49b554u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x72F9D4u));
    // 0x49b558: 0x95450000  lhu         $a1, 0x0($t2)
    ctx->pc = 0x49b558u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x72F9D6u));
    // 0x49b55c: 0x95660000  lhu         $a2, 0x0($t3)
    ctx->pc = 0x49b55cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x72F9D8u));
    // 0x49b560: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x49b560u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x72F9E0u));
    // 0x49b564: 0xac4d235c  sw          $t5, 0x235C($v0)
    ctx->pc = 0x49b564u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x72F9DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9DCu, _value); } while (0);
    // 0x49b568: 0xa4432364  sh          $v1, 0x2364($v0)
    ctx->pc = 0x49b568u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9E4u, _value); } while (0);
    // 0x49b56c: 0xa4442366  sh          $a0, 0x2366($v0)
    ctx->pc = 0x49b56cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72F9E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9E6u, _value); } while (0);
    // 0x49b570: 0xa4452368  sh          $a1, 0x2368($v0)
    ctx->pc = 0x49b570u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9E8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9E8u, _value); } while (0);
    // 0x49b574: 0xa446236a  sh          $a2, 0x236A($v0)
    ctx->pc = 0x49b574u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x72F9EAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9EAu, _value); } while (0);
    // 0x49b578: 0xac47236c  sw          $a3, 0x236C($v0)
    ctx->pc = 0x49b578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x72F9ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9ECu, _value); } while (0);
    // 0x49b57c: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x49b57cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9D2u, _value); } while (0);
    // 0x49b580: 0xa5200000  sh          $zero, 0x0($t1)
    ctx->pc = 0x49b580u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9D4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9D4u, _value); } while (0);
    // 0x49b584: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x49b584u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9D6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9D6u, _value); } while (0);
    // 0x49b588: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x49b588u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9D8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9D8u, _value); } while (0);
    // 0x49b58c: 0x3e00008  jr          $ra
    ctx->pc = 0x49B58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B58Cu;
        // 0x49b590: 0xad800000  sw          $zero, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B594u;
    // 0x49b594: 0x0  nop
    ctx->pc = 0x49b594u;
    // NOP
    ctx->pc = 0x49b598u;
}
