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

// Function: sub_0049A1D8
// Address: 0x49a1d8 - 0x49a2c8
void sub_0049A1D8_0x49a1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A1D8_0x49a1d8");
#endif

    ctx->pc = 0x49a1d8u;

    // 0x49a1d8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49a1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49a1dc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49a1e0: 0x24e70b5c  addiu       $a3, $a3, 0xB5C
    ctx->pc = 0x49a1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2908));
    // 0x49a1e4: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49a1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49a1e8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x49a1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0B5Cu));
    // 0x49a1ec: 0x25080b58  addiu       $t0, $t0, 0xB58
    ctx->pc = 0x49a1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2904));
    // 0x49a1f0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49a1f4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x49a1f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x49a1f8: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x49a1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49a1fc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x49a1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49a200: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x49a200u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0B5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B5Cu, _value); } while (0);
    // 0x49a204: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x49a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49a208: 0x24ca0004  addiu       $t2, $a2, 0x4
    ctx->pc = 0x49a208u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49a20c: 0x24a50b3c  addiu       $a1, $a1, 0xB3C
    ctx->pc = 0x49a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2876));
    // 0x49a210: 0x94820b50  lhu         $v0, 0xB50($a0)
    ctx->pc = 0x49a210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B50u));
    // 0x49a214: 0x24cb0006  addiu       $t3, $a2, 0x6
    ctx->pc = 0x49a214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x49a218: 0x24cc0008  addiu       $t4, $a2, 0x8
    ctx->pc = 0x49a218u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x49a21c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49a21cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a220: 0x24c6000a  addiu       $a2, $a2, 0xA
    ctx->pc = 0x49a220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x49a224: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49a224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0B5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B5Cu, _value); } while (0);
    // 0x49a228: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x49a228u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49a22c: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x49a22cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x7F0B5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B5Cu, _value); } while (0);
    // 0x49a230: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x49a230u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B58u));
    // 0x49a234: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49a234u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B3Cu));
    // 0x49a238: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x49a238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x49a23c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a240: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49a240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49a244: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a248: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49a248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49a24c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49a24cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a250: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x49a250u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a254: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x49a254u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x49a258: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x49a258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49a25c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a260: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x49a260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x49a264: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a268: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49a268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49a26c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a270: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49a270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49a274: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49a274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a278: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x49a278u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a27c: 0xacec0000  sw          $t4, 0x0($a3)
    ctx->pc = 0x49a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 12));
    // 0x49a280: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x49a280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49a284: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49a284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a288: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x49a288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x49a28c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a290: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49a294: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a298: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49a298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49a29c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a2a0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49a2a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a2a4: 0x24421800  addiu       $v0, $v0, 0x1800
    ctx->pc = 0x49a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6144));
    // 0x49a2a8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49a2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49a2ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a2b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49a2b4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49a2b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a2b8: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x49a2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x49A2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A2BCu;
        // 0x49a2c0: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A2C4u;
    // 0x49a2c4: 0x0  nop
    ctx->pc = 0x49a2c4u;
    // NOP
    ctx->pc = 0x49a2c8u;
}
