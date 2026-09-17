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

// Function: sub_004D6420
// Address: 0x4d6420 - 0x4d7670
void sub_004D6420_0x4d6420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6420_0x4d6420");
#endif

    switch (ctx->pc) {
        case 0x4d644cu: goto label_4d644c;
        case 0x4d6468u: goto label_4d6468;
        case 0x4d6608u: goto label_4d6608;
        case 0x4d6628u: goto label_4d6628;
        case 0x4d685cu: goto label_4d685c;
        case 0x4d6898u: goto label_4d6898;
        case 0x4d68b8u: goto label_4d68b8;
        case 0x4d6cc0u: goto label_4d6cc0;
        case 0x4d6cd0u: goto label_4d6cd0;
        case 0x4d6ce4u: goto label_4d6ce4;
        case 0x4d6d28u: goto label_4d6d28;
        case 0x4d6d38u: goto label_4d6d38;
        case 0x4d6d4cu: goto label_4d6d4c;
        case 0x4d6d90u: goto label_4d6d90;
        case 0x4d6da0u: goto label_4d6da0;
        case 0x4d6db4u: goto label_4d6db4;
        case 0x4d6decu: goto label_4d6dec;
        case 0x4d6dfcu: goto label_4d6dfc;
        case 0x4d6e10u: goto label_4d6e10;
        case 0x4d6e84u: goto label_4d6e84;
        case 0x4d6f94u: goto label_4d6f94;
        case 0x4d7154u: goto label_4d7154;
        case 0x4d7178u: goto label_4d7178;
        case 0x4d7228u: goto label_4d7228;
        case 0x4d72ecu: goto label_4d72ec;
        case 0x4d744cu: goto label_4d744c;
        case 0x4d7590u: goto label_4d7590;
        case 0x4d7624u: goto label_4d7624;
        case 0x4d762cu: goto label_4d762c;
        case 0x4d7634u: goto label_4d7634;
        default: break;
    }

    ctx->pc = 0x4d6420u;

    // 0x4d6420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d6420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d6424: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d6424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d6428: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d6428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d642c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d6430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d6430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d6434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d6434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d6438: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d6438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d643c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d6440: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d6440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4d6444: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4D6444u;
    SET_GPR_U32(ctx, 31, 0x4D644Cu);
    ctx->pc = 0x4D6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6444u;
    // 0x4d6448: 0x269501b4  addiu       $s5, $s4, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4D6444u, 0x4D644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D644Cu;
label_4d644c:
    // 0x4d644c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d644cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d6450: 0xac6210a8  sw          $v0, 0x10A8($v1)
    ctx->pc = 0x4d6450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F10A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F10A8u, _value); } while (0);
    // 0x4d6454: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4d6454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d6458: 0x4400077  bltz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x4D6458u;
    {
        const bool branch_taken_0x4d6458 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6458u;
        // 0x4d645c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6458) {
            ctx->pc = 0x4D6638u;
            goto label_4d6638;
        }
    }
    ctx->pc = 0x4D6460u;
    // 0x4d6460: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4D6460u;
    SET_GPR_U32(ctx, 31, 0x4D6468u);
    ctx->pc = 0x4D6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6460u;
    // 0x4d6464: 0x3c12007f  lui         $s2, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D6460u, 0x4D6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6468u;
label_4d6468:
    // 0x4d6468: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4d6468u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4d646c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4d646cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4d6470: 0x25ce10ac  addiu       $t6, $t6, 0x10AC
    ctx->pc = 0x4d6470u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4268));
    // 0x4d6474: 0x24427ad8  addiu       $v0, $v0, 0x7AD8
    ctx->pc = 0x4d6474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31448));
    // 0x4d6478: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4d6478u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4d647c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d647cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x547AD8u));
    // 0x4d6480: 0x258c1090  addiu       $t4, $t4, 0x1090
    ctx->pc = 0x4d6480u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4240));
    // 0x4d6484: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4d6484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F10ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F10ACu, _value); } while (0);
    // 0x4d6488: 0x268b01be  addiu       $t3, $s4, 0x1BE
    ctx->pc = 0x4d6488u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 446));
    // 0x4d648c: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x4d648cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d6490: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x4d6490u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x4d6494: 0x3c0f0054  lui         $t7, 0x54
    ctx->pc = 0x4d6494u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)84 << 16));
    // 0x4d6498: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x4d6498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d649c: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4d649cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d64a0: 0x25ef7ae8  addiu       $t7, $t7, 0x7AE8
    ctx->pc = 0x4d64a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 31464));
    // 0x4d64a4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4d64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1090u));
    // 0x4d64a8: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d64a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d64ac: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4d64acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4d64b0: 0x263110a0  addiu       $s1, $s1, 0x10A0
    ctx->pc = 0x4d64b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4256));
    // 0x4d64b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d64b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d64b8: 0x2652109c  addiu       $s2, $s2, 0x109C
    ctx->pc = 0x4d64b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4252));
    // 0x4d64bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d64bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d64c0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d64c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d64c4: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d64c4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4d64c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d64c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d64cc: 0x261010a4  addiu       $s0, $s0, 0x10A4
    ctx->pc = 0x4d64ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4260));
    // 0x4d64d0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4d64d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4d64d4: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4d64d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d64d8: 0x36730070  ori         $s3, $s3, 0x70
    ctx->pc = 0x4d64d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)112);
    // 0x4d64dc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d64dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d64e0: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d64e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4d64e4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x4d64e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x4d64e8: 0x24c61094  addiu       $a2, $a2, 0x1094
    ctx->pc = 0x4d64e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4244));
    // 0x4d64ec: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4d64ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4d64f0: 0x24e71098  addiu       $a3, $a3, 0x1098
    ctx->pc = 0x4d64f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4248));
    // 0x4d64f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d64f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d64f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d64f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d64fc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d64fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4d6500: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6504: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4d6504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6508: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x4d6508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d650c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4d650cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d6510: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x4d6510u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6514: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d6514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d6518: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x4d6518u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
    // 0x4d651c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4d651cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4d6520: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6524: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d6524u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4d6528: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d652c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4d652cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d6530: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4d6530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4d6534: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4d6534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4d6538: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d653c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d653cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4d6540: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4d6540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d6544: 0xa6820160  sh          $v0, 0x160($s4)
    ctx->pc = 0x4d6544u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d6548: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x4d6548u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
    // 0x4d654c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4d654cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d6550: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4d6550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d6554: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6558: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4d6558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4d655c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d655cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6560: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d6560u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4d6564: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6568: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4d6568u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d656c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4d656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4d6570: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4d6570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4d6574: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6578: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d6578u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4d657c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d657cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6580: 0x858b0000  lh          $t3, 0x0($t4)
    ctx->pc = 0x4d6580u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d6584: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x4d6584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x4d6588: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4d6588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4d658c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d658cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d6590: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4d6590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4d6594: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6598: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d6598u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4d659c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4d659cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d65a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d65a4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d65a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d65a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d65ac: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x4d65acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x4d65b0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d65b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d65b4: 0x244b0002  addiu       $t3, $v0, 0x2
    ctx->pc = 0x4d65b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d65b8: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4d65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4d65bc: 0x244c0004  addiu       $t4, $v0, 0x4
    ctx->pc = 0x4d65bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4d65c0: 0xa6830118  sh          $v1, 0x118($s4)
    ctx->pc = 0x4d65c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d65c4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4d65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4d65c8: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x4d65c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x4d65cc: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4d65ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d65d0: 0xa683011c  sh          $v1, 0x11C($s4)
    ctx->pc = 0x4d65d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d65d4: 0xadcc0000  sw          $t4, 0x0($t6)
    ctx->pc = 0x4d65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 12));
    // 0x4d65d8: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4d65d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d65dc: 0xa6830120  sh          $v1, 0x120($s4)
    ctx->pc = 0x4d65dcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d65e0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4d65e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4d65e4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4d65e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x4d65e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4d65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d65ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d65ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d65f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d65f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d65f4: 0x6d1824  and         $v1, $v1, $t5
    ctx->pc = 0x4d65f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 13));
    // 0x4d65f8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4d65f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4d65fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d65fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d6600: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4D6600u;
    SET_GPR_U32(ctx, 31, 0x4D6608u);
    ctx->pc = 0x4D6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6600u;
    // 0x4d6604: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4D6600u, 0x4D6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6608u;
label_4d6608:
    // 0x4d6608: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4d6608u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d660c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6610: 0xa6830136  sh          $v1, 0x136($s4)
    ctx->pc = 0x4d6610u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 310), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d6614: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d6614u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6618: 0xa6820138  sh          $v0, 0x138($s4)
    ctx->pc = 0x4d6618u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 312), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d661c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4d661cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d6620: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4D6620u;
    SET_GPR_U32(ctx, 31, 0x4D6628u);
    ctx->pc = 0x4D6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6620u;
    // 0x4d6624: 0xa683013a  sh          $v1, 0x13A($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 314), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4D6620u, 0x4D6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6628u;
label_4d6628:
    // 0x4d6628: 0xa68001b6  sh          $zero, 0x1B6($s4)
    ctx->pc = 0x4d6628u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d662c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4d662cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d6630: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d6630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4d6634: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4d6634u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d6638:
    // 0x4d6638: 0x968201bc  lhu         $v0, 0x1BC($s4)
    ctx->pc = 0x4d6638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x4d663c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d663cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d6640: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d6640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d6644: 0x2c43000a  sltiu       $v1, $v0, 0xA
    ctx->pc = 0x4d6644u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x4d6648: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x4D6648u;
    {
        const bool branch_taken_0x4d6648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6648u;
        // 0x4d664c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6648) {
            ctx->pc = 0x4D67F8u;
            goto label_4d67f8;
        }
    }
    ctx->pc = 0x4D6650u;
    // 0x4d6650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d6650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d6654: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d6654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4d6658: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d6658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d665c: 0x8c63b810  lw          $v1, -0x47F0($v1)
    ctx->pc = 0x4d665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948880)));
    // 0x4d6660: 0x600008  jr          $v1
    ctx->pc = 0x4D6660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4D6668u: goto label_4d6668;
            case 0x4D6690u: goto label_4d6690;
            case 0x4D66B8u: goto label_4d66b8;
            case 0x4D66E0u: goto label_4d66e0;
            case 0x4D6708u: goto label_4d6708;
            case 0x4D6730u: goto label_4d6730;
            case 0x4D6758u: goto label_4d6758;
            case 0x4D6780u: goto label_4d6780;
            case 0x4D67A8u: goto label_4d67a8;
            case 0x4D67D0u: goto label_4d67d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D6660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4D6668u;
label_4d6668:
    // 0x4d6668: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d6668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d666c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d666cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d6670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d6670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d6674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d6678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d667c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d667cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d6680: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d6680u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d6684: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d6684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d6688: 0x8135a06  j           func_4D6818
    ctx->pc = 0x4D6688u;
    ctx->pc = 0x4D668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6688u;
    // 0x4d668c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6818u;
    goto label_4d6818;
    ctx->pc = 0x4D6690u;
label_4d6690:
    // 0x4d6690: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d6690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6694: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d6694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d6698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d6698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d669c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d669cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d66a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d66a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d66a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d66a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d66a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d66a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d66ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d66acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d66b0: 0x8135a26  j           func_4D6898
    ctx->pc = 0x4D66B0u;
    ctx->pc = 0x4D66B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D66B0u;
    // 0x4d66b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6898u;
    goto label_4d6898;
    ctx->pc = 0x4D66B8u;
label_4d66b8:
    // 0x4d66b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d66b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d66bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d66bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d66c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d66c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d66c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d66c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d66c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d66c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d66cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d66ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d66d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d66d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d66d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d66d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d66d8: 0x8135a38  j           func_4D68E0
    ctx->pc = 0x4D66D8u;
    ctx->pc = 0x4D66DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D66D8u;
    // 0x4d66dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D68E0u;
    goto label_4d68e0;
    ctx->pc = 0x4D66E0u;
label_4d66e0:
    // 0x4d66e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d66e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d66e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d66e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d66e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d66e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d66ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d66ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d66f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d66f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d66f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d66f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d66f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d66f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d66fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d66fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d6700: 0x8135a7e  j           func_4D69F8
    ctx->pc = 0x4D6700u;
    ctx->pc = 0x4D6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6700u;
    // 0x4d6704: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D69F8u;
    goto label_4d69f8;
    ctx->pc = 0x4D6708u;
label_4d6708:
    // 0x4d6708: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d6708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d670c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d670cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d6710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d6710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d6714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6718: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d6718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d671c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d671cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d6720: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d6720u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d6724: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d6724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d6728: 0x8135a92  j           func_4D6A48
    ctx->pc = 0x4D6728u;
    ctx->pc = 0x4D672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6728u;
    // 0x4d672c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6A48u;
    goto label_4d6a48;
    ctx->pc = 0x4D6730u;
label_4d6730:
    // 0x4d6730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d6730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6734: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d6734u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d6738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d6738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d673c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d673cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d6740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d6744: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d6744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d6748: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d6748u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d674c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d6750: 0x8135aa2  j           func_4D6A88
    ctx->pc = 0x4D6750u;
    ctx->pc = 0x4D6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6750u;
    // 0x4d6754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6A88u;
    goto label_4d6a88;
    ctx->pc = 0x4D6758u;
label_4d6758:
    // 0x4d6758: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d6758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d675c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d675cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d6760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d6760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d6764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d6768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d676c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d676cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d6770: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d6770u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d6774: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d6774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d6778: 0x8135bbc  j           func_4D6EF0
    ctx->pc = 0x4D6778u;
    ctx->pc = 0x4D677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6778u;
    // 0x4d677c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6EF0u;
    goto label_4d6ef0;
    ctx->pc = 0x4D6780u;
label_4d6780:
    // 0x4d6780: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d6780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6784: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d6784u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d6788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d6788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d678c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d678cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6790: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d6790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d6794: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d6794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d6798: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d6798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d679c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d67a0: 0x8135c6a  j           func_4D71A8
    ctx->pc = 0x4D67A0u;
    ctx->pc = 0x4D67A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D67A0u;
    // 0x4d67a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D71A8u;
    goto label_4d71a8;
    ctx->pc = 0x4D67A8u;
label_4d67a8:
    // 0x4d67a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d67a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d67ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d67acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d67b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d67b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d67b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d67b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d67b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d67b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d67bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d67bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d67c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d67c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d67c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d67c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d67c8: 0x8135a7e  j           func_4D69F8
    ctx->pc = 0x4D67C8u;
    ctx->pc = 0x4D67CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D67C8u;
    // 0x4d67cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D69F8u;
    goto label_4d69f8;
    ctx->pc = 0x4D67D0u;
label_4d67d0:
    // 0x4d67d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d67d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d67d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d67d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d67d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d67d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d67dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d67dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d67e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d67e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d67e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d67e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d67e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d67e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d67ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d67ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d67f0: 0x8135ca6  j           func_4D7298
    ctx->pc = 0x4D67F0u;
    ctx->pc = 0x4D67F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D67F0u;
    // 0x4d67f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7298u;
    goto label_4d7298;
    ctx->pc = 0x4D67F8u;
label_4d67f8:
    // 0x4d67f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d67f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d67fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d67fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d6800: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d6800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d6804: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d6804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d6808: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d6808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d680c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d680cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d6810: 0x3e00008  jr          $ra
    ctx->pc = 0x4D6810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6810u;
        // 0x4d6814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D6810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D6818u;
label_4d6818:
    // 0x4d6818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d6818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d681c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d6820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d6820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d6824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d6824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6828: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d6828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d682c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d682cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d6830: 0xa60201c2  sh          $v0, 0x1C2($s0)
    ctx->pc = 0x4d6830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d6834: 0x24c61090  addiu       $a2, $a2, 0x1090
    ctx->pc = 0x4d6834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4240));
    // 0x4d6838: 0x86050160  lh          $a1, 0x160($s0)
    ctx->pc = 0x4d6838u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4d683c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d6840: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d6840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1090u));
    // 0x4d6844: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4d6844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4d6848: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d6848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d684c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4d6850: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4d6850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4d6854: 0xc135d9c  jal         func_4D7670
    ctx->pc = 0x4D6854u;
    SET_GPR_U32(ctx, 31, 0x4D685Cu);
    ctx->pc = 0x4D6858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6854u;
    // 0x4d6858: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7670u, 0x4D6854u, 0x4D685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D685Cu;
label_4d685c:
    // 0x4d685c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d685cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D6860u;
    {
        const bool branch_taken_0x4d6860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6860u;
        // 0x4d6864: 0x260301bc  addiu       $v1, $s0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6860) {
            ctx->pc = 0x4D6878u;
            goto label_4d6878;
        }
    }
    ctx->pc = 0x4D6868u;
    // 0x4d6868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d6868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d686c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d686cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6870: 0x8135cae  j           func_4D72B8
    ctx->pc = 0x4D6870u;
    ctx->pc = 0x4D6874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6870u;
    // 0x4d6874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D72B8u;
    goto label_4d72b8;
    ctx->pc = 0x4D6878u;
label_4d6878:
    // 0x4d6878: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d6878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d687c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d687cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6880: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d6880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d6884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6888: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d688c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d688cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d6890: 0x8135a26  j           func_4D6898
    ctx->pc = 0x4D6890u;
    ctx->pc = 0x4D6894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6890u;
    // 0x4d6894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6898u;
    goto label_4d6898;
    ctx->pc = 0x4D6898u;
label_4d6898:
    // 0x4d6898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d6898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d689c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d689cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4d68a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d68a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d68a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d68a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d68a8: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x4d68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x4d68ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d68acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d68b0: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4D68B0u;
    SET_GPR_U32(ctx, 31, 0x4D68B8u);
    ctx->pc = 0x4D68B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D68B0u;
    // 0x4d68b4: 0xa462fa44  sh          $v0, -0x5BC($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965828), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D68B0u, 0x4D68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D68B8u;
label_4d68b8:
    // 0x4d68b8: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4d68b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d68bc: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4d68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4d68c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d68c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d68c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d68c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d68c8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d68c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d68cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d68ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d68d0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d68d4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d68d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d68d8: 0x8135a38  j           func_4D68E0
    ctx->pc = 0x4D68D8u;
    ctx->pc = 0x4D68DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D68D8u;
    // 0x4d68dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D68E0u;
    goto label_4d68e0;
    ctx->pc = 0x4D68E0u;
label_4d68e0:
    // 0x4d68e0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4d68e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d68e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d68e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d68e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d68ec: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d68ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d68f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d68f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d68f4: 0x24c61090  addiu       $a2, $a2, 0x1090
    ctx->pc = 0x4d68f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4240));
    // 0x4d68f8: 0xa54201c2  sh          $v0, 0x1C2($t2)
    ctx->pc = 0x4d68f8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d68fc: 0x25450166  addiu       $a1, $t2, 0x166
    ctx->pc = 0x4d68fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 358));
    // 0x4d6900: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4d6900u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4d6904: 0x3c090054  lui         $t1, 0x54
    ctx->pc = 0x4d6904u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)84 << 16));
    // 0x4d6908: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d6908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d690c: 0x25297ad8  addiu       $t1, $t1, 0x7AD8
    ctx->pc = 0x4d690cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31448));
    // 0x4d6910: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d6910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1090u));
    // 0x4d6914: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d6914u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4d6918: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d6918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d691c: 0x254b01bc  addiu       $t3, $t2, 0x1BC
    ctx->pc = 0x4d691cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 444));
    // 0x4d6920: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6924: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6928: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d6928u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4d692c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d692cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d6930: 0x24420056  addiu       $v0, $v0, 0x56
    ctx->pc = 0x4d6930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 86));
    // 0x4d6934: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4d6934u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d6938: 0xace910ac  sw          $t1, 0x10AC($a3)
    ctx->pc = 0x4d6938u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4268), GPR_U32(ctx, 9));
    // 0x4d693c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d693cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d6940: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4d6940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d6944: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4d6944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4d6948: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d6948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d694c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d694cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d6950: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6954: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d6954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d6958: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d6958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d695c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4d695cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4d6960: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d6960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d6964: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d6964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d6968: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d6968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d696c: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4d696cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4d6970: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d6970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d6974: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d6974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d6978: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4d6978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4d697c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d697cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d6980: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d6980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d6984: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4d6984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4d6988: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4d6988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4d698c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d698cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d6990: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4d6990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4d6994: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d6994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d6998: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d6998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d699c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d699cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d69a0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d69a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d69a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d69a8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4d69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4d69ac: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d69acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d69b0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4d69b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4d69b4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4d69b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4d69b8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4d69b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4d69bc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4d69bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d69c0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D69C0u;
    {
        const bool branch_taken_0x4d69c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D69C0u;
        // 0x4d69c4: 0x94c60000  lhu         $a2, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d69c0) {
            ctx->pc = 0x4D69D8u;
            goto label_4d69d8;
        }
    }
    ctx->pc = 0x4D69C8u;
    // 0x4d69c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d69c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d69cc: 0xa546000c  sh          $a2, 0xC($t2)
    ctx->pc = 0x4d69ccu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x4d69d0: 0x8135cae  j           func_4D72B8
    ctx->pc = 0x4D69D0u;
    ctx->pc = 0x4D69D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D69D0u;
    // 0x4d69d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D72B8u;
    goto label_4d72b8;
    ctx->pc = 0x4D69D8u;
label_4d69d8:
    // 0x4d69d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4d69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4d69dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d69dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d69e0: 0xa543014a  sh          $v1, 0x14A($t2)
    ctx->pc = 0x4d69e0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 330), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d69e4: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4d69e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d69e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d69ec: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4d69ecu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d69f0: 0x8135cae  j           func_4D72B8
    ctx->pc = 0x4D69F0u;
    ctx->pc = 0x4D69F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D69F0u;
    // 0x4d69f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D72B8u;
    goto label_4d72b8;
    ctx->pc = 0x4D69F8u;
label_4d69f8:
    // 0x4d69f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d69f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d69fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4d69fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d6a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d6a04: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4d6a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4d6a08: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4d6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4d6a0c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d6a0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d6a10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4d6a14: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4d6a14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d6a18: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D6A18u;
    {
        const bool branch_taken_0x4d6a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6A18u;
        // 0x4d6a1c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6a18) {
            ctx->pc = 0x4D6A30u;
            goto label_4d6a30;
        }
    }
    ctx->pc = 0x4D6A20u;
    // 0x4d6a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d6a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6a24: 0x8135cae  j           func_4D72B8
    ctx->pc = 0x4D6A24u;
    ctx->pc = 0x4D6A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6A24u;
    // 0x4d6a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D72B8u;
    goto label_4d72b8;
    ctx->pc = 0x4D6A2Cu;
    // 0x4d6a2c: 0x0  nop
    ctx->pc = 0x4d6a2cu;
    // NOP
label_4d6a30:
    // 0x4d6a30: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d6a30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d6a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d6a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6a38: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d6a3c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d6a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d6a40: 0x8135cae  j           func_4D72B8
    ctx->pc = 0x4D6A40u;
    ctx->pc = 0x4D6A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6A40u;
    // 0x4d6a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D72B8u;
    goto label_4d72b8;
    ctx->pc = 0x4D6A48u;
label_4d6a48:
    // 0x4d6a48: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4d6a48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6a4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d6a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d6a50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4d6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d6a54: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x4d6a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4d6a58: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x4d6a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4d6a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d6a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d6a60: 0xa462015e  sh          $v0, 0x15E($v1)
    ctx->pc = 0x4d6a60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d6a64: 0x246501bc  addiu       $a1, $v1, 0x1BC
    ctx->pc = 0x4d6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4d6a68: 0xa4660162  sh          $a2, 0x162($v1)
    ctx->pc = 0x4d6a68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 354), (uint16_t)GPR_U32(ctx, 6));
    // 0x4d6a6c: 0xa4670164  sh          $a3, 0x164($v1)
    ctx->pc = 0x4d6a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 356), (uint16_t)GPR_U32(ctx, 7));
    // 0x4d6a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d6a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6a74: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d6a74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d6a78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d6a7c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4d6a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d6a80: 0x8135aa2  j           func_4D6A88
    ctx->pc = 0x4D6A80u;
    ctx->pc = 0x4D6A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6A80u;
    // 0x4d6a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6A88u;
    goto label_4d6a88;
    ctx->pc = 0x4D6A88u;
label_4d6a88:
    // 0x4d6a88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d6a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d6a8c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d6a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d6a90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d6a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d6a94: 0x24511090  addiu       $s1, $v0, 0x1090
    ctx->pc = 0x4d6a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4240));
    // 0x4d6a98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d6a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d6a9c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4d6a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4d6aa0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d6aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d6aa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d6aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6aa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d6aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d6aac: 0x2663015e  addiu       $v1, $s3, 0x15E
    ctx->pc = 0x4d6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    // 0x4d6ab0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d6ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d6ab4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d6ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d6ab8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d6ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4d6abc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d6abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4d6ac0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d6ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4d6ac4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d6ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4d6ac8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d6ac8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d6acc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d6accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d6ad0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d6ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d6ad4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d6ad8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6ad8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6adc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4d6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6ae0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6ae4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6ae8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6aec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d6af0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6af4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d6af4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6af8: 0x96650164  lhu         $a1, 0x164($s3)
    ctx->pc = 0x4d6af8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x4d6afc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4d6afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4d6b00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d6b04: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6b04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6b08: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6b0c: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x4d6b0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6b10: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4d6b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4d6b14: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d6b14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6b18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4D6B18u;
    {
        const bool branch_taken_0x4d6b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6B18u;
        // 0x4d6b1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6b18) {
            ctx->pc = 0x4D6B50u;
            goto label_4d6b50;
        }
    }
    ctx->pc = 0x4D6B20u;
    // 0x4d6b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d6b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6b24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d6b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d6b28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d6b28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d6b2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d6b2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d6b30: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d6b30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d6b34: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d6b34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d6b38: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d6b38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d6b3c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d6b3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d6b40: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d6b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d6b44: 0x8135cae  j           func_4D72B8
    ctx->pc = 0x4D6B44u;
    ctx->pc = 0x4D6B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6B44u;
    // 0x4d6b48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D72B8u;
    goto label_4d72b8;
    ctx->pc = 0x4D6B4Cu;
    // 0x4d6b4c: 0x0  nop
    ctx->pc = 0x4d6b4cu;
    // NOP
label_4d6b50:
    // 0x4d6b50: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d6b54: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4d6b54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4d6b58: 0x8c4610a8  lw          $a2, 0x10A8($v0)
    ctx->pc = 0x4d6b58u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F10A8u));
    // 0x4d6b5c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d6b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d6b60: 0x2456109c  addiu       $s6, $v0, 0x109C
    ctx->pc = 0x4d6b60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4252));
    // 0x4d6b64: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4d6b64u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4d6b68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d6b6c: 0x27d510a0  addiu       $s5, $fp, 0x10A0
    ctx->pc = 0x4d6b6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4256));
    // 0x4d6b70: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4d6b70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F109Cu));
    // 0x4d6b74: 0x26f410a4  addiu       $s4, $s7, 0x10A4
    ctx->pc = 0x4d6b74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4260));
    // 0x4d6b78: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d6b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d6b7c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4d6b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d6b80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6b80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6b84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6b88: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6b8c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4d6b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d6b90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6b94: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d6b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d6b98: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4d6b98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4d6b9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6ba0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d6ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d6ba4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d6ba4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d6ba8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4d6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4d6bac: 0x86c80000  lh          $t0, 0x0($s6)
    ctx->pc = 0x4d6bacu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d6bb0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d6bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d6bb4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6bb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6bb8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6bbc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d6bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d6bc0: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4d6bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4d6bc4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d6bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d6bc8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4d6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4d6bcc: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4d6bccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d6bd0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d6bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d6bd4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6bd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6bd8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6bdc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4d6bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4d6be0: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4d6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4d6be4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d6be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d6be8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4d6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4d6bec: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4d6becu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d6bf0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d6bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d6bf4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6bf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6bf8: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4d6bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4d6bfc: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4d6bfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4d6c00: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4d6c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4d6c04: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4d6c04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4d6c08: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4d6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4d6c0c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d6c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d6c10: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6c10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6c14: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4d6c14u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d6c18: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4d6c18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4d6c1c: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4d6c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4d6c20: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4d6c20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4d6c24: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4d6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4d6c28: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4d6c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4d6c2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6c2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6c30: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4d6c30u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d6c34: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4d6c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4d6c38: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4d6c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4d6c3c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4d6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4d6c40: 0x866201be  lh          $v0, 0x1BE($s3)
    ctx->pc = 0x4d6c40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
    // 0x4d6c44: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6c48: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4d6c48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4d6c4c: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4d6c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4d6c50: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d6c50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d6c54: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d6c54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6c58: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4d6c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4d6c5c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6c60: 0x1221824  and         $v1, $t1, $v0
    ctx->pc = 0x4d6c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4d6c64: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d6c68: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4d6c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6c6c: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x4d6c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x4d6c70: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x4D6C70u;
    {
        const bool branch_taken_0x4d6c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6c70) {
            ctx->pc = 0x4D6C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D6C70u;
            // 0x4d6c74: 0x8662011c  lh          $v0, 0x11C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D6D58u;
            goto label_4d6d58;
        }
    }
    ctx->pc = 0x4D6C78u;
    // 0x4d6c78: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x4d6c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d6c7c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x4D6C7Cu;
    {
        const bool branch_taken_0x4d6c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d6c7c) {
            ctx->pc = 0x4D6C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D6C7Cu;
            // 0x4d6c80: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D6CF0u;
            goto label_4d6cf0;
        }
    }
    ctx->pc = 0x4D6C84u;
    // 0x4d6c84: 0x86620120  lh          $v0, 0x120($s3)
    ctx->pc = 0x4d6c84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x4d6c88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6c8c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d6c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d6c90: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6c94: 0x26101094  addiu       $s0, $s0, 0x1094
    ctx->pc = 0x4d6c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4244));
    // 0x4d6c98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6c9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d6ca0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6ca4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d6ca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6ca8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d6cac: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6cb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6cb4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d6cb8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D6CB8u;
    SET_GPR_U32(ctx, 31, 0x4D6CC0u);
    ctx->pc = 0x4D6CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6CB8u;
    // 0x4d6cbc: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D6CB8u, 0x4D6CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6CC0u;
label_4d6cc0:
    // 0x4d6cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d6cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6cc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d6cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d6cc8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D6CC8u;
    SET_GPR_U32(ctx, 31, 0x4D6CD0u);
    ctx->pc = 0x4D6CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6CC8u;
    // 0x4d6ccc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D6CC8u, 0x4D6CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6CD0u;
label_4d6cd0:
    // 0x4d6cd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d6cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6cd4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d6cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6cd8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4d6cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6cdc: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4D6CDCu;
    SET_GPR_U32(ctx, 31, 0x4D6CE4u);
    ctx->pc = 0x4D6CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6CDCu;
    // 0x4d6ce0: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4D6CDCu, 0x4D6CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6CE4u;
label_4d6ce4:
    // 0x4d6ce4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x4D6CE4u;
    {
        const bool branch_taken_0x4d6ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6CE4u;
        // 0x4d6ce8: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6ce4) {
            ctx->pc = 0x4D6E14u;
            goto label_4d6e14;
        }
    }
    ctx->pc = 0x4D6CECu;
    // 0x4d6cec: 0x0  nop
    ctx->pc = 0x4d6cecu;
    // NOP
label_4d6cf0:
    // 0x4d6cf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6cf4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d6cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d6cf8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6cfc: 0x26101094  addiu       $s0, $s0, 0x1094
    ctx->pc = 0x4d6cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4244));
    // 0x4d6d00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6d04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d6d08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6d0c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d6d0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6d10: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d6d14: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6d18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6d1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d6d20: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D6D20u;
    SET_GPR_U32(ctx, 31, 0x4D6D28u);
    ctx->pc = 0x4D6D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6D20u;
    // 0x4d6d24: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D6D20u, 0x4D6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6D28u;
label_4d6d28:
    // 0x4d6d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d6d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6d2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d6d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d6d30: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D6D30u;
    SET_GPR_U32(ctx, 31, 0x4D6D38u);
    ctx->pc = 0x4D6D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6D30u;
    // 0x4d6d34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D6D30u, 0x4D6D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6D38u;
label_4d6d38:
    // 0x4d6d38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d6d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6d3c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d6d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6d40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d6d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6d44: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4D6D44u;
    SET_GPR_U32(ctx, 31, 0x4D6D4Cu);
    ctx->pc = 0x4D6D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6D44u;
    // 0x4d6d48: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4D6D44u, 0x4D6D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6D4Cu;
label_4d6d4c:
    // 0x4d6d4c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4D6D4Cu;
    {
        const bool branch_taken_0x4d6d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6D4Cu;
        // 0x4d6d50: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6d4c) {
            ctx->pc = 0x4D6E14u;
            goto label_4d6e14;
        }
    }
    ctx->pc = 0x4D6D54u;
    // 0x4d6d54: 0x0  nop
    ctx->pc = 0x4d6d54u;
    // NOP
label_4d6d58:
    // 0x4d6d58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6d5c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d6d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d6d60: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6d64: 0x26101094  addiu       $s0, $s0, 0x1094
    ctx->pc = 0x4d6d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4244));
    // 0x4d6d68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6d6c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d6d70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6d74: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d6d74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6d78: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d6d7c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6d80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6d84: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d6d88: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D6D88u;
    SET_GPR_U32(ctx, 31, 0x4D6D90u);
    ctx->pc = 0x4D6D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6D88u;
    // 0x4d6d8c: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D6D88u, 0x4D6D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6D90u;
label_4d6d90:
    // 0x4d6d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d6d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6d94: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d6d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d6d98: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D6D98u;
    SET_GPR_U32(ctx, 31, 0x4D6DA0u);
    ctx->pc = 0x4D6D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6D98u;
    // 0x4d6d9c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D6D98u, 0x4D6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6DA0u;
label_4d6da0:
    // 0x4d6da0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d6da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6da4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d6da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6da8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d6da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6dac: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D6DACu;
    SET_GPR_U32(ctx, 31, 0x4D6DB4u);
    ctx->pc = 0x4D6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6DACu;
    // 0x4d6db0: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D6DACu, 0x4D6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6DB4u;
label_4d6db4:
    // 0x4d6db4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4d6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6db8: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x4d6db8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x4d6dbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6dc0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6dc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6dc8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d6dcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6dd0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d6dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6dd4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d6dd8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d6dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d6ddc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d6ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d6de0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4d6de4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4D6DE4u;
    SET_GPR_U32(ctx, 31, 0x4D6DECu);
    ctx->pc = 0x4D6DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6DE4u;
    // 0x4d6de8: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4D6DE4u, 0x4D6DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6DECu;
label_4d6dec:
    // 0x4d6dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d6decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6df0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4d6df4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4D6DF4u;
    SET_GPR_U32(ctx, 31, 0x4D6DFCu);
    ctx->pc = 0x4D6DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6DF4u;
    // 0x4d6df8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4D6DF4u, 0x4D6DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6DFCu;
label_4d6dfc:
    // 0x4d6dfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d6dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6e00: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d6e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6e04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d6e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6e08: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4D6E08u;
    SET_GPR_U32(ctx, 31, 0x4D6E10u);
    ctx->pc = 0x4D6E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6E08u;
    // 0x4d6e0c: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4D6E08u, 0x4D6E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6E10u;
label_4d6e10:
    // 0x4d6e10: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4d6e10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_4d6e14:
    // 0x4d6e14: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d6e18: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4d6e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4d6e1c: 0x9447109c  lhu         $a3, 0x109C($v0)
    ctx->pc = 0x4d6e1cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7F109Cu));
    // 0x4d6e20: 0x97c510a0  lhu         $a1, 0x10A0($fp)
    ctx->pc = 0x4d6e20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4256)));
    // 0x4d6e24: 0x26282494  addiu       $t0, $s1, 0x2494
    ctx->pc = 0x4d6e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 9364));
    // 0x4d6e28: 0x96e610a4  lhu         $a2, 0x10A4($s7)
    ctx->pc = 0x4d6e28u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4260)));
    // 0x4d6e2c: 0x26292498  addiu       $t1, $s1, 0x2498
    ctx->pc = 0x4d6e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 9368));
    // 0x4d6e30: 0x262a249c  addiu       $t2, $s1, 0x249C
    ctx->pc = 0x4d6e30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 9372));
    // 0x4d6e34: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4d6e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d6e38: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d6e3c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4d6e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4d6e40: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4d6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d6e44: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4d6e44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4d6e48: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4d6e48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4d6e4c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4d6e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4d6e50: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d6e50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d6e54: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d6e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d6e58: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d6e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d6e5c: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4d6e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4d6e60: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d6e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4d6e64: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d6e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d6e68: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4d6e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4d6e6c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d6e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d6e70: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4d6e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4d6e74: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4d6e74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4d6e78: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4d6e78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4d6e7c: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4D6E7Cu;
    SET_GPR_U32(ctx, 31, 0x4D6E84u);
    ctx->pc = 0x4D6E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6E7Cu;
    // 0x4d6e80: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4D6E7Cu, 0x4D6E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6E84u;
label_4d6e84:
    // 0x4d6e84: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d6e88: 0x24441090  addiu       $a0, $v0, 0x1090
    ctx->pc = 0x4d6e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4240));
    // 0x4d6e8c: 0x862324a0  lh          $v1, 0x24A0($s1)
    ctx->pc = 0x4d6e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 9376)));
    // 0x4d6e90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4d6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1090u));
    // 0x4d6e94: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d6e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4d6e98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d6e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d6e9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d6e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d6ea0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4d6ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4d6ea4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4d6ea4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d6ea8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D6EA8u;
    {
        const bool branch_taken_0x4d6ea8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6EA8u;
        // 0x4d6eac: 0x266301bc  addiu       $v1, $s3, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6ea8) {
            ctx->pc = 0x4D6EBCu;
            goto label_4d6ebc;
        }
    }
    ctx->pc = 0x4D6EB0u;
    // 0x4d6eb0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d6eb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d6eb4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d6eb8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d6eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d6ebc:
    // 0x4d6ebc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4d6ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6ec0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d6ec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d6ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d6ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6ec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d6ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d6ecc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d6eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d6ed0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d6ed0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d6ed4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d6ed4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d6ed8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d6ed8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d6edc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d6edcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d6ee0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d6ee0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d6ee4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d6ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d6ee8: 0x8135cae  j           func_4D72B8
    ctx->pc = 0x4D6EE8u;
    ctx->pc = 0x4D6EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6EE8u;
    // 0x4d6eec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D72B8u;
    goto label_4d72b8;
    ctx->pc = 0x4D6EF0u;
label_4d6ef0:
    // 0x4d6ef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d6ef4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d6ef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d6ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d6efc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4d6efcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4d6f00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d6f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d6f04: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d6f04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d6f08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d6f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d6f0c: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x4d6f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x4d6f10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d6f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d6f14: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4d6f14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4d6f18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d6f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d6f1c: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4d6f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4d6f20: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d6f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d6f24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4d6f24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6f28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d6f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4d6f2c: 0x2631109c  addiu       $s1, $s1, 0x109C
    ctx->pc = 0x4d6f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4252));
    // 0x4d6f30: 0x267310a0  addiu       $s3, $s3, 0x10A0
    ctx->pc = 0x4d6f30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4256));
    // 0x4d6f34: 0x269410a4  addiu       $s4, $s4, 0x10A4
    ctx->pc = 0x4d6f34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4260));
    // 0x4d6f38: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x4d6f38u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x7F109Cu));
    // 0x4d6f3c: 0x34420064  ori         $v0, $v0, 0x64
    ctx->pc = 0x4d6f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x4d6f40: 0x8e6b0000  lw          $t3, 0x0($s3)
    ctx->pc = 0x4d6f40u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x7F10A0u));
    // 0x4d6f44: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d6f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d6f48: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4d6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10A4u));
    // 0x4d6f4c: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4d6f4cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4d6f50: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4d6f50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4d6f54: 0x1906024  and         $t4, $t4, $s0
    ctx->pc = 0x4d6f54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 16));
    // 0x4d6f58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d6f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d6f5c: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4d6f5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4d6f60: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4d6f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4d6f64: 0xae2c0000  sw          $t4, 0x0($s1)
    ctx->pc = 0x4d6f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 12));
    // 0x4d6f68: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d6f68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d6f6c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d6f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4d6f70: 0xae6b0000  sw          $t3, 0x0($s3)
    ctx->pc = 0x4d6f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 11));
    // 0x4d6f74: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4d6f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6f78: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4d6f78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4d6f7c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4d6f7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6f80: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4d6f80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6f84: 0x24a51090  addiu       $a1, $a1, 0x1090
    ctx->pc = 0x4d6f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4240));
    // 0x4d6f88: 0x24c61094  addiu       $a2, $a2, 0x1094
    ctx->pc = 0x4d6f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4244));
    // 0x4d6f8c: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4D6F8Cu;
    SET_GPR_U32(ctx, 31, 0x4D6F94u);
    ctx->pc = 0x4D6F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6F8Cu;
    // 0x4d6f90: 0x24e71098  addiu       $a3, $a3, 0x1098 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4D6F8Cu, 0x4D6F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6F94u;
label_4d6f94:
    // 0x4d6f94: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x4d6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x4d6f98: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4d6f98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6f9c: 0x2652d680  addiu       $s2, $s2, -0x2980
    ctx->pc = 0x4d6f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4d6fa0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d6fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d6fa4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d6fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6fa8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6fa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6fac: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4d6facu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d6fb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d6fb4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d6fb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d6fb8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d6fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4d6fbc: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4d6fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d6fc0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4d6fc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4d6fc4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d6fc8: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4d6fc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d6fcc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d6fccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d6fd0: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4d6fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4d6fd4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d6fd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d6fd8: 0x264c2494  addiu       $t4, $s2, 0x2494
    ctx->pc = 0x4d6fd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 9364));
    // 0x4d6fdc: 0x264e2498  addiu       $t6, $s2, 0x2498
    ctx->pc = 0x4d6fdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 9368));
    // 0x4d6fe0: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x4d6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x4d6fe4: 0x264d249c  addiu       $t5, $s2, 0x249C
    ctx->pc = 0x4d6fe4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 9372));
    // 0x4d6fe8: 0x8c6b10a8  lw          $t3, 0x10A8($v1)
    ctx->pc = 0x4d6fe8u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x7F10A8u));
    // 0x4d6fec: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d6fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d6ff0: 0x962a0000  lhu         $t2, 0x0($s1)
    ctx->pc = 0x4d6ff0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d6ff4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d6ff4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d6ff8: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x4d6ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d6ffc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d6ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d7000: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4d7000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d7004: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4d7004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4d7008: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x4d7008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4d700c: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4d700cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4d7010: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d7010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d7014: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4d7014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4d7018: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d7018u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d701c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4d701cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4d7020: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x4d7020u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x4d7024: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x4d7024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x4d7028: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x4d7028u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d702c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d7030: 0xa64a2334  sh          $t2, 0x2334($s2)
    ctx->pc = 0x4d7030u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9012), (uint16_t)GPR_U32(ctx, 10));
    // 0x4d7034: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7034u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d7038: 0xa6442336  sh          $a0, 0x2336($s2)
    ctx->pc = 0x4d7038u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9014), (uint16_t)GPR_U32(ctx, 4));
    // 0x4d703c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d7040: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4d7040u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4d7044: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4d7044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4d7048: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4d7048u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4d704c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4d704cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4d7050: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4d7050u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4d7054: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d7054u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d7058: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4d7058u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d705c: 0xa6452338  sh          $a1, 0x2338($s2)
    ctx->pc = 0x4d705cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9016), (uint16_t)GPR_U32(ctx, 5));
    // 0x4d7060: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4d7060u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4d7064: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4d7064u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4d7068: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4d7068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d706c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d706cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d7070: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7070u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d7074: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4d7074u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d7078: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d7078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4d707c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4d707cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4d7080: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4d7080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4d7084: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d7084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d7088: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x4d7088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x4d708c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4d708cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d7090: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d7090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d7094: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7094u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d7098: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4d7098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4d709c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4d709cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d70a0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d70a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4d70a4: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4d70a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4d70a8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4d70a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4d70ac: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4d70acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4d70b0: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4d70b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4d70b4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d70b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d70b8: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x4d70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4d70bc: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4d70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4d70c0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4d70c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4d70c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d70c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d70c8: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4d70c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d70cc: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4d70ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d70d0: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4d70d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d70d4: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4d70d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4d70d8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4d70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4d70dc: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4d70dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4d70e0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4d70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4d70e4: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4d70e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4d70e8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d70e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d70ec: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4d70ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4d70f0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d70f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d70f4: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4d70f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d70f8: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4d70f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4d70fc: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x4d70fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x4d7100: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4d7100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4d7104: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d7104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d7108: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d7108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d710c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d710cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d7110: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4d7110u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4d7114: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x4d7114u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x4d7118: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4d7118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d711c: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x4d711cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d7120: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x4d7120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4d7124: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d7124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d7128: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4d7128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d712c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4d712cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4d7130: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d7134: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d7134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d7138: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4d7138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4d713c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4d713cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4d7140: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4d7140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4d7144: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4d7144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4d7148: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4d7148u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x4d714c: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4D714Cu;
    SET_GPR_U32(ctx, 31, 0x4D7154u);
    ctx->pc = 0x4D7150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D714Cu;
    // 0x4d7150: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4D714Cu, 0x4D7154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7154u;
label_4d7154:
    // 0x4d7154: 0x964324a0  lhu         $v1, 0x24A0($s2)
    ctx->pc = 0x4d7154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 9376)));
    // 0x4d7158: 0x964224a2  lhu         $v0, 0x24A2($s2)
    ctx->pc = 0x4d7158u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 9378)));
    // 0x4d715c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d715cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7160: 0xa643233a  sh          $v1, 0x233A($s2)
    ctx->pc = 0x4d7160u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d7164: 0xa642233c  sh          $v0, 0x233C($s2)
    ctx->pc = 0x4d7164u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d7168: 0xa640233e  sh          $zero, 0x233E($s2)
    ctx->pc = 0x4d7168u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9022), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d716c: 0x96a20162  lhu         $v0, 0x162($s5)
    ctx->pc = 0x4d716cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 354)));
    // 0x4d7170: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4D7170u;
    SET_GPR_U32(ctx, 31, 0x4D7178u);
    ctx->pc = 0x4D7174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7170u;
    // 0x4d7174: 0xa6422330  sh          $v0, 0x2330($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 9008), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4D7170u, 0x4D7178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7178u;
label_4d7178:
    // 0x4d7178: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4d7178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4d717c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d717cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7180: 0xa6a201bc  sh          $v0, 0x1BC($s5)
    ctx->pc = 0x4d7180u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d7184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d7188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d718c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d718cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7190: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d7190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d7194: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d7194u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d7198: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d7198u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d719c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d719cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d71a0: 0x8135cae  j           func_4D72B8
    ctx->pc = 0x4D71A0u;
    ctx->pc = 0x4D71A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D71A0u;
    // 0x4d71a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D72B8u;
    goto label_4d72b8;
    ctx->pc = 0x4D71A8u;
label_4d71a8:
    // 0x4d71a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d71a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d71ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d71acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d71b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d71b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d71b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d71b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d71b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d71b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d71bc: 0x261201c2  addiu       $s2, $s0, 0x1C2
    ctx->pc = 0x4d71bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 450));
    // 0x4d71c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d71c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d71c4: 0x2611015e  addiu       $s1, $s0, 0x15E
    ctx->pc = 0x4d71c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4d71c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4d71c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4d71cc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d71ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d71d0: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4d71d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d71d4: 0x24a51090  addiu       $a1, $a1, 0x1090
    ctx->pc = 0x4d71d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4240));
    // 0x4d71d8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d71d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4d71dc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d71dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d71e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d71e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1090u));
    // 0x4d71e4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d71e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d71e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d71e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d71ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d71ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d71f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d71f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d71f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d71f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d71f8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d71f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d71fc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4d71fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4d7200: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d7200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d7204: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d7204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d7208: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d7208u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d720c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d720cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d7210: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D7210u;
    {
        const bool branch_taken_0x4d7210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d7210) {
            ctx->pc = 0x4D7214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D7210u;
            // 0x4d7214: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D722Cu;
            goto label_4d722c;
        }
    }
    ctx->pc = 0x4D7218u;
    // 0x4d7218: 0x96030164  lhu         $v1, 0x164($s0)
    ctx->pc = 0x4d7218u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4d721c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4d721cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4d7220: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4D7220u;
    SET_GPR_U32(ctx, 31, 0x4D7228u);
    ctx->pc = 0x4D7224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7220u;
    // 0x4d7224: 0xa443f9ac  sh          $v1, -0x654($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965676), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4D7220u, 0x4D7228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7228u;
label_4d7228:
    // 0x4d7228: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d7228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d722c:
    // 0x4d722c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d7230: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4d7230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4d7234: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x4d7234u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4d7238: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D7238u;
    {
        const bool branch_taken_0x4d7238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7238u;
        // 0x4d723c: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7238) {
            ctx->pc = 0x4D7260u;
            goto label_4d7260;
        }
    }
    ctx->pc = 0x4D7240u;
    // 0x4d7240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d7248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d724c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d724cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7250: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4d7250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d7254: 0x8135cae  j           func_4D72B8
    ctx->pc = 0x4D7254u;
    ctx->pc = 0x4D7258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7254u;
    // 0x4d7258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D72B8u;
    goto label_4d72b8;
    ctx->pc = 0x4D725Cu;
    // 0x4d725c: 0x0  nop
    ctx->pc = 0x4d725cu;
    // NOP
label_4d7260:
    // 0x4d7260: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x4d7260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x4d7264: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x4d7264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4d7268: 0xa602014a  sh          $v0, 0x14A($s0)
    ctx->pc = 0x4d7268u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d726c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d726cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7270: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4d7270u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d7274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7278: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4d7278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d727c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d727cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d7280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d7280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7284: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d7284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d7288: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4d7288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d728c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4d728cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d7290: 0x8135cae  j           func_4D72B8
    ctx->pc = 0x4D7290u;
    ctx->pc = 0x4D7294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7290u;
    // 0x4d7294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D72B8u;
    goto label_4d72b8;
    ctx->pc = 0x4D7298u;
label_4d7298:
    // 0x4d7298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d7298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d729c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d72a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d72a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d72a4: 0xa48201bc  sh          $v0, 0x1BC($a0)
    ctx->pc = 0x4d72a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d72a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d72a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d72ac: 0x8135a26  j           func_4D6898
    ctx->pc = 0x4D72ACu;
    ctx->pc = 0x4D72B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D72ACu;
    // 0x4d72b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6898u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4d6898;
    ctx->pc = 0x4D72B4u;
    // 0x4d72b4: 0x0  nop
    ctx->pc = 0x4d72b4u;
    // NOP
label_4d72b8:
    // 0x4d72b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d72b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4d72bc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4d72bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4d72c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4d72c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4d72c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4d72c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4d72c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4d72c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4d72cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4d72ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4d72d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4d72d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4d72d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4d72d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4d72d8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4d72d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4d72dc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4d72dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4d72e0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4d72e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4d72e4: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4D72E4u;
    SET_GPR_U32(ctx, 31, 0x4D72ECu);
    ctx->pc = 0x4D72E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D72E4u;
    // 0x4d72e8: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D72E4u, 0x4D72ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D72ECu;
label_4d72ec:
    // 0x4d72ec: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x4D72ECu;
    {
        const bool branch_taken_0x4d72ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D72ECu;
        // 0x4d72f0: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d72ec) {
            ctx->pc = 0x4D763Cu;
            goto label_4d763c;
        }
    }
    ctx->pc = 0x4D72F4u;
    // 0x4d72f4: 0x26d40010  addiu       $s4, $s6, 0x10
    ctx->pc = 0x4d72f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x4d72f8: 0x247e109c  addiu       $fp, $v1, 0x109C
    ctx->pc = 0x4d72f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4252));
    // 0x4d72fc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d72fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d7300: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x4d7300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x4d7304: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x4d7304u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x4d7308: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x4d7308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d730c: 0x26d50014  addiu       $s5, $s6, 0x14
    ctx->pc = 0x4d730cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x4d7310: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d7310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d7314: 0x247910a0  addiu       $t9, $v1, 0x10A0
    ctx->pc = 0x4d7314u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 4256));
    // 0x4d7318: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d7318u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d731c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d731cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d7320: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d7320u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d7324: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4d7324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7328: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x4d7328u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x4d732c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d732cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d7330: 0x248410a4  addiu       $a0, $a0, 0x10A4
    ctx->pc = 0x4d7330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4260));
    // 0x4d7334: 0x26d30018  addiu       $s3, $s6, 0x18
    ctx->pc = 0x4d7334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x4d7338: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4d7338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d733c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4d733cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4d7340: 0x8f260000  lw          $a2, 0x0($t9)
    ctx->pc = 0x4d7340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4d7344: 0x250810a4  addiu       $t0, $t0, 0x10A4
    ctx->pc = 0x4d7344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4260));
    // 0x4d7348: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4d7348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4d734c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d7350: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7350u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d7354: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d7354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d7358: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d7358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d735c: 0x87d20000  lh          $s2, 0x0($fp)
    ctx->pc = 0x4d735cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d7360: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d7360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d7364: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d7368: 0xaf260000  sw          $a2, 0x0($t9)
    ctx->pc = 0x4d7368u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 6));
    // 0x4d736c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d736cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d7370: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d7370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d7374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7378: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4d7378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d737c: 0x87310000  lh          $s1, 0x0($t9)
    ctx->pc = 0x4d737cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4d7380: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4d7380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4d7384: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d7384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d7388: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d7388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d738c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d738cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d7390: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d7390u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4d7394: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d7398: 0x86c20136  lh          $v0, 0x136($s6)
    ctx->pc = 0x4d7398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 310)));
    // 0x4d739c: 0x85100000  lh          $s0, 0x0($t0)
    ctx->pc = 0x4d739cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d73a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4d73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4d73a4: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x4d73a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4d73a8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d73a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d73ac: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x4d73acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4d73b0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d73b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d73b4: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x4d73b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x4d73b8: 0x86c20138  lh          $v0, 0x138($s6)
    ctx->pc = 0x4d73b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 312)));
    // 0x4d73bc: 0x97c70000  lhu         $a3, 0x0($fp)
    ctx->pc = 0x4d73bcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d73c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4d73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4d73c4: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x4d73c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4d73c8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d73c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d73cc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4d73ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4d73d0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d73d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d73d4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d73d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d73d8: 0xaf260000  sw          $a2, 0x0($t9)
    ctx->pc = 0x4d73d8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 6));
    // 0x4d73dc: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x4d73dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4d73e0: 0x86c2013a  lh          $v0, 0x13A($s6)
    ctx->pc = 0x4d73e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 314)));
    // 0x4d73e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4d73e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4d73e8: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x4d73e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4d73ec: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d73ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d73f0: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x4d73f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4d73f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d73f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d73f8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d73f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4d73fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4d73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d7400: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d7400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d7404: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4d7404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4d7408: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4d7408u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4d740c: 0x97230000  lhu         $v1, 0x0($t9)
    ctx->pc = 0x4d740cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4d7410: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4d7410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d7414: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d7414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d7418: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d741c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d7420: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d7420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d7424: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4d7424u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4d7428: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d7428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d742c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4d742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d7430: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d7430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d7434: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d7438: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d7438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d743c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d743cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d7440: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d7440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4d7444: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4D7444u;
    SET_GPR_U32(ctx, 31, 0x4D744Cu);
    ctx->pc = 0x4D7448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7444u;
    // 0x4d7448: 0x7fb90000  sq          $t9, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4D7444u, 0x4D744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D744Cu;
label_4d744c:
    // 0x4d744c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4d744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d7450: 0x26c40148  addiu       $a0, $s6, 0x148
    ctx->pc = 0x4d7450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 328));
    // 0x4d7454: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4d7454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4d7458: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4d7458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4d745c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4d745cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4d7460: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4d7460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d7464: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d7464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d7468: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d7468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d746c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4d746cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4d7470: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d7470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d7474: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4d7474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4d7478: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x4d7478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4d747c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d747cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d7480: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4d7480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d7484: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x4D7484u;
    {
        const bool branch_taken_0x4d7484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7484u;
        // 0x4d7488: 0x7bb90000  lq          $t9, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7484) {
            ctx->pc = 0x4D763Cu;
            goto label_4d763c;
        }
    }
    ctx->pc = 0x4D748Cu;
    // 0x4d748c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d7490: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d7490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d7494: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4d7494u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d7498: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4d7498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4d749c: 0x24a51090  addiu       $a1, $a1, 0x1090
    ctx->pc = 0x4d749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4240));
    // 0x4d74a0: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4d74a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4d74a4: 0x84437ad8  lh          $v1, 0x7AD8($v0)
    ctx->pc = 0x4d74a4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x547AD8u));
    // 0x4d74a8: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4d74a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x4d74ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d74acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1090u));
    // 0x4d74b0: 0x256b10ac  addiu       $t3, $t3, 0x10AC
    ctx->pc = 0x4d74b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4268));
    // 0x4d74b4: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4d74b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4d74b8: 0x24847b28  addiu       $a0, $a0, 0x7B28
    ctx->pc = 0x4d74b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31528));
    // 0x4d74bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d74bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d74c0: 0x26d00160  addiu       $s0, $s6, 0x160
    ctx->pc = 0x4d74c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 352));
    // 0x4d74c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d74c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d74c8: 0x26d10162  addiu       $s1, $s6, 0x162
    ctx->pc = 0x4d74c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 354));
    // 0x4d74cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d74ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d74d0: 0x26cf0166  addiu       $t7, $s6, 0x166
    ctx->pc = 0x4d74d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 358));
    // 0x4d74d4: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4d74d4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4d74d8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d74d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d74dc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d74dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d74e0: 0x254a10a4  addiu       $t2, $t2, 0x10A4
    ctx->pc = 0x4d74e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4260));
    // 0x4d74e4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d74e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4d74e8: 0x320482d  daddu       $t1, $t9, $zero
    ctx->pc = 0x4d74e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d74ec: 0xa6c2000c  sh          $v0, 0xC($s6)
    ctx->pc = 0x4d74ecu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d74f0: 0x24c61094  addiu       $a2, $a2, 0x1094
    ctx->pc = 0x4d74f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4244));
    // 0x4d74f4: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4d74f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4d74f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d74f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d74fc: 0xa6c0015e  sh          $zero, 0x15E($s6)
    ctx->pc = 0x4d74fcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d7500: 0x24e71098  addiu       $a3, $a3, 0x1098
    ctx->pc = 0x4d7500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4248));
    // 0x4d7504: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x4d7504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7508: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4d7508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d750c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d750cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d7510: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d7510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d7514: 0x244c0002  addiu       $t4, $v0, 0x2
    ctx->pc = 0x4d7514u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d7518: 0x244d0004  addiu       $t5, $v0, 0x4
    ctx->pc = 0x4d7518u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4d751c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4d751cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d7520: 0x244e0006  addiu       $t6, $v0, 0x6
    ctx->pc = 0x4d7520u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4d7524: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4d7524u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4d7528: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d7528u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d752c: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4d752cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d7530: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x4d7530u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x4d7534: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4d7534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d7538: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x4d7538u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d753c: 0xa6c20164  sh          $v0, 0x164($s6)
    ctx->pc = 0x4d753cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d7540: 0xad6d0000  sw          $t5, 0x0($t3)
    ctx->pc = 0x4d7540u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x4d7544: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4d7544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d7548: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x4d7548u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d754c: 0xad6e0000  sw          $t6, 0x0($t3)
    ctx->pc = 0x4d754cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 14));
    // 0x4d7550: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4d7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d7554: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4d7554u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10A4u));
    // 0x4d7558: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d7558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d755c: 0x8f2b0000  lw          $t3, 0x0($t9)
    ctx->pc = 0x4d755cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4d7560: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x4d7560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x4d7564: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d7564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d7568: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4d7568u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4d756c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4d756cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4d7570: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x4d7570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x4d7574: 0x85e20000  lh          $v0, 0x0($t7)
    ctx->pc = 0x4d7574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4d7578: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d7578u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4d757c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d757cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d7580: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4d7580u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4d7584: 0xaf2b0000  sw          $t3, 0x0($t9)
    ctx->pc = 0x4d7584u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 11));
    // 0x4d7588: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4D7588u;
    SET_GPR_U32(ctx, 31, 0x4D7590u);
    ctx->pc = 0x4D758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7588u;
    // 0x4d758c: 0x7fb90000  sq          $t9, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4D7588u, 0x4D7590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7590u;
label_4d7590:
    // 0x4d7590: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4d7590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d7594: 0x26c40124  addiu       $a0, $s6, 0x124
    ctx->pc = 0x4d7594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
    // 0x4d7598: 0x26c50128  addiu       $a1, $s6, 0x128
    ctx->pc = 0x4d7598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 296));
    // 0x4d759c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d75a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d75a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d75a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d75a8: 0x26c7012c  addiu       $a3, $s6, 0x12C
    ctx->pc = 0x4d75a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 300));
    // 0x4d75ac: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4d75acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4d75b0: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4d75b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4d75b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d75b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d75b8: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4d75b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4d75bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4d75bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4d75c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d75c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d75c4: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x4d75c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4d75c8: 0x7bb90000  lq          $t9, 0x0($sp)
    ctx->pc = 0x4d75c8u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d75cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d75d0: 0x97220000  lhu         $v0, 0x0($t9)
    ctx->pc = 0x4d75d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4d75d4: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4d75d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4d75d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d75dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d75dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d75e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d75e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d75e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d75e8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d75e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d75ec: 0x246310a4  addiu       $v1, $v1, 0x10A4
    ctx->pc = 0x4d75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4260));
    // 0x4d75f0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d75f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F10A4u));
    // 0x4d75f4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4d75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d75f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d75fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d75fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d7600: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x4d7600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x4d7604: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d7604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d7608: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4d7608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4d760c: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4d760cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d7610: 0xa4c8232e  sh          $t0, 0x232E($a2)
    ctx->pc = 0x4d7610u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 8));
    // 0x4d7614: 0xa4c5232c  sh          $a1, 0x232C($a2)
    ctx->pc = 0x4d7614u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 5));
    // 0x4d7618: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d7618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d761c: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4D761Cu;
    SET_GPR_U32(ctx, 31, 0x4D7624u);
    ctx->pc = 0x4D7620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D761Cu;
    // 0x4d7620: 0xa4c223c4  sh          $v0, 0x23C4($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4D761Cu, 0x4D7624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7624u;
label_4d7624:
    // 0x4d7624: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4D7624u;
    SET_GPR_U32(ctx, 31, 0x4D762Cu);
    ctx->pc = 0x4D7628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7624u;
    // 0x4d7628: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4D7624u, 0x4D762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D762Cu;
label_4d762c:
    // 0x4d762c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4D762Cu;
    SET_GPR_U32(ctx, 31, 0x4D7634u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D762Cu, 0x4D7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7634u;
label_4d7634:
    // 0x4d7634: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x4d7634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4d7638: 0xa6c201bc  sh          $v0, 0x1BC($s6)
    ctx->pc = 0x4d7638u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 444), (uint16_t)GPR_U32(ctx, 2));
label_4d763c:
    // 0x4d763c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4d763cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7640: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d7640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d7644: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d7644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d7648: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d7648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d764c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d764cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d7650: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d7650u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d7654: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d7654u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d7658: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d7658u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d765c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d765cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d7660: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d7660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d7664: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7664u;
        // 0x4d7668: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D766Cu;
    // 0x4d766c: 0x0  nop
    ctx->pc = 0x4d766cu;
    // NOP
    ctx->pc = 0x4d7670u;
}
