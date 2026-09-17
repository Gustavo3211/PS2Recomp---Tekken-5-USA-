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

// Function: sub_004C5458
// Address: 0x4c5458 - 0x4c5630
void sub_004C5458_0x4c5458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5458_0x4c5458");
#endif

    switch (ctx->pc) {
        case 0x4c547cu: goto label_4c547c;
        case 0x4c5498u: goto label_4c5498;
        case 0x4c5574u: goto label_4c5574;
        case 0x4c55f0u: goto label_4c55f0;
        case 0x4c5600u: goto label_4c5600;
        case 0x4c5610u: goto label_4c5610;
        case 0x4c5620u: goto label_4c5620;
        default: break;
    }

    ctx->pc = 0x4c5458u;

    // 0x4c5458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c5458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c545c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c5460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c5460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c5464: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c5464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c5468: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c5468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c546c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c546cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c5470: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c5470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c5474: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C5474u;
    SET_GPR_U32(ctx, 31, 0x4C547Cu);
    ctx->pc = 0x4C5478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5474u;
    // 0x4c5478: 0x261201b4  addiu       $s2, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C5474u, 0x4C547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C547Cu;
label_4c547c:
    // 0x4c547c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c547cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c5480: 0xac620f04  sw          $v0, 0xF04($v1)
    ctx->pc = 0x4c5480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0F04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F04u, _value); } while (0);
    // 0x4c5484: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4c5484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c5488: 0x4400043  bltz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x4C5488u;
    {
        const bool branch_taken_0x4c5488 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5488u;
        // 0x4c548c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5488) {
            ctx->pc = 0x4C5598u;
            goto label_4c5598;
        }
    }
    ctx->pc = 0x4C5490u;
    // 0x4c5490: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C5490u;
    SET_GPR_U32(ctx, 31, 0x4C5498u);
    ctx->pc = 0x4C5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5490u;
    // 0x4c5494: 0x26110140  addiu       $s1, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C5490u, 0x4C5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5498u;
label_4c5498:
    // 0x4c5498: 0x240204a5  addiu       $v0, $zero, 0x4A5
    ctx->pc = 0x4c5498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1189));
    // 0x4c549c: 0x24033000  addiu       $v1, $zero, 0x3000
    ctx->pc = 0x4c549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x4c54a0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4c54a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c54a4: 0xa603015a  sh          $v1, 0x15A($s0)
    ctx->pc = 0x4c54a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c54a8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c54a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c54ac: 0x24a50ee0  addiu       $a1, $a1, 0xEE0
    ctx->pc = 0x4c54acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3808));
    // 0x4c54b0: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4c54b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4c54b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0EE0u));
    // 0x4c54b8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c54b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c54bc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c54bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c54c0: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x4c54c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4c54c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c54c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c54c8: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c54c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c54cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c54ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c54d0: 0x26660efc  addiu       $a2, $s3, 0xEFC
    ctx->pc = 0x4c54d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 3836));
    // 0x4c54d4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c54d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c54d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c54dc: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x4c54dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4c54e0: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x4c54e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4c54e4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c54e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c54e8: 0x260b0018  addiu       $t3, $s0, 0x18
    ctx->pc = 0x4c54e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4c54ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c54ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c54f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c54f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4c54f4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c54f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c54f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c54f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c54fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c5500: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c5500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5504: 0xa6090160  sh          $t1, 0x160($s0)
    ctx->pc = 0x4c5504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 9));
    // 0x4c5508: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4c5508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c550c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c5510: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4c5510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4c5514: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c5514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c5518: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c5518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c551c: 0xa602016a  sh          $v0, 0x16A($s0)
    ctx->pc = 0x4c551cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c5520: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4c5520u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c5524: 0xa6030120  sh          $v1, 0x120($s0)
    ctx->pc = 0x4c5524u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c5528: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c5528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c552c: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4c552cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c5530: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4c5530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4c5534: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c5534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c5538: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c5538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c553c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c553cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c5540: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c5540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c5544: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x4c5544u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c5548: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x4c5548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4c554c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c5550: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c5550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c5554: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c5554u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c5558: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c5558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c555c: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4c555cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c5560: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x4c5560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4c5564: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4c5564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4c5568: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c5568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c556c: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4C556Cu;
    SET_GPR_U32(ctx, 31, 0x4C5574u);
    ctx->pc = 0x4C5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C556Cu;
    // 0x4c5570: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4C556Cu, 0x4C5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5574u;
label_4c5574:
    // 0x4c5574: 0x260401b6  addiu       $a0, $s0, 0x1B6
    ctx->pc = 0x4c5574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
    // 0x4c5578: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c5578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c557c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4c557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4c5580: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4c5580u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c5584: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4c5584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c5588: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4c5588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x4c558c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C558Cu;
    {
        const bool branch_taken_0x4c558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C558Cu;
        // 0x4c5590: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c558c) {
            ctx->pc = 0x4C55A0u;
            goto label_4c55a0;
        }
    }
    ctx->pc = 0x4C5594u;
    // 0x4c5594: 0x0  nop
    ctx->pc = 0x4c5594u;
    // NOP
label_4c5598:
    // 0x4c5598: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4c5598u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4c559c: 0x26110140  addiu       $s1, $s0, 0x140
    ctx->pc = 0x4c559cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_4c55a0:
    // 0x4c55a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c55a4: 0xae630efc  sw          $v1, 0xEFC($s3)
    ctx->pc = 0x4c55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3836), GPR_U32(ctx, 3));
    // 0x4c55a8: 0x846201b4  lh          $v0, 0x1B4($v1)
    ctx->pc = 0x4c55a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x4c55ac: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C55ACu;
    {
        const bool branch_taken_0x4c55ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C55ACu;
        // 0x4c55b0: 0x260301bc  addiu       $v1, $s0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c55ac) {
            ctx->pc = 0x4C55BCu;
            goto label_4c55bc;
        }
    }
    ctx->pc = 0x4C55B4u;
    // 0x4c55b4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4c55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4c55b8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4c55b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c55bc:
    // 0x4c55bc: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4c55bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c55c0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4c55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4c55c4: 0x2c430009  sltiu       $v1, $v0, 0x9
    ctx->pc = 0x4c55c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4c55c8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4C55C8u;
    {
        const bool branch_taken_0x4c55c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C55C8u;
        // 0x4c55cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c55c8) {
            ctx->pc = 0x4C5634u;
            return;
        }
    }
    ctx->pc = 0x4C55D0u;
    // 0x4c55d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4c55d4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c55d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c55dc: 0x8c63b4c0  lw          $v1, -0x4B40($v1)
    ctx->pc = 0x4c55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948032)));
    // 0x4c55e0: 0x600008  jr          $v1
    ctx->pc = 0x4C55E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4C55E8u: goto label_4c55e8;
            case 0x4C55F8u: goto label_4c55f8;
            case 0x4C5608u: goto label_4c5608;
            case 0x4C5618u: goto label_4c5618;
            case 0x4C5628u: goto label_4c5628;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C55E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4C55E8u;
label_4c55e8:
    // 0x4c55e8: 0xc1315be  jal         func_4C56F8
    ctx->pc = 0x4C55E8u;
    SET_GPR_U32(ctx, 31, 0x4C55F0u);
    ctx->pc = 0x4C55ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C55E8u;
    // 0x4c55ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C56F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C56F8u, 0x4C55E8u, 0x4C55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C55F0u;
label_4c55f0:
    // 0x4c55f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4C55F0u;
    {
        const bool branch_taken_0x4c55f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C55F0u;
        // 0x4c55f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c55f0) {
            ctx->pc = 0x4C5634u;
            return;
        }
    }
    ctx->pc = 0x4C55F8u;
label_4c55f8:
    // 0x4c55f8: 0xc1315dc  jal         func_4C5770
    ctx->pc = 0x4C55F8u;
    SET_GPR_U32(ctx, 31, 0x4C5600u);
    ctx->pc = 0x4C55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C55F8u;
    // 0x4c55fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C5770u, 0x4C55F8u, 0x4C5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5600u;
label_4c5600:
    // 0x4c5600: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C5600u;
    {
        const bool branch_taken_0x4c5600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5600u;
        // 0x4c5604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5600) {
            ctx->pc = 0x4C5634u;
            return;
        }
    }
    ctx->pc = 0x4C5608u;
label_4c5608:
    // 0x4c5608: 0xc13160a  jal         func_4C5828
    ctx->pc = 0x4C5608u;
    SET_GPR_U32(ctx, 31, 0x4C5610u);
    ctx->pc = 0x4C560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5608u;
    // 0x4c560c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C5828u, 0x4C5608u, 0x4C5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5610u;
label_4c5610:
    // 0x4c5610: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4C5610u;
    {
        const bool branch_taken_0x4c5610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5610u;
        // 0x4c5614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5610) {
            ctx->pc = 0x4C5634u;
            return;
        }
    }
    ctx->pc = 0x4C5618u;
label_4c5618:
    // 0x4c5618: 0xc131638  jal         func_4C58E0
    ctx->pc = 0x4C5618u;
    SET_GPR_U32(ctx, 31, 0x4C5620u);
    ctx->pc = 0x4C561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5618u;
    // 0x4c561c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C58E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C58E0u, 0x4C5618u, 0x4C5620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5620u;
label_4c5620:
    // 0x4c5620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C5620u;
    {
        const bool branch_taken_0x4c5620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5620u;
        // 0x4c5624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5620) {
            ctx->pc = 0x4C5634u;
            return;
        }
    }
    ctx->pc = 0x4C5628u;
label_4c5628:
    // 0x4c5628: 0xc1315d4  jal         func_4C5750
    ctx->pc = 0x4C5628u;
    SET_GPR_U32(ctx, 31, 0x4C5630u);
    ctx->pc = 0x4C562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C5628u;
    // 0x4c562c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C5750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C5750u, 0x4C5628u, 0x4C5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C5630u;
}
