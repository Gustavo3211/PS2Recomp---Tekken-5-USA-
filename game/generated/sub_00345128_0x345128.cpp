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

// Function: sub_00345128
// Address: 0x345128 - 0x345314
void sub_00345128_0x345128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345128_0x345128");
#endif

    switch (ctx->pc) {
        case 0x345148u: goto label_345148;
        case 0x3452f8u: goto label_3452f8;
        default: break;
    }

    ctx->pc = 0x345128u;

    // 0x345128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34512c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34512cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x345130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345134: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x345134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x345138: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x345138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34513c: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x34513cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x345140: 0xc04306a  jal         func_10C1A8
    ctx->pc = 0x345140u;
    SET_GPR_U32(ctx, 31, 0x345148u);
    ctx->pc = 0x345144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345140u;
    // 0x345144: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1A8u, 0x345140u, 0x345148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345148u;
label_345148:
    // 0x345148: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x345148u;
    {
        const bool branch_taken_0x345148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345148u;
        // 0x34514c: 0x93a20001  lbu         $v0, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345148) {
            ctx->pc = 0x345160u;
            goto label_345160;
        }
    }
    ctx->pc = 0x345150u;
    // 0x345150: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x345150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x345154: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x345154u;
    {
        const bool branch_taken_0x345154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345154u;
        // 0x345158: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345154) {
            ctx->pc = 0x345314u;
            return;
        }
    }
    ctx->pc = 0x34515Cu;
    // 0x34515c: 0x0  nop
    ctx->pc = 0x34515cu;
    // NOP
label_345160:
    // 0x345160: 0x26090004  addiu       $t1, $s0, 0x4
    ctx->pc = 0x345160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x345164: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x345164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x345168: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x345168u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x34516c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x34516cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x345170: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x345170u;
    {
        const bool branch_taken_0x345170 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x345174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345170u;
        // 0x345174: 0x304a000f  andi        $t2, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345170) {
            ctx->pc = 0x345180u;
            goto label_345180;
        }
    }
    ctx->pc = 0x345178u;
    // 0x345178: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x345178u;
    {
        const bool branch_taken_0x345178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345178u;
        // 0x34517c: 0xa2000047  sb          $zero, 0x47($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345178) {
            ctx->pc = 0x345314u;
            return;
        }
    }
    ctx->pc = 0x345180u;
label_345180:
    // 0x345180: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x345180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x345184: 0x24cbfffe  addiu       $t3, $a2, -0x2
    ctx->pc = 0x345184u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x345188: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x345188u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x34518c: 0x38c80007  xori        $t0, $a2, 0x7
    ctx->pc = 0x34518cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)7);
    // 0x345190: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x345190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x345194: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x345194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x345198: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x345198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x34519c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x34519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3451a0: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x3451a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3451a4: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x3451a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x3451a8: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x3451a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3451ac: 0x23827  nor         $a3, $zero, $v0
    ctx->pc = 0x3451acu;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3451b0: 0xa8200a  movz        $a0, $a1, $t0
    ctx->pc = 0x3451b0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x3451b4: 0x2d650006  sltiu       $a1, $t3, 0x6
    ctx->pc = 0x3451b4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3451b8: 0x673024  and         $a2, $v1, $a3
    ctx->pc = 0x3451b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x3451bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3451bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3451c0: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x3451c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x3451c4: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x3451c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x3451c8: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x3451c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x3451cc: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x3451ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x3451d0: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3451D0u;
    {
        const bool branch_taken_0x3451d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3451D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451D0u;
        // 0x3451d4: 0xad270014  sw          $a3, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3451d0) {
            ctx->pc = 0x345314u;
            return;
        }
    }
    ctx->pc = 0x3451D8u;
    // 0x3451d8: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x3451d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3451dc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3451dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3451e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3451e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3451e4: 0x8c634aa0  lw          $v1, 0x4AA0($v1)
    ctx->pc = 0x3451e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19104)));
    // 0x3451e8: 0x600008  jr          $v1
    ctx->pc = 0x3451E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3451F0u: goto label_3451f0;
            case 0x345228u: goto label_345228;
            case 0x345268u: goto label_345268;
            case 0x345298u: goto label_345298;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3451E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3451F0u;
label_3451f0:
    // 0x3451f0: 0x93a20004  lbu         $v0, 0x4($sp)
    ctx->pc = 0x3451f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3451f4: 0x93a40005  lbu         $a0, 0x5($sp)
    ctx->pc = 0x3451f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x3451f8: 0x93a50006  lbu         $a1, 0x6($sp)
    ctx->pc = 0x3451f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x3451fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3451fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x345200: 0x93a30007  lbu         $v1, 0x7($sp)
    ctx->pc = 0x345200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x345204: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x345204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x345208: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x345208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x34520c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x34520cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x345210: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x345210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x345214: 0xa5220018  sh          $v0, 0x18($t1)
    ctx->pc = 0x345214u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x345218: 0xa523001e  sh          $v1, 0x1E($t1)
    ctx->pc = 0x345218u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x34521c: 0xa524001a  sh          $a0, 0x1A($t1)
    ctx->pc = 0x34521cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x345220: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x345220u;
    {
        const bool branch_taken_0x345220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345220u;
        // 0x345224: 0xa525001c  sh          $a1, 0x1C($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 28), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345220) {
            ctx->pc = 0x345314u;
            return;
        }
    }
    ctx->pc = 0x345228u;
label_345228:
    // 0x345228: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x345228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34522c: 0x3407ff80  ori         $a3, $zero, 0xFF80
    ctx->pc = 0x34522cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x345230: 0x93a40005  lbu         $a0, 0x5($sp)
    ctx->pc = 0x345230u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x345234: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x345234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x345238: 0x93a50006  lbu         $a1, 0x6($sp)
    ctx->pc = 0x345238u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x34523c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x34523cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x345240: 0x93a60007  lbu         $a2, 0x7($sp)
    ctx->pc = 0x345240u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x345244: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x345244u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x345248: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x345248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x34524c: 0xa5230018  sh          $v1, 0x18($t1)
    ctx->pc = 0x34524cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x345250: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x345250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x345254: 0xa524001a  sh          $a0, 0x1A($t1)
    ctx->pc = 0x345254u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x345258: 0xa522001e  sh          $v0, 0x1E($t1)
    ctx->pc = 0x345258u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x34525c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x34525Cu;
    {
        const bool branch_taken_0x34525c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34525Cu;
        // 0x345260: 0xa525001c  sh          $a1, 0x1C($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 28), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34525c) {
            ctx->pc = 0x345314u;
            return;
        }
    }
    ctx->pc = 0x345264u;
    // 0x345264: 0x0  nop
    ctx->pc = 0x345264u;
    // NOP
label_345268:
    // 0x345268: 0x93a30005  lbu         $v1, 0x5($sp)
    ctx->pc = 0x345268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x34526c: 0x93a40007  lbu         $a0, 0x7($sp)
    ctx->pc = 0x34526cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x345270: 0x93a50004  lbu         $a1, 0x4($sp)
    ctx->pc = 0x345270u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x345274: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x345274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x345278: 0x93a20006  lbu         $v0, 0x6($sp)
    ctx->pc = 0x345278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x34527c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x34527cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x345280: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x345280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x345284: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x345284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x345288: 0xa5250018  sh          $a1, 0x18($t1)
    ctx->pc = 0x345288u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x34528c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x34528Cu;
    {
        const bool branch_taken_0x34528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34528Cu;
        // 0x345290: 0xa522001a  sh          $v0, 0x1A($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34528c) {
            ctx->pc = 0x345314u;
            return;
        }
    }
    ctx->pc = 0x345294u;
    // 0x345294: 0x0  nop
    ctx->pc = 0x345294u;
    // NOP
label_345298:
    // 0x345298: 0x93a60007  lbu         $a2, 0x7($sp)
    ctx->pc = 0x345298u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x34529c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34529cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3452a0: 0x93a40004  lbu         $a0, 0x4($sp)
    ctx->pc = 0x3452a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3452a4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x3452a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x3452a8: 0x93a20005  lbu         $v0, 0x5($sp)
    ctx->pc = 0x3452a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x3452ac: 0x254afffa  addiu       $t2, $t2, -0x6
    ctx->pc = 0x3452acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967290));
    // 0x3452b0: 0x93a30006  lbu         $v1, 0x6($sp)
    ctx->pc = 0x3452b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x3452b4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3452b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3452b8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3452b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3452bc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3452bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3452c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3452c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3452c4: 0x2484ff00  addiu       $a0, $a0, -0x100
    ctx->pc = 0x3452c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x3452c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3452c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3452cc: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x3452ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x3452d0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3452d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3452d4: 0xa5240018  sh          $a0, 0x18($t1)
    ctx->pc = 0x3452d4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x3452d8: 0xa522001a  sh          $v0, 0x1A($t1)
    ctx->pc = 0x3452d8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x3452dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3452dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3452e0: 0xa523001c  sh          $v1, 0x1C($t1)
    ctx->pc = 0x3452e0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x3452e4: 0x1140000b  beqz        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x3452E4u;
    {
        const bool branch_taken_0x3452e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3452E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3452E4u;
        // 0x3452e8: 0xa525001e  sh          $a1, 0x1E($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 30), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3452e4) {
            ctx->pc = 0x345314u;
            return;
        }
    }
    ctx->pc = 0x3452ECu;
    // 0x3452ec: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x3452ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x3452f0: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x3452f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3452f4: 0x0  nop
    ctx->pc = 0x3452f4u;
    // NOP
label_3452f8:
    // 0x3452f8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3452f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3452fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3452fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x345300: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x345300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x345304: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x345304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x345308: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x345308u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x34530c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34530Cu;
    {
        const bool branch_taken_0x34530c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34530Cu;
        // 0x345310: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34530c) {
            ctx->pc = 0x3452F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3452f8;
        }
    }
    ctx->pc = 0x345314u;
}
