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

// Function: sub_00496100
// Address: 0x496100 - 0x4962f8
void sub_00496100_0x496100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496100_0x496100");
#endif

    switch (ctx->pc) {
        case 0x496208u: goto label_496208;
        case 0x4962dcu: goto label_4962dc;
        default: break;
    }

    ctx->pc = 0x496100u;

label_496100:
    // 0x496100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x496100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x496104: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x496104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x496108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x496108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49610c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x49610cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x496110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x496110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x496114: 0x24840ae8  addiu       $a0, $a0, 0xAE8
    ctx->pc = 0x496114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x496118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49611c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49611cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x496120: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x496120u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AE8u));
    // 0x496124: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x496124u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x496128: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x496128u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x49612c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x49612cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x496130: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x496130u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496134: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x496134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x496138: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x496138u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x49613c: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x49613cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x496140: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x496140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x496144: 0x24690006  addiu       $t1, $v1, 0x6
    ctx->pc = 0x496144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x496148: 0x94a20ae4  lhu         $v0, 0xAE4($a1)
    ctx->pc = 0x496148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0AE4u));
    // 0x49614c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49614cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x496150: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x496150u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x496154: 0x2468000a  addiu       $t0, $v1, 0xA
    ctx->pc = 0x496154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x496158: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x496158u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49615c: 0x24a50ad0  addiu       $a1, $a1, 0xAD0
    ctx->pc = 0x49615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2768));
    // 0x496160: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x496160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x496164: 0x246a000e  addiu       $t2, $v1, 0xE
    ctx->pc = 0x496164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x496168: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x496168u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49616c: 0x2466000c  addiu       $a2, $v1, 0xC
    ctx->pc = 0x49616cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x496170: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x496170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x496174: 0x246d0012  addiu       $t5, $v1, 0x12
    ctx->pc = 0x496174u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 18));
    // 0x496178: 0x24710018  addiu       $s1, $v1, 0x18
    ctx->pc = 0x496178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x49617c: 0x95820ad4  lhu         $v0, 0xAD4($t4)
    ctx->pc = 0x49617cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0AD4u));
    // 0x496180: 0x246c0010  addiu       $t4, $v1, 0x10
    ctx->pc = 0x496180u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x496184: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x496184u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496188: 0x24670014  addiu       $a3, $v1, 0x14
    ctx->pc = 0x496188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x49618c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x49618cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x496190: 0x24630016  addiu       $v1, $v1, 0x16
    ctx->pc = 0x496190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x496194: 0x95c20ad8  lhu         $v0, 0xAD8($t6)
    ctx->pc = 0x496194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0AD8u));
    // 0x496198: 0x240e7fff  addiu       $t6, $zero, 0x7FFF
    ctx->pc = 0x496198u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x49619c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x49619cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4961a0: 0xac8b0000  sw          $t3, 0x0($a0)
    ctx->pc = 0x4961a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x4961a4: 0x96020adc  lhu         $v0, 0xADC($s0)
    ctx->pc = 0x4961a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0ADCu));
    // 0x4961a8: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4961a8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4961ac: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x4961acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x4961b0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x4961b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0AD2u));
    // 0x4961b4: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4961b4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4961b8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x4961b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x4961bc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4961bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0AD0u));
    // 0x4961c0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4961c0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4961c4: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x4961c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x4961c8: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x4961c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0AD2u));
    // 0x4961cc: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4961ccu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4961d0: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x4961d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x4961d4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4961d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0AD0u));
    // 0x4961d8: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x4961d8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4961dc: 0xac8d0000  sw          $t5, 0x0($a0)
    ctx->pc = 0x4961dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x4961e0: 0xa5a00000  sh          $zero, 0x0($t5)
    ctx->pc = 0x4961e0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4961e4: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x4961e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x4961e8: 0xa4ee0000  sh          $t6, 0x0($a3)
    ctx->pc = 0x4961e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x4961ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4961ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x4961f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4961f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4961f4: 0xa46f0000  sh          $t7, 0x0($v1)
    ctx->pc = 0x4961f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x4961f8: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x4961f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x7F0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AE8u, _value); } while (0);
    // 0x4961fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4961fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x496200: 0x3e00008  jr          $ra
    ctx->pc = 0x496200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x496204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496200u;
        // 0x496204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x496200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x496208u;
label_496208:
    // 0x496208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x496208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49620c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x49620cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x496210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x496210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x496214: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x496214u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x496218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x496218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49621c: 0x258c0ae4  addiu       $t4, $t4, 0xAE4
    ctx->pc = 0x49621cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2788));
    // 0x496220: 0x24870128  addiu       $a3, $a0, 0x128
    ctx->pc = 0x496220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 296));
    // 0x496224: 0x2484012c  addiu       $a0, $a0, 0x12C
    ctx->pc = 0x496224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x496228: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x496228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x49622c: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x49622cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x496230: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x496230u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0AE4u));
    // 0x496234: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x496234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x496238: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x496238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x49623c: 0x24c60ad4  addiu       $a2, $a2, 0xAD4
    ctx->pc = 0x49623cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2772));
    // 0x496240: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x496240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x496244: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x496244u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AD4u));
    // 0x496248: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x496248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x49624c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x49624cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x496250: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x496250u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x496254: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x496254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x496258: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x496258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49625c: 0x25290ad8  addiu       $t1, $t1, 0xAD8
    ctx->pc = 0x49625cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2776));
    // 0x496260: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x496260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x496264: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x496264u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x496268: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x496268u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0AD8u));
    // 0x49626c: 0x254a0adc  addiu       $t2, $t2, 0xADC
    ctx->pc = 0x49626cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2780));
    // 0x496270: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x496270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x496274: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x496274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x496278: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x496278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49627c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49627cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x496280: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x496280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x496284: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x496284u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x496288: 0x240d7fff  addiu       $t5, $zero, 0x7FFF
    ctx->pc = 0x496288u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x49628c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x496290: 0x86080092  lh          $t0, 0x92($s0)
    ctx->pc = 0x496290u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x496294: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x496294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x496298: 0x85860000  lh          $a2, 0x0($t4)
    ctx->pc = 0x496298u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49629c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49629cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4962a0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4962a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4962a4: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4962a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4962a8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x4962a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x4962ac: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4962acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4962b0: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x4962b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x4962b4: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x4962b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x4962b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4962b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4962bc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4962bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4962c0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4962c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4962c4: 0xadcd0ad0  sw          $t5, 0xAD0($t6)
    ctx->pc = 0x4962c4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 2768), GPR_U32(ctx, 13));
    // 0x4962c8: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4962c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x4962cc: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4962ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4962d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4962d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4962d4: 0xc125840  jal         func_496100
    ctx->pc = 0x4962D4u;
    SET_GPR_U32(ctx, 31, 0x4962DCu);
    ctx->pc = 0x4962D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4962D4u;
    // 0x4962d8: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x496100u;
    goto label_496100;
    ctx->pc = 0x4962DCu;
label_4962dc:
    // 0x4962dc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4962dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4962e0: 0x8c430ae8  lw          $v1, 0xAE8($v0)
    ctx->pc = 0x4962e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0AE8u));
    // 0x4962e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4962e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4962e8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x4962e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x4962ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4962ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4962f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4962F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4962F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4962F0u;
        // 0x4962f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4962F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4962F8u;
}
