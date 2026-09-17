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

// Function: sub_004A5360
// Address: 0x4a5360 - 0x4a5550
void sub_004A5360_0x4a5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5360_0x4a5360");
#endif

    switch (ctx->pc) {
        case 0x4a539cu: goto label_4a539c;
        case 0x4a5470u: goto label_4a5470;
        case 0x4a5478u: goto label_4a5478;
        case 0x4a5484u: goto label_4a5484;
        case 0x4a54d0u: goto label_4a54d0;
        case 0x4a5530u: goto label_4a5530;
        default: break;
    }

    ctx->pc = 0x4a5360u;

    // 0x4a5360: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a5360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a5364: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a5364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a5368: 0x8c46f874  lw          $a2, -0x78C($v0)
    ctx->pc = 0x4a5368u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x72F874u));
    // 0x4a536c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a536cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a5370: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a5370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a5374: 0x24700c1c  addiu       $s0, $v1, 0xC1C
    ctx->pc = 0x4a5374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3100));
    // 0x4a5378: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a5378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a537c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4a537cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0C1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C1Cu, _value); } while (0);
    // 0x4a5380: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a5380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a5384: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a5384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a5388: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a5388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a538c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a5390: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4a5390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4a5394: 0xc126cf2  jal         func_49B3C8
    ctx->pc = 0x4A5394u;
    SET_GPR_U32(ctx, 31, 0x4A539Cu);
    ctx->pc = 0x4A5398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5394u;
    // 0x4a5398: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B3C8u, 0x4A5394u, 0x4A539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A539Cu;
label_4a539c:
    // 0x4a539c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a539cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a53a0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x4a53a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a53a4: 0x246d0c24  addiu       $t5, $v1, 0xC24
    ctx->pc = 0x4a53a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 3108));
    // 0x4a53a8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a53ac: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x4a53acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x4a53b0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a53b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4a53b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a53b8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a53bc: 0x8c6a0c3c  lw          $t2, 0xC3C($v1)
    ctx->pc = 0x4a53bcu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F0C3Cu));
    // 0x4a53c0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a53c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a53c4: 0x244c0c28  addiu       $t4, $v0, 0xC28
    ctx->pc = 0x4a53c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 3112));
    // 0x4a53c8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4a53c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4a53cc: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4a53ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0C28u));
    // 0x4a53d0: 0x24e70c2c  addiu       $a3, $a3, 0xC2C
    ctx->pc = 0x4a53d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3116));
    // 0x4a53d4: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x4a53d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x4a53d8: 0x246b0c34  addiu       $t3, $v1, 0xC34
    ctx->pc = 0x4a53d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 3124));
    // 0x4a53dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a53dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a53e0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4a53e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0C2Cu));
    // 0x4a53e4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4a53e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4a53e8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a53e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a53ec: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a53ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a53f0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a53f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a53f4: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4a53f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4a53f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a53f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a53fc: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x4a53fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x4a5400: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4a5400u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4a5404: 0x85420004  lh          $v0, 0x4($t2)
    ctx->pc = 0x4a5404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4a5408: 0x25080c30  addiu       $t0, $t0, 0xC30
    ctx->pc = 0x4a5408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3120));
    // 0x4a540c: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4a540cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a5410: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4a5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4a5414: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a5414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a5418: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a5418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a541c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4a541cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4a5420: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4a5420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4a5424: 0x85450006  lh          $a1, 0x6($t2)
    ctx->pc = 0x4a5424u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x4a5428: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4a5428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4a542c: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4a542cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4a5430: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4a5430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4a5434: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x4a5434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x4a5438: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a5438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a543c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4a543cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4a5440: 0x85660000  lh          $a2, 0x0($t3)
    ctx->pc = 0x4a5440u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a5444: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a5444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a5448: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a5448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a544c: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x4a544cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x4a5450: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a5450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a5454: 0x4c0002e  bltz        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x4A5454u;
    {
        const bool branch_taken_0x4a5454 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4A5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5454u;
        // 0x4a5458: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5454) {
            ctx->pc = 0x4A5510u;
            goto label_4a5510;
        }
    }
    ctx->pc = 0x4A545Cu;
    // 0x4a545c: 0x1a0a02d  daddu       $s4, $t5, $zero
    ctx->pc = 0x4a545cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5460: 0x180982d  daddu       $s3, $t4, $zero
    ctx->pc = 0x4a5460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5464: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x4a5464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5468: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4a5468u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4a546c: 0x0  nop
    ctx->pc = 0x4a546cu;
    // NOP
label_4a5470:
    // 0x4a5470: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A5470u;
    SET_GPR_U32(ctx, 31, 0x4A5478u);
    ctx->pc = 0x4A5474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5470u;
    // 0x4a5474: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A5470u, 0x4A5478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5478u;
label_4a5478:
    // 0x4a5478: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4a5478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a547c: 0xc13e412  jal         func_4F9048
    ctx->pc = 0x4A547Cu;
    SET_GPR_U32(ctx, 31, 0x4A5484u);
    ctx->pc = 0x4A5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A547Cu;
    // 0x4a5480: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9048u, 0x4A547Cu, 0x4A5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5484u;
label_4a5484:
    // 0x4a5484: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a5484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a5488: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x4a5488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a548c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4a548cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4a5490: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a5490u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5494: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a5494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a5498: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x4a5498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x4a549c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a549cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a54a0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a54a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a54a4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a54a8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a54a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a54ac: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a54acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a54b0: 0x24420b44  addiu       $v0, $v0, 0xB44
    ctx->pc = 0x4a54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2884));
    // 0x4a54b4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a54b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a54b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a54b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a54bc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a54bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a54c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a54c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a54c4: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x4a54c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a54c8: 0xc129370  jal         func_4A4DC0
    ctx->pc = 0x4A54C8u;
    SET_GPR_U32(ctx, 31, 0x4A54D0u);
    ctx->pc = 0x4A54CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A54C8u;
    // 0x4a54cc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4DC0u, 0x4A54C8u, 0x4A54D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A54D0u;
label_4a54d0:
    // 0x4a54d0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4a54d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a54d4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a54d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a54d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a54d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a54dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a54dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a54e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a54e4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4a54e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4a54e8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a54e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a54ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a54ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a54f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a54f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a54f4: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x4a54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x4a54f8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4a54f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4a54fc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a54fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a5500: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4a5500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4a5504: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a5504u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a5508: 0x441ffd9  bgez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x4A5508u;
    {
        const bool branch_taken_0x4a5508 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5508u;
        // 0x4a550c: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5508) {
            ctx->pc = 0x4A5470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5470;
        }
    }
    ctx->pc = 0x4A5510u;
label_4a5510:
    // 0x4a5510: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a5510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5514: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a5514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a5518: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a5518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a551c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a551cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a5520: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a5520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a5524: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4a5524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a5528: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5528u;
        // 0x4a552c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5530u;
label_4a5530:
    // 0x4a5530: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x4a5530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a5534: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x4a5534u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a5538: 0xa482002c  sh          $v0, 0x2C($a0)
    ctx->pc = 0x4a5538u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a553c: 0xa4820024  sh          $v0, 0x24($a0)
    ctx->pc = 0x4a553cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5540: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x4a5540u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a5544: 0xa4820028  sh          $v0, 0x28($a0)
    ctx->pc = 0x4a5544u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a5548: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5548u;
        // 0x4a554c: 0xa480002a  sh          $zero, 0x2A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5550u;
}
