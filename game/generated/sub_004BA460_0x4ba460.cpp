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

// Function: sub_004BA460
// Address: 0x4ba460 - 0x4ba638
void sub_004BA460_0x4ba460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BA460_0x4ba460");
#endif

    switch (ctx->pc) {
        case 0x4ba47cu: goto label_4ba47c;
        case 0x4ba498u: goto label_4ba498;
        default: break;
    }

    ctx->pc = 0x4ba460u;

    // 0x4ba460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ba460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ba464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ba464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ba468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ba468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba46c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ba46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ba470: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ba470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ba474: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4BA474u;
    SET_GPR_U32(ctx, 31, 0x4BA47Cu);
    ctx->pc = 0x4BA478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA474u;
    // 0x4ba478: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4BA474u, 0x4BA47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA47Cu;
label_4ba47c:
    // 0x4ba47c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ba47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ba480: 0xac620df0  sw          $v0, 0xDF0($v1)
    ctx->pc = 0x4ba480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0DF0u, _value); } while (0);
    // 0x4ba484: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ba484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ba488: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4BA488u;
    {
        const bool branch_taken_0x4ba488 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA488u;
        // 0x4ba48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba488) {
            ctx->pc = 0x4BA4B8u;
            goto label_4ba4b8;
        }
    }
    ctx->pc = 0x4BA490u;
    // 0x4ba490: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4BA490u;
    SET_GPR_U32(ctx, 31, 0x4BA498u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BA490u, 0x4BA498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA498u;
label_4ba498:
    // 0x4ba498: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4ba498u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ba49c: 0x260201b6  addiu       $v0, $s0, 0x1B6
    ctx->pc = 0x4ba49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
    // 0x4ba4a0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ba4a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ba4a4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4ba4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4ba4a8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4ba4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ba4ac: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4ba4acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ba4b0: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x4ba4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x4ba4b4: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x4ba4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
label_4ba4b8:
    // 0x4ba4b8: 0x8e0b0140  lw          $t3, 0x140($s0)
    ctx->pc = 0x4ba4b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x4ba4bc: 0x856201b4  lh          $v0, 0x1B4($t3)
    ctx->pc = 0x4ba4bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 436)));
    // 0x4ba4c0: 0x4410058  bgez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x4BA4C0u;
    {
        const bool branch_taken_0x4ba4c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4BA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA4C0u;
        // 0x4ba4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba4c0) {
            ctx->pc = 0x4BA624u;
            goto label_4ba624;
        }
    }
    ctx->pc = 0x4BA4C8u;
    // 0x4ba4c8: 0x8d630010  lw          $v1, 0x10($t3)
    ctx->pc = 0x4ba4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x4ba4cc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4ba4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4ba4d0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ba4d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ba4d4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ba4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ba4d8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ba4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ba4dc: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x4ba4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4ba4e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ba4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ba4e4: 0x26090018  addiu       $t1, $s0, 0x18
    ctx->pc = 0x4ba4e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4ba4e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ba4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ba4ec: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ba4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ba4f0: 0x24a50dd8  addiu       $a1, $a1, 0xDD8
    ctx->pc = 0x4ba4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3544));
    // 0x4ba4f4: 0x2607015e  addiu       $a3, $s0, 0x15E
    ctx->pc = 0x4ba4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4ba4f8: 0x8d630014  lw          $v1, 0x14($t3)
    ctx->pc = 0x4ba4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x4ba4fc: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x4ba4fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ba500: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ba500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ba504: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ba504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ba508: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ba508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ba50c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4ba50cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4ba510: 0x8d630018  lw          $v1, 0x18($t3)
    ctx->pc = 0x4ba510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x4ba514: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4ba514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ba518: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ba518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ba51c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ba51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ba520: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4ba520u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4ba524: 0x95630022  lhu         $v1, 0x22($t3)
    ctx->pc = 0x4ba524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 34)));
    // 0x4ba528: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x4ba528u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ba52c: 0x95620024  lhu         $v0, 0x24($t3)
    ctx->pc = 0x4ba52cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 36)));
    // 0x4ba530: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x4ba530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba534: 0x95630026  lhu         $v1, 0x26($t3)
    ctx->pc = 0x4ba534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 38)));
    // 0x4ba538: 0xa6030026  sh          $v1, 0x26($s0)
    ctx->pc = 0x4ba538u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ba53c: 0x95620028  lhu         $v0, 0x28($t3)
    ctx->pc = 0x4ba53cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x4ba540: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x4ba540u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba544: 0x9563002a  lhu         $v1, 0x2A($t3)
    ctx->pc = 0x4ba544u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 42)));
    // 0x4ba548: 0xa603002a  sh          $v1, 0x2A($s0)
    ctx->pc = 0x4ba548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ba54c: 0x9562002c  lhu         $v0, 0x2C($t3)
    ctx->pc = 0x4ba54cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 44)));
    // 0x4ba550: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x4ba550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ba554: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4ba554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba558: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4ba558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ba55c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba560: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ba560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ba564: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ba564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ba568: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ba568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ba56c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4ba56cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ba570: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x4ba570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x4ba574: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4ba574u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ba578: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ba578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba57c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4ba57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba580: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4ba580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4ba584: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ba584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ba588: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba58c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ba58cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ba590: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ba590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ba594: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ba594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ba598: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ba598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ba59c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba59cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba5a0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ba5a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba5a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ba5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ba5a8: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4ba5a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4ba5ac: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ba5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ba5b0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ba5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ba5b4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ba5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ba5b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba5bc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ba5bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba5c0: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4ba5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4ba5c4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ba5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ba5c8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ba5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ba5cc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ba5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ba5d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ba5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ba5d4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ba5d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba5d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ba5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ba5dc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ba5dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ba5e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ba5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ba5e4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ba5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4ba5e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ba5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ba5ec: 0x84636f40  lh          $v1, 0x6F40($v1)
    ctx->pc = 0x4ba5ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28480)));
    // 0x4ba5f0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4ba5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4ba5f4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ba5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ba5f8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ba5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ba5fc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ba5fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ba600: 0x104a0007  beq         $v0, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BA600u;
    {
        const bool branch_taken_0x4ba600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x4BA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA600u;
        // 0x4ba604: 0x94a50000  lhu         $a1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba600) {
            ctx->pc = 0x4BA620u;
            goto label_4ba620;
        }
    }
    ctx->pc = 0x4BA608u;
    // 0x4ba608: 0xa605000c  sh          $a1, 0xC($s0)
    ctx->pc = 0x4ba608u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ba60c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ba60cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ba610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ba610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ba614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ba614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ba618: 0x3e00008  jr          $ra
    ctx->pc = 0x4BA618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA618u;
        // 0x4ba61c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BA618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BA620u;
label_4ba620:
    // 0x4ba620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ba624:
    // 0x4ba624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ba624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ba628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ba628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ba62c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ba62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ba630: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4BA630u;
    ctx->pc = 0x4BA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA630u;
    // 0x4ba634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BA638u;
}
