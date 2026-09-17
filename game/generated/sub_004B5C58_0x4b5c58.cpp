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

// Function: sub_004B5C58
// Address: 0x4b5c58 - 0x4b5cf0
void sub_004B5C58_0x4b5c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B5C58_0x4b5c58");
#endif

    ctx->pc = 0x4b5c58u;

    // 0x4b5c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b5c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b5c5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b5c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b5c64: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4b5c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4b5c68: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4b5c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4b5c6c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4b5c6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5c70: 0x94c20012  lhu         $v0, 0x12($a2)
    ctx->pc = 0x4b5c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x4b5c74: 0x24ab2340  addiu       $t3, $a1, 0x2340
    ctx->pc = 0x4b5c74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 9024));
    // 0x4b5c78: 0x24ac2344  addiu       $t4, $a1, 0x2344
    ctx->pc = 0x4b5c78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 9028));
    // 0x4b5c7c: 0x24ad2348  addiu       $t5, $a1, 0x2348
    ctx->pc = 0x4b5c7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 9032));
    // 0x4b5c80: 0xa4a22334  sh          $v0, 0x2334($a1)
    ctx->pc = 0x4b5c80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x4b5c84: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x4b5c84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b5c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b5c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b5c8c: 0x94c20016  lhu         $v0, 0x16($a2)
    ctx->pc = 0x4b5c8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x4b5c90: 0x95670000  lhu         $a3, 0x0($t3)
    ctx->pc = 0x4b5c90u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x72F9C0u));
    // 0x4b5c94: 0x95880000  lhu         $t0, 0x0($t4)
    ctx->pc = 0x4b5c94u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x72F9C4u));
    // 0x4b5c98: 0xa4a22336  sh          $v0, 0x2336($a1)
    ctx->pc = 0x4b5c98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x4b5c9c: 0x94c3001a  lhu         $v1, 0x1A($a2)
    ctx->pc = 0x4b5c9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x4b5ca0: 0x95a90000  lhu         $t1, 0x0($t5)
    ctx->pc = 0x4b5ca0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x72F9C8u));
    // 0x4b5ca4: 0xa4a32338  sh          $v1, 0x2338($a1)
    ctx->pc = 0x4b5ca4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B8u, _value); } while (0);
    // 0x4b5ca8: 0x8cc20124  lw          $v0, 0x124($a2)
    ctx->pc = 0x4b5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x4b5cac: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4b5cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4b5cb0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x4b5cb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x4b5cb4: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4b5cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x4b5cb8: 0x8cc20128  lw          $v0, 0x128($a2)
    ctx->pc = 0x4b5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
    // 0x4b5cbc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4b5cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4b5cc0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4b5cc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x4b5cc4: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x4b5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x4b5cc8: 0x8cc2012c  lw          $v0, 0x12C($a2)
    ctx->pc = 0x4b5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 300)));
    // 0x4b5ccc: 0xa4ae232e  sh          $t6, 0x232E($a1)
    ctx->pc = 0x4b5cccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9006), (uint16_t)GPR_U32(ctx, 14));
    // 0x4b5cd0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4b5cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4b5cd4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x4b5cd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x4b5cd8: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x4b5cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x4b5cdc: 0x94c201b6  lhu         $v0, 0x1B6($a2)
    ctx->pc = 0x4b5cdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 438)));
    // 0x4b5ce0: 0xa4a22332  sh          $v0, 0x2332($a1)
    ctx->pc = 0x4b5ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9010), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b5ce4: 0x8122e96  j           func_48BA58
    ctx->pc = 0x4B5CE4u;
    ctx->pc = 0x4B5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5CE4u;
    // 0x4b5ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BA58u, 0x4B5CE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B5CECu;
    // 0x4b5cec: 0x0  nop
    ctx->pc = 0x4b5cecu;
    // NOP
    ctx->pc = 0x4b5cf0u;
}
