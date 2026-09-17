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

// Function: sub_004B6308
// Address: 0x4b6308 - 0x4b6710
void sub_004B6308_0x4b6308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6308_0x4b6308");
#endif

    switch (ctx->pc) {
        case 0x4b633cu: goto label_4b633c;
        case 0x4b6358u: goto label_4b6358;
        case 0x4b65c4u: goto label_4b65c4;
        case 0x4b6608u: goto label_4b6608;
        default: break;
    }

    ctx->pc = 0x4b6308u;

    // 0x4b6308: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b6308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b630c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b630cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b6310: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b6310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b6314: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b6314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6318: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b6318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b631c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b6320: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b6320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b6324: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b6324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b6328: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b6328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b632c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4b632cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4b6330: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b6330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b6334: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4B6334u;
    SET_GPR_U32(ctx, 31, 0x4B633Cu);
    ctx->pc = 0x4B6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6334u;
    // 0x4b6338: 0x269001b4  addiu       $s0, $s4, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4B6334u, 0x4B633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B633Cu;
label_4b633c:
    // 0x4b633c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b633cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b6340: 0xac620d64  sw          $v0, 0xD64($v1)
    ctx->pc = 0x4b6340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0D64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D64u, _value); } while (0);
    // 0x4b6344: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b6344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b6348: 0x4420021  bltzl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4B6348u;
    {
        const bool branch_taken_0x4b6348 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b6348) {
            ctx->pc = 0x4B634Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6348u;
            // 0x4b634c: 0x8e820140  lw          $v0, 0x140($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B63D0u;
            goto label_4b63d0;
        }
    }
    ctx->pc = 0x4B6350u;
    // 0x4b6350: 0xc12b66e  jal         func_4AD9B8
    ctx->pc = 0x4B6350u;
    SET_GPR_U32(ctx, 31, 0x4B6358u);
    ctx->pc = 0x4B6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6350u;
    // 0x4b6354: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD9B8u, 0x4B6350u, 0x4B6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6358u;
label_4b6358:
    // 0x4b6358: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x4b6358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x4b635c: 0x2403011f  addiu       $v1, $zero, 0x11F
    ctx->pc = 0x4b635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x4b6360: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4b6360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b6364: 0xa6830034  sh          $v1, 0x34($s4)
    ctx->pc = 0x4b6364u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b6368: 0x26860158  addiu       $a2, $s4, 0x158
    ctx->pc = 0x4b6368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 344));
    // 0x4b636c: 0xa685014a  sh          $a1, 0x14A($s4)
    ctx->pc = 0x4b636cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 330), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b6370: 0x26850160  addiu       $a1, $s4, 0x160
    ctx->pc = 0x4b6370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x4b6374: 0xa6820032  sh          $v0, 0x32($s4)
    ctx->pc = 0x4b6374u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6378: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b6378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b637c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x4b637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4b6380: 0x2687015c  addiu       $a3, $s4, 0x15C
    ctx->pc = 0x4b6380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 348));
    // 0x4b6384: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b6384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b6388: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b6388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b638c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b638cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b6390: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4b6390u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4b6394: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x4b6394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4b6398: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4b6398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b639c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b63a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b63a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b63a4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b63a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b63a8: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x4b63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x4b63ac: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b63acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b63b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b63b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b63b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b63b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b63b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b63b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b63bc: 0xa68001b6  sh          $zero, 0x1B6($s4)
    ctx->pc = 0x4b63bcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b63c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b63c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b63c4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b63c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4b63c8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4b63c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b63cc: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x4b63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
label_4b63d0:
    // 0x4b63d0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b63d4: 0x24770d4c  addiu       $s7, $v1, 0xD4C
    ctx->pc = 0x4b63d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 3404));
    // 0x4b63d8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4b63d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0D4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D4Cu, _value); } while (0);
    // 0x4b63dc: 0x844301b4  lh          $v1, 0x1B4($v0)
    ctx->pc = 0x4b63dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 436)));
    // 0x4b63e0: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4B63E0u;
    {
        const bool branch_taken_0x4b63e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B63E0u;
        // 0x4b63e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b63e0) {
            ctx->pc = 0x4B6418u;
            goto label_4b6418;
        }
    }
    ctx->pc = 0x4B63E8u;
    // 0x4b63e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b63e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b63ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b63ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b63f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b63f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b63f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b63f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b63f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b63f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b63fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b63fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b6400: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b6400u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b6404: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b6404u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b6408: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b6408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b640c: 0x812d9fe  j           func_4B67F8
    ctx->pc = 0x4B640Cu;
    ctx->pc = 0x4B6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B640Cu;
    // 0x4b6410: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B67F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B67F8u, 0x4B640Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B6414u;
    // 0x4b6414: 0x0  nop
    ctx->pc = 0x4b6414u;
    // NOP
label_4b6418:
    // 0x4b6418: 0x2684014a  addiu       $a0, $s4, 0x14A
    ctx->pc = 0x4b6418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 330));
    // 0x4b641c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b641cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b6420: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b6420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b6424: 0x24760d30  addiu       $s6, $v1, 0xD30
    ctx->pc = 0x4b6424u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x4b6428: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4b6428u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x4b642c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4b6430: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4b6430u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b6434: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b6434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b6438: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b6438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b643c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4b643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b6440: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b6440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b6444: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b6444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b6448: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b6448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b644c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4b644cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4b6450: 0x96c40000  lhu         $a0, 0x0($s6)
    ctx->pc = 0x4b6450u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b6454: 0x2c820018  sltiu       $v0, $a0, 0x18
    ctx->pc = 0x4b6454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x4b6458: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4B6458u;
    {
        const bool branch_taken_0x4b6458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b6458) {
            ctx->pc = 0x4B645Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6458u;
            // 0x4b645c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6490u;
            goto label_4b6490;
        }
    }
    ctx->pc = 0x4B6460u;
    // 0x4b6460: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b6460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6464: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b6464u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b6468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b6468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b646c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b646cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b6470: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b6470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b6474: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b6474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b6478: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b6478u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b647c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b647cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b6480: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b6480u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b6484: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b6484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b6488: 0x812d9fe  j           func_4B67F8
    ctx->pc = 0x4B6488u;
    ctx->pc = 0x4B648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6488u;
    // 0x4b648c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B67F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B67F8u, 0x4B6488u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B6490u;
label_4b6490:
    // 0x4b6490: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b6490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b6494: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4b6494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b6498: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b6498u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b649c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b649cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b64a0: 0x26100d3c  addiu       $s0, $s0, 0xD3C
    ctx->pc = 0x4b64a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3388));
    // 0x4b64a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b64a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b64a8: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b64a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b64ac: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b64acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b64b0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4b64b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4b64b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b64b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b64b8: 0x26310d44  addiu       $s1, $s1, 0xD44
    ctx->pc = 0x4b64b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3396));
    // 0x4b64bc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4b64bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4b64c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b64c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b64c4: 0x26520d40  addiu       $s2, $s2, 0xD40
    ctx->pc = 0x4b64c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3392));
    // 0x4b64c8: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4b64c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4b64cc: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4b64ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b64d0: 0x26730d34  addiu       $s3, $s3, 0xD34
    ctx->pc = 0x4b64d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3380));
    // 0x4b64d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b64d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b64d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b64d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b64dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b64e0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b64e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b64e4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b64e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b64e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b64e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b64ec: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4b64ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4b64f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b64f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b64f4: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4b64f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b64f8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4b64f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4b64fc: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b64fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b6500: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b6500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b6504: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4b6504u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4b6508: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4b6508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b650c: 0x8e830158  lw          $v1, 0x158($s4)
    ctx->pc = 0x4b650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x4b6510: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b6510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b6514: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b6514u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b6518: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x4b6518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x4b651c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b651cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b6520: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4b6520u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4b6524: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4b6524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4b6528: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b6528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b652c: 0x94c66d60  lhu         $a2, 0x6D60($a2)
    ctx->pc = 0x4b652cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28000)));
    // 0x4b6530: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4b6530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4b6534: 0xa686000c  sh          $a2, 0xC($s4)
    ctx->pc = 0x4b6534u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b6538: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b653c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4b653cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b6540: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b6540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b6544: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x4b6544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b6548: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b6548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b654c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b654cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b6550: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b6550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b6554: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b6554u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b6558: 0x8e82015c  lw          $v0, 0x15C($s4)
    ctx->pc = 0x4b6558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x4b655c: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4b655cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b6560: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4b6560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4b6564: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4b6564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b6568: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b6568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b656c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b6570: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b6570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b6574: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b6574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b6578: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4b6578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4b657c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b657cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b6580: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4b6580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4b6584: 0x8e820160  lw          $v0, 0x160($s4)
    ctx->pc = 0x4b6584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
    // 0x4b6588: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4b6588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4b658c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b658cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b6590: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b6590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b6594: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4b6594u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4b6598: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x4b6598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x4b659c: 0x85220022  lh          $v0, 0x22($t1)
    ctx->pc = 0x4b659cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 34)));
    // 0x4b65a0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b65a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b65a4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b65a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b65a8: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4b65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x4b65ac: 0x85220024  lh          $v0, 0x24($t1)
    ctx->pc = 0x4b65acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x4b65b0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b65b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b65b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b65b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b65b8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b65bc: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4B65BCu;
    SET_GPR_U32(ctx, 31, 0x4B65C4u);
    ctx->pc = 0x4B65C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B65BCu;
    // 0x4b65c0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4B65BCu, 0x4B65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B65C4u;
label_4b65c4:
    // 0x4b65c4: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4b65c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b65c8: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x4b65c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b65cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b65ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b65d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b65d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b65d4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4b65d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b65d8: 0x84e20026  lh          $v0, 0x26($a3)
    ctx->pc = 0x4b65d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x4b65dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b65dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b65e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b65e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b65e4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b65e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b65e8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b65e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b65ec: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4b65ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x4b65f0: 0x84e20028  lh          $v0, 0x28($a3)
    ctx->pc = 0x4b65f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x4b65f4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b65f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b65f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b65f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b65fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b65fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b6600: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4B6600u;
    SET_GPR_U32(ctx, 31, 0x4B6608u);
    ctx->pc = 0x4B6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6600u;
    // 0x4b6604: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4B6600u, 0x4B6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6608u;
label_4b6608:
    // 0x4b6608: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4b6608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b660c: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4b660cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b6610: 0x268a0010  addiu       $t2, $s4, 0x10
    ctx->pc = 0x4b6610u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4b6614: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4b6614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b6618: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b6618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b661c: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x4b661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4b6620: 0x268b0014  addiu       $t3, $s4, 0x14
    ctx->pc = 0x4b6620u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4b6624: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4b6624u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b6628: 0x268c0018  addiu       $t4, $s4, 0x18
    ctx->pc = 0x4b6628u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4b662c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4b662cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4b6630: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4b6630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b6634: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b6634u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b6638: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4b6638u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b663c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b6640: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4b6640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b6644: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4b6644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4b6648: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b6648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b664c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b664cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b6650: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b6650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b6654: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4b6654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4b6658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b6658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b665c: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x4b665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4b6660: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4b6660u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b6664: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4b6664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4b6668: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b6668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b666c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b666cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b6670: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b6670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b6674: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4b6674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b6678: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b6678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b667c: 0xf53825  or          $a3, $a3, $s5
    ctx->pc = 0x4b667cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x4b6680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b6680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6684: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4b6684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4b6688: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b6688u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b668c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4b668cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4b6690: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b6690u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b6694: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x4b6694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x4b6698: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b6698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b669c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4b669cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4b66a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b66a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b66a4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4b66a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b66a8: 0x1154025  or          $t0, $t0, $s5
    ctx->pc = 0x4b66a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 21));
    // 0x4b66ac: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4b66acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4b66b0: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4b66b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4b66b4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4b66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b66b8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b66b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b66bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b66bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b66c0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4b66c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4b66c4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b66c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b66c8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4b66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b66cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b66d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b66d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b66d4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b66d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b66d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b66d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b66dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b66dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b66e0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4b66e0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4b66e4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4b66e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b66e8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4b66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b66ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b66f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b66f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b66f4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4b66f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4b66f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b66f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b66fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b66fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b6700: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b6700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b6704: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4b6704u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4b6708: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6708u;
        // 0x4b670c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B6710u;
}
