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

// Function: sub_004904F8
// Address: 0x4904f8 - 0x490720
void sub_004904F8_0x4904f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004904F8_0x4904f8");
#endif

    switch (ctx->pc) {
        case 0x4905dcu: goto label_4905dc;
        case 0x4905f0u: goto label_4905f0;
        default: break;
    }

    ctx->pc = 0x4904f8u;

    // 0x4904f8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4904f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4904fc: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4904fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x490500: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x490500u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x490504: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x490504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x490508: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x490508u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49050c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x49050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x490510: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x490510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x490514: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x490514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x490518: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x490518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x49051c: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x49051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x490520: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x490520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x490524: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x490524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x490528: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x490528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x49052c: 0x249414dc  addiu       $s4, $a0, 0x14DC
    ctx->pc = 0x49052cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 5340));
    // 0x490530: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x490530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x490534: 0x3c010051  lui         $at, 0x51
    ctx->pc = 0x490534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)81 << 16));
    // 0x490538: 0x242177c0  addiu       $at, $at, 0x77C0
    ctx->pc = 0x490538u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30656));
    // 0x49053c: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x49053cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x490540: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x490540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x490544: 0x245214d4  addiu       $s2, $v0, 0x14D4
    ctx->pc = 0x490544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5332));
    // 0x490548: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x490548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x49054c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x49054cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x490550: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x490550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x490554: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x490554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x490558: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x490558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49055c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x49055cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x490560: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x490560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x490564: 0x24760064  addiu       $s6, $v1, 0x64
    ctx->pc = 0x490564u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x490568: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x490568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49056c: 0x84a7000c  lh          $a3, 0xC($a1)
    ctx->pc = 0x49056cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x490570: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x490570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x490574: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x490574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x490578: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x490578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x49057c: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x49057cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x490580: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x490580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x490584: 0x3c06007e  lui         $a2, 0x7E
    ctx->pc = 0x490584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)126 << 16));
    // 0x490588: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x490588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49058c: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x49058cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x490590: 0x8ecc0000  lw          $t4, 0x0($s6)
    ctx->pc = 0x490590u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x490594: 0x3c08007e  lui         $t0, 0x7E
    ctx->pc = 0x490594u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)126 << 16));
    // 0x490598: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x490598u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x49059c: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x49059cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x4905a0: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x4905a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4905a4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4905a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4905a8: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x4905a8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4905ac: 0x251514bc  addiu       $s5, $t0, 0x14BC
    ctx->pc = 0x4905acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), 5308));
    // 0x4905b0: 0x247314c0  addiu       $s3, $v1, 0x14C0
    ctx->pc = 0x4905b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5312));
    // 0x4905b4: 0x24d014d8  addiu       $s0, $a2, 0x14D8
    ctx->pc = 0x4905b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 5336));
    // 0x4905b8: 0x245714c4  addiu       $s7, $v0, 0x14C4
    ctx->pc = 0x4905b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 5316));
    // 0x4905bc: 0xaeac0000  sw          $t4, 0x0($s5)
    ctx->pc = 0x4905bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 12));
    // 0x4905c0: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x4905c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x4905c4: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x4905c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
    // 0x4905c8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4905c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4905cc: 0x15600006  bnez        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x4905CCu;
    {
        const bool branch_taken_0x4905cc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4905D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4905CCu;
        // 0x4905d0: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4905cc) {
            ctx->pc = 0x4905E8u;
            goto label_4905e8;
        }
    }
    ctx->pc = 0x4905D4u;
    // 0x4905d4: 0xc1240be  jal         func_4902F8
    ctx->pc = 0x4905D4u;
    SET_GPR_U32(ctx, 31, 0x4905DCu);
    ctx->pc = 0x4902F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4902F8u, 0x4905D4u, 0x4905DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4905DCu;
label_4905dc:
    // 0x4905dc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x4905DCu;
    {
        const bool branch_taken_0x4905dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4905E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4905DCu;
        // 0x4905e0: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4905dc) {
            ctx->pc = 0x4906F0u;
            goto label_4906f0;
        }
    }
    ctx->pc = 0x4905E4u;
    // 0x4905e4: 0x0  nop
    ctx->pc = 0x4905e4u;
    // NOP
label_4905e8:
    // 0x4905e8: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4905E8u;
    SET_GPR_U32(ctx, 31, 0x4905F0u);
    ctx->pc = 0x4905ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4905E8u;
    // 0x4905ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4905E8u, 0x4905F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4905F0u;
label_4905f0:
    // 0x4905f0: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4905F0u;
    {
        const bool branch_taken_0x4905f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4905F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4905F0u;
        // 0x4905f4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4905f0) {
            ctx->pc = 0x4906ECu;
            goto label_4906ec;
        }
    }
    ctx->pc = 0x4905F8u;
    // 0x4905f8: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x4905f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x4905fc: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x4905fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x490600: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x490600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490604: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x490604u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x490608: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x490608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x49060c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x490610: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x490610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x490614: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x490614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x490618: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x490618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49061c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49061cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x490620: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x490620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490624: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x490624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490628: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x490628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x49062c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49062cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x490630: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x490630u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x490634: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x490634u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490638: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x490638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49063c: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x49063cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x490640: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x490640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x490644: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x490644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490648: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x490648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x49064c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490650: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x490650u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x490654: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x490654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x490658: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x490658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49065c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49065cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x490660: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x490660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x490664: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x490664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x490668: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x490668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49066c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49066cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x490670: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x490670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x490674: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x490674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490678: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x490678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x49067c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x49067cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x490680: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x490680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x490684: 0xa4820024  sh          $v0, 0x24($a0)
    ctx->pc = 0x490684u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x490688: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x490688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49068c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49068cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490690: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x490690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x490694: 0xa4820026  sh          $v0, 0x26($a0)
    ctx->pc = 0x490694u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x490698: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x490698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49069c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49069cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4906a0: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x4906a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4906a4: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x4906a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x4906a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4906a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4906ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4906acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4906b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4906b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4906b4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4906b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4906b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4906b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4906bc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4906bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4906c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4906c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4906c4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4906c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4906c8: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4906c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4906cc: 0x84a30016  lh          $v1, 0x16($a1)
    ctx->pc = 0x4906ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x4906d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4906d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4906d4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4906d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4906d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4906d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4906dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4906dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4906e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4906e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4906e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4906e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4906e8: 0xa4600022  sh          $zero, 0x22($v1)
    ctx->pc = 0x4906e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 0));
label_4906ec:
    // 0x4906ec: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4906ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4906f0:
    // 0x4906f0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4906f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4906f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4906f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4906f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4906f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4906fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4906fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490700: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x490700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x490704: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x490704u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490708: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x490708u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49070c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x49070cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490710: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x490710u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x490714: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x490714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x490718: 0x3e00008  jr          $ra
    ctx->pc = 0x490718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490718u;
        // 0x49071c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490720u;
}
