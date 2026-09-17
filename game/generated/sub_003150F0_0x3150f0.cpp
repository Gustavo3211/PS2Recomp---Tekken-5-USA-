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

// Function: sub_003150F0
// Address: 0x3150f0 - 0x315990
void sub_003150F0_0x3150f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003150F0_0x3150f0");
#endif

    switch (ctx->pc) {
        case 0x3153a8u: goto label_3153a8;
        case 0x3154a8u: goto label_3154a8;
        case 0x315508u: goto label_315508;
        case 0x315898u: goto label_315898;
        case 0x3158a0u: goto label_3158a0;
        case 0x3158d8u: goto label_3158d8;
        default: break;
    }

    ctx->pc = 0x3150f0u;

    // 0x3150f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3150f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x3150f4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3150f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3150f8: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x3150f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x3150fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3150fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315100: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x315100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x315104: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x315104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x315108: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x315108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x31510c: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x31510cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315110: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x315110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x315114: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x315114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x315118: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x315118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x31511c: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x31511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x315120: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x315120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x315124: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x315124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x315128: 0x9242004e  lbu         $v0, 0x4E($s2)
    ctx->pc = 0x315128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x31512c: 0x9245004f  lbu         $a1, 0x4F($s2)
    ctx->pc = 0x31512cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 79)));
    // 0x315130: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x315130u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x315134: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x315134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x315138: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x315138u;
    {
        const bool branch_taken_0x315138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315138) {
            ctx->pc = 0x31513Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315138u;
            // 0x31513c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x315140u;
            goto label_315140;
        }
    }
    ctx->pc = 0x315140u;
label_315140:
    // 0x315140: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x315140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x315144: 0x8e490010  lw          $t1, 0x10($s2)
    ctx->pc = 0x315144u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x315148: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x315148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x31514c: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x31514cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x315150: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x315150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x315154: 0x8e4b0018  lw          $t3, 0x18($s2)
    ctx->pc = 0x315154u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x315158: 0x8e48001c  lw          $t0, 0x1C($s2)
    ctx->pc = 0x315158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x31515c: 0x8e4c0028  lw          $t4, 0x28($s2)
    ctx->pc = 0x31515cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x315160: 0x2012  mflo        $a0
    ctx->pc = 0x315160u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x315164: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x315164u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x315168: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x315168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x31516c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x315170: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x315170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x315174: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x315174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x315178: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x315178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x31517c: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x31517cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x315180: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x315180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x315184: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x315184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x315188: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x315188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x31518c: 0x8f82cbb8  lw          $v0, -0x3448($gp)
    ctx->pc = 0x31518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953912)));
    // 0x315190: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x315190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x315194: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x315194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x315198: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x315198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x31519c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x31519cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x3151a0: 0x8e470044  lw          $a3, 0x44($s2)
    ctx->pc = 0x3151a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x3151a4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3151a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x3151a8: 0x2c820040  sltiu       $v0, $a0, 0x40
    ctx->pc = 0x3151a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x3151ac: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x3151acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x3151b0: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x3151b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x3151b4: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x3151b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x3151b8: 0x8e4600c4  lw          $a2, 0xC4($s2)
    ctx->pc = 0x3151b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x3151bc: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x3151bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x3151c0: 0x8e4700c8  lw          $a3, 0xC8($s2)
    ctx->pc = 0x3151c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x3151c4: 0x2812  mflo        $a1
    ctx->pc = 0x3151c4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x3151c8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3151C8u;
    {
        const bool branch_taken_0x3151c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151C8u;
        // 0x3151cc: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3151c8) {
            ctx->pc = 0x315240u;
            goto label_315240;
        }
    }
    ctx->pc = 0x3151D0u;
    // 0x3151d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3151d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3151d4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3151d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3151d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3151d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3151dc: 0x8c632ca0  lw          $v1, 0x2CA0($v1)
    ctx->pc = 0x3151dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11424)));
    // 0x3151e0: 0x600008  jr          $v1
    ctx->pc = 0x3151E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3151E8u: goto label_3151e8;
            case 0x3151F0u: goto label_3151f0;
            case 0x3151F8u: goto label_3151f8;
            case 0x315208u: goto label_315208;
            case 0x315218u: goto label_315218;
            case 0x315228u: goto label_315228;
            case 0x315238u: goto label_315238;
            case 0x315240u: goto label_315240;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3151E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3151E8u;
label_3151e8:
    // 0x3151e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3151E8u;
    {
        const bool branch_taken_0x3151e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3151ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151E8u;
        // 0x3151ec: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3151e8) {
            ctx->pc = 0x315240u;
            goto label_315240;
        }
    }
    ctx->pc = 0x3151F0u;
label_3151f0:
    // 0x3151f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3151F0u;
    {
        const bool branch_taken_0x3151f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3151F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151F0u;
        // 0x3151f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3151f0) {
            ctx->pc = 0x31523Cu;
            goto label_31523c;
        }
    }
    ctx->pc = 0x3151F8u;
label_3151f8:
    // 0x3151f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3151f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3151fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3151FCu;
    {
        const bool branch_taken_0x3151fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151FCu;
        // 0x315200: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3151fc) {
            ctx->pc = 0x315240u;
            goto label_315240;
        }
    }
    ctx->pc = 0x315204u;
    // 0x315204: 0x0  nop
    ctx->pc = 0x315204u;
    // NOP
label_315208:
    // 0x315208: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x315208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31520c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31520Cu;
    {
        const bool branch_taken_0x31520c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31520Cu;
        // 0x315210: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31520c) {
            ctx->pc = 0x315240u;
            goto label_315240;
        }
    }
    ctx->pc = 0x315214u;
    // 0x315214: 0x0  nop
    ctx->pc = 0x315214u;
    // NOP
label_315218:
    // 0x315218: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x315218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31521c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31521Cu;
    {
        const bool branch_taken_0x31521c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31521Cu;
        // 0x315220: 0xafa60038  sw          $a2, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31521c) {
            ctx->pc = 0x315240u;
            goto label_315240;
        }
    }
    ctx->pc = 0x315224u;
    // 0x315224: 0x0  nop
    ctx->pc = 0x315224u;
    // NOP
label_315228:
    // 0x315228: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x315228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31522c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31522Cu;
    {
        const bool branch_taken_0x31522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31522Cu;
        // 0x315230: 0xafa70038  sw          $a3, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31522c) {
            ctx->pc = 0x315240u;
            goto label_315240;
        }
    }
    ctx->pc = 0x315234u;
    // 0x315234: 0x0  nop
    ctx->pc = 0x315234u;
    // NOP
label_315238:
    // 0x315238: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x315238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_31523c:
    // 0x31523c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x31523cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_315240:
    // 0x315240: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x315240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x315244: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x315244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x315248: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x315248u;
    {
        const bool branch_taken_0x315248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315248) {
            ctx->pc = 0x31524Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315248u;
            // 0x31524c: 0x8e4200c0  lw          $v0, 0xC0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3152BCu;
            goto label_3152bc;
        }
    }
    ctx->pc = 0x315250u;
    // 0x315250: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x315250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315254: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x315254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x315258: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x315258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31525c: 0x8c632da0  lw          $v1, 0x2DA0($v1)
    ctx->pc = 0x31525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11680)));
    // 0x315260: 0x600008  jr          $v1
    ctx->pc = 0x315260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x315268u: goto label_315268;
            case 0x315270u: goto label_315270;
            case 0x315280u: goto label_315280;
            case 0x315290u: goto label_315290;
            case 0x3152A0u: goto label_3152a0;
            case 0x3152B0u: goto label_3152b0;
            case 0x3152B8u: goto label_3152b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315260u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x315268u;
label_315268:
    // 0x315268: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x315268u;
    {
        const bool branch_taken_0x315268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315268u;
        // 0x31526c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315268) {
            ctx->pc = 0x3152B8u;
            goto label_3152b8;
        }
    }
    ctx->pc = 0x315270u;
label_315270:
    // 0x315270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315274: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x315274u;
    {
        const bool branch_taken_0x315274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315274u;
        // 0x315278: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315274) {
            ctx->pc = 0x3152B8u;
            goto label_3152b8;
        }
    }
    ctx->pc = 0x31527Cu;
    // 0x31527c: 0x0  nop
    ctx->pc = 0x31527cu;
    // NOP
label_315280:
    // 0x315280: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x315280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315284: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x315284u;
    {
        const bool branch_taken_0x315284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315284u;
        // 0x315288: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315284) {
            ctx->pc = 0x3152B8u;
            goto label_3152b8;
        }
    }
    ctx->pc = 0x31528Cu;
    // 0x31528c: 0x0  nop
    ctx->pc = 0x31528cu;
    // NOP
label_315290:
    // 0x315290: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x315290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x315294u;
    {
        const bool branch_taken_0x315294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315294u;
        // 0x315298: 0xafa5003c  sw          $a1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315294) {
            ctx->pc = 0x3152B8u;
            goto label_3152b8;
        }
    }
    ctx->pc = 0x31529Cu;
    // 0x31529c: 0x0  nop
    ctx->pc = 0x31529cu;
    // NOP
label_3152a0:
    // 0x3152a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3152a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3152a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3152A4u;
    {
        const bool branch_taken_0x3152a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3152A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152A4u;
        // 0x3152a8: 0xafa6003c  sw          $a2, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152a4) {
            ctx->pc = 0x3152B8u;
            goto label_3152b8;
        }
    }
    ctx->pc = 0x3152ACu;
    // 0x3152ac: 0x0  nop
    ctx->pc = 0x3152acu;
    // NOP
label_3152b0:
    // 0x3152b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3152b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3152b4: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x3152b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
label_3152b8:
    // 0x3152b8: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x3152b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_3152bc:
    // 0x3152bc: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x3152bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x3152c0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x3152c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3152c4: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x3152c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x3152c8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3152c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x3152cc: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x3152ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3152d0: 0x73cf8  dsll        $a3, $a3, 19
    ctx->pc = 0x3152d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 19);
    // 0x3152d4: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x3152d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3152d8: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x3152d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3152dc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3152dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3152e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3152e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3152e4: 0xc53b8  dsll        $t2, $t4, 14
    ctx->pc = 0x3152e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) << 14);
    // 0x3152e8: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x3152e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x3152ec: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x3152ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3152f0: 0xd1bb8  dsll        $v1, $t5, 14
    ctx->pc = 0x3152f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << 14);
    // 0x3152f4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3152f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3152f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3152f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3152fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3152fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x315300: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x315300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x315304: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x315304u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x315308: 0x83fb8  dsll        $a3, $t0, 30
    ctx->pc = 0x315308u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 30);
    // 0x31530c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x31530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x315310: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x315310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x315314: 0x8e480078  lw          $t0, 0x78($s2)
    ctx->pc = 0x315314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x315318: 0x94eb8  dsll        $t1, $t1, 26
    ctx->pc = 0x315318u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 26);
    // 0x31531c: 0xe37b8  dsll        $a2, $t6, 30
    ctx->pc = 0x31531cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) << 30);
    // 0x315320: 0xb5eb8  dsll        $t3, $t3, 26
    ctx->pc = 0x315320u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 26);
    // 0x315324: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x315324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x315328: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x315328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x31532c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31532cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x315330: 0xf1940  sll         $v1, $t7, 5
    ctx->pc = 0x315330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 5));
    // 0x315334: 0x92490058  lbu         $t1, 0x58($s2)
    ctx->pc = 0x315334u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x315338: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x315338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x31533c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x31533cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x315340: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x315340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x315344: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x315344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x315348: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x315348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31534c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x31534cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x315350: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x315350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x315354: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x315354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x315358: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x315358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x31535c: 0x3407ff00  ori         $a3, $zero, 0xFF00
    ctx->pc = 0x31535cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x315360: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x315360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x315364: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x315364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x315368: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x315368u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x31536c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x31536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x315370: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x315370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x315374: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x315374u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x315378: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x315378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x31537c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x31537cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x315380: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x315380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x315384: 0xffa20058  sd          $v0, 0x58($sp)
    ctx->pc = 0x315384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 2));
    // 0x315388: 0xffa50040  sd          $a1, 0x40($sp)
    ctx->pc = 0x315388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 5));
    // 0x31538c: 0xffad0050  sd          $t5, 0x50($sp)
    ctx->pc = 0x31538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 13));
    // 0x315390: 0xffa40048  sd          $a0, 0x48($sp)
    ctx->pc = 0x315390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 4));
    // 0x315394: 0xffa90060  sd          $t1, 0x60($sp)
    ctx->pc = 0x315394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 9));
    // 0x315398: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x315398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x31539c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x31539cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x3153a0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x3153a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x3153a4: 0x0  nop
    ctx->pc = 0x3153a4u;
    // NOP
label_3153a8:
    // 0x3153a8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x3153a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3153ac: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x3153acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3153b0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3153b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3153b4: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x3153b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3153b8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3153b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3153bc: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3153bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3153c0: 0xdfa60060  ld          $a2, 0x60($sp)
    ctx->pc = 0x3153c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3153c4: 0xfd470008  sd          $a3, 0x8($t2)
    ctx->pc = 0x3153c4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 7));
    // 0x3153c8: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x3153c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3153cc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3153ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3153d0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x3153d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3153d4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x3153d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3153d8: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3153d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3153dc: 0xdfa60040  ld          $a2, 0x40($sp)
    ctx->pc = 0x3153dcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3153e0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3153e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3153e4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x3153e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3153e8: 0xa00013  mtlo        $a1
    ctx->pc = 0x3153e8u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x3153ec: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3153ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3153f0: 0xfd460000  sd          $a2, 0x0($t2)
    ctx->pc = 0x3153f0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 6));
    // 0x3153f4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3153f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3153f8: 0x70a21000  madd        $v0, $a1, $v0
    ctx->pc = 0x3153f8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3153fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3153fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x315400: 0xdfa70048  ld          $a3, 0x48($sp)
    ctx->pc = 0x315400u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x315404: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x315404u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x315408: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x315408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x31540c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x31540cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x315410: 0xfd470000  sd          $a3, 0x0($t2)
    ctx->pc = 0x315410u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 7));
    // 0x315414: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315418: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x315418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31541c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x315420: 0xdfa70050  ld          $a3, 0x50($sp)
    ctx->pc = 0x315420u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x315424: 0x8cca0008  lw          $t2, 0x8($a2)
    ctx->pc = 0x315424u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x315428: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x315428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x31542c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x31542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x315430: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x315430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x315434: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315438: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x315438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x31543c: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x31543cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315440: 0xfd460008  sd          $a2, 0x8($t2)
    ctx->pc = 0x315440u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 6));
    // 0x315444: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315448: 0xfd470008  sd          $a3, 0x8($t2)
    ctx->pc = 0x315448u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 7));
    // 0x31544c: 0xdfa20058  ld          $v0, 0x58($sp)
    ctx->pc = 0x31544cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315450: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315450u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315454: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315454u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315458: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x315458u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x31545c: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x31545cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x315460: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x315460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x315464: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x315464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315468: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x315468u;
    {
        const bool branch_taken_0x315468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315468u;
        // 0x31546c: 0x8c6a000c  lw          $t2, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315468) {
            ctx->pc = 0x315484u;
            goto label_315484;
        }
    }
    ctx->pc = 0x315470u;
    // 0x315470: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x315470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315474: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x315474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x315478: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x315478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31547c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x315480: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x315480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_315484:
    // 0x315484: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x315484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x315488: 0x10e000fc  beqz        $a3, . + 4 + (0xFC << 2)
    ctx->pc = 0x315488u;
    {
        const bool branch_taken_0x315488 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x31548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315488u;
        // 0x31548c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315488) {
            ctx->pc = 0x31587Cu;
            goto label_31587c;
        }
    }
    ctx->pc = 0x315490u;
    // 0x315490: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x315490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x315494: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x315494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x315498: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x315498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31549c: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x31549cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x3154a0: 0xafb300a0  sw          $s3, 0xA0($sp)
    ctx->pc = 0x3154a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 19));
    // 0x3154a4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x3154a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3154a8:
    // 0x3154a8: 0x10a000ed  beqz        $a1, . + 4 + (0xED << 2)
    ctx->pc = 0x3154A8u;
    {
        const bool branch_taken_0x3154a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3154ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154A8u;
        // 0x3154ac: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3154a8) {
            ctx->pc = 0x315860u;
            goto label_315860;
        }
    }
    ctx->pc = 0x3154B0u;
    // 0x3154b0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3154b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3154b4: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x3154b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3154b8: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x3154b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3154bc: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x3154bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
    // 0x3154c0: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x3154c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3154c4: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x3154c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3154c8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x3154c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3154cc: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3154ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3154d0: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x3154d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3154d4: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x3154d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x3154d8: 0x941804  sllv        $v1, $s4, $a0
    ctx->pc = 0x3154d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
    // 0x3154dc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x3154dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3154e0: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x3154e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3154e4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3154e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3154e8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3154e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3154ec: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x3154ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x3154f0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x3154f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3154f4: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x3154f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x3154f8: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x3154f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x3154fc: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x3154fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x315500: 0x745821  addu        $t3, $v1, $s4
    ctx->pc = 0x315500u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x315504: 0x0  nop
    ctx->pc = 0x315504u;
    // NOP
label_315508:
    // 0x315508: 0xab1018  mult        $v0, $a1, $t3
    ctx->pc = 0x315508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31550c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x31550cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x315510: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x315510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x315514: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x315514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x315518: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x315518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x31551c: 0x4f1821  addu        $v1, $v0, $t7
    ctx->pc = 0x31551cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x315520: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x315520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315528: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x315528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31552c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31552Cu;
    {
        const bool branch_taken_0x31552c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31552Cu;
        // 0x315530: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31552c) {
            ctx->pc = 0x315560u;
            goto label_315560;
        }
    }
    ctx->pc = 0x315534u;
    // 0x315534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x315534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315538: 0x25ed0001  addiu       $t5, $t7, 0x1
    ctx->pc = 0x315538u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x31553c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x31553cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x315540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315544: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x315544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x315548: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x315548u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31554c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x31554cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315550: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x315550u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315554: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x315554u;
    {
        const bool branch_taken_0x315554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315554u;
        // 0x315558: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315554) {
            ctx->pc = 0x31572Cu;
            goto label_31572c;
        }
    }
    ctx->pc = 0x31555Cu;
    // 0x31555c: 0x0  nop
    ctx->pc = 0x31555cu;
    // NOP
label_315560:
    // 0x315560: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x315560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315564: 0x25ed0001  addiu       $t5, $t7, 0x1
    ctx->pc = 0x315564u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x315568: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x315568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31556c: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x31556cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315570: 0x1e21018  mult        $v0, $t7, $v0
    ctx->pc = 0x315570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x315574: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x315574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x315578: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x315578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31557c: 0x657018  mult        $t6, $v1, $a1
    ctx->pc = 0x31557cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x315580: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x315580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x315584: 0xcf4804  sllv        $t1, $t7, $a2
    ctx->pc = 0x315584u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x315588: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x315588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31558c: 0x4b2021  addu        $a0, $v0, $t3
    ctx->pc = 0x31558cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x315590: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x315590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315594: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x315594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x315598: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x315598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31559c: 0x1a21018  mult        $v0, $t5, $v0
    ctx->pc = 0x31559cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3155a0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3155a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3155a4: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x3155a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3155a8: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x3155a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3155ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3155acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3155b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3155b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3155b4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3155b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x3155b8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3155b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3155bc: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x3155bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3155c0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3155c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3155c4: 0x84700000  lh          $s0, 0x0($v1)
    ctx->pc = 0x3155c4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3155c8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3155c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3155cc: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x3155ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3155d0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3155d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3155d4: 0x846c0000  lh          $t4, 0x0($v1)
    ctx->pc = 0x3155d4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3155d8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3155d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3155dc: 0x84910002  lh          $s1, 0x2($a0)
    ctx->pc = 0x3155dcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3155e0: 0x84680002  lh          $t0, 0x2($v1)
    ctx->pc = 0x3155e0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3155e4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x3155e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3155e8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x3155E8u;
    {
        const bool branch_taken_0x3155e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3155ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3155E8u;
        // 0x3155ec: 0x84790000  lh          $t9, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3155e8) {
            ctx->pc = 0x3155FCu;
            goto label_3155fc;
        }
    }
    ctx->pc = 0x3155F0u;
    // 0x3155f0: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x3155f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3155f4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3155f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3155f8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3155f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_3155fc:
    // 0x3155fc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3155fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x315600: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x315600u;
    {
        const bool branch_taken_0x315600 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x315604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315600u;
        // 0x315604: 0x2b900  sll         $s7, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315600) {
            ctx->pc = 0x315618u;
            goto label_315618;
        }
    }
    ctx->pc = 0x315608u;
    // 0x315608: 0x28e7021  addu        $t6, $s4, $t6
    ctx->pc = 0x315608u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 14)));
    // 0x31560c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31560Cu;
    {
        const bool branch_taken_0x31560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31560Cu;
        // 0x315610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31560c) {
            ctx->pc = 0x31562Cu;
            goto label_31562c;
        }
    }
    ctx->pc = 0x315614u;
    // 0x315614: 0x0  nop
    ctx->pc = 0x315614u;
    // NOP
label_315618:
    // 0x315618: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x315618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x31561c: 0x28e7021  addu        $t6, $s4, $t6
    ctx->pc = 0x31561cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 14)));
    // 0x315620: 0x6e1004  sllv        $v0, $t6, $v1
    ctx->pc = 0x315620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 3) & 0x1F));
    // 0x315624: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x315624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x315628: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x315628u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_31562c:
    // 0x31562c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x31562cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315630: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x315630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x315634: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x315634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x315638: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x315638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31563c: 0x2458ffff  addiu       $t8, $v0, -0x1
    ctx->pc = 0x31563cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x315640: 0x3b100  sll         $s6, $v1, 4
    ctx->pc = 0x315640u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x315644: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x315644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x315648: 0x11f80003  beq         $t7, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x315648u;
    {
        const bool branch_taken_0x315648 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 24));
        ctx->pc = 0x31564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315648u;
        // 0x31564c: 0x2a900  sll         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315648) {
            ctx->pc = 0x315658u;
            goto label_315658;
        }
    }
    ctx->pc = 0x315650u;
    // 0x315650: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x315650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x315654: 0x59b023  subu        $s6, $v0, $t9
    ctx->pc = 0x315654u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
label_315658:
    // 0x315658: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x315658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31565c: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x31565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x315660: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x315660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x315664: 0x15620006  bne         $t3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x315664u;
    {
        const bool branch_taken_0x315664 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x315668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315664u;
        // 0x315668: 0x33100  sll         $a2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315664) {
            ctx->pc = 0x315680u;
            goto label_315680;
        }
    }
    ctx->pc = 0x31566Cu;
    // 0x31566c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x31566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x315670: 0x25c20001  addiu       $v0, $t6, 0x1
    ctx->pc = 0x315670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x315674: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x315674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x315678: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x315678u;
    {
        const bool branch_taken_0x315678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315678u;
        // 0x31567c: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315678) {
            ctx->pc = 0x315694u;
            goto label_315694;
        }
    }
    ctx->pc = 0x315680u;
label_315680:
    // 0x315680: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x315680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x315684: 0x25c20001  addiu       $v0, $t6, 0x1
    ctx->pc = 0x315684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x315688: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x315688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x31568c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31568cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x315690: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x315690u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_315694:
    // 0x315694: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x315694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x315698: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x315698u;
    {
        const bool branch_taken_0x315698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315698u;
        // 0x31569c: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315698) {
            ctx->pc = 0x315730u;
            goto label_315730;
        }
    }
    ctx->pc = 0x3156A0u;
    // 0x3156a0: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3156A0u;
    {
        const bool branch_taken_0x3156a0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3156A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156A0u;
        // 0x3156a4: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156a0) {
            ctx->pc = 0x3156BCu;
            goto label_3156bc;
        }
    }
    ctx->pc = 0x3156A8u;
    // 0x3156a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x3156a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3156ac: 0x6e1004  sllv        $v0, $t6, $v1
    ctx->pc = 0x3156acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 3) & 0x1F));
    // 0x3156b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3156b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3156b4: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x3156b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3156b8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x3156b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_3156bc:
    // 0x3156bc: 0x15f80004  bne         $t7, $t8, . + 4 + (0x4 << 2)
    ctx->pc = 0x3156BCu;
    {
        const bool branch_taken_0x3156bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 24));
        ctx->pc = 0x3156C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156BCu;
        // 0x3156c0: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156bc) {
            ctx->pc = 0x3156D0u;
            goto label_3156d0;
        }
    }
    ctx->pc = 0x3156C4u;
    // 0x3156c4: 0x671004  sllv        $v0, $a3, $v1
    ctx->pc = 0x3156c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x3156c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3156C8u;
    {
        const bool branch_taken_0x3156c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3156CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156C8u;
        // 0x3156cc: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156c8) {
            ctx->pc = 0x3156DCu;
            goto label_3156dc;
        }
    }
    ctx->pc = 0x3156D0u;
label_3156d0:
    // 0x3156d0: 0x671004  sllv        $v0, $a3, $v1
    ctx->pc = 0x3156d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x3156d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3156d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3156d8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3156d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3156dc:
    // 0x3156dc: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3156dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x3156e0: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x3156e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3156e4: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x3156e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3156e8: 0x15620007  bne         $t3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3156E8u;
    {
        const bool branch_taken_0x3156e8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x3156ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156E8u;
        // 0x3156ec: 0x8fa7003c  lw          $a3, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156e8) {
            ctx->pc = 0x315708u;
            goto label_315708;
        }
    }
    ctx->pc = 0x3156F0u;
    // 0x3156f0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x3156f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3156f4: 0x25c20001  addiu       $v0, $t6, 0x1
    ctx->pc = 0x3156f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x3156f8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3156f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3156fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3156FCu;
    {
        const bool branch_taken_0x3156fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156FCu;
        // 0x315700: 0x2f100  sll         $fp, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156fc) {
            ctx->pc = 0x315718u;
            goto label_315718;
        }
    }
    ctx->pc = 0x315704u;
    // 0x315704: 0x0  nop
    ctx->pc = 0x315704u;
    // NOP
label_315708:
    // 0x315708: 0x25c20001  addiu       $v0, $t6, 0x1
    ctx->pc = 0x315708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x31570c: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x31570cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x315710: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x315710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x315714: 0x51f023  subu        $fp, $v0, $s1
    ctx->pc = 0x315714u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_315718:
    // 0x315718: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x315718u;
    {
        const bool branch_taken_0x315718 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x31571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315718u;
        // 0x31571c: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315718) {
            ctx->pc = 0x31572Cu;
            goto label_31572c;
        }
    }
    ctx->pc = 0x315720u;
    // 0x315720: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x315720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x315724: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x315724u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x315728: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x315728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_31572c:
    // 0x31572c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31572cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_315730:
    // 0x315730: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x315730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x315734: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x315734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x315738: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x315738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31573c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x31573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x315740: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x315740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x315744: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x315744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x315748: 0x17283c  dsll32      $a1, $s7, 0
    ctx->pc = 0x315748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) << (32 + 0));
    // 0x31574c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31574cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315750: 0x3c03e  dsrl32      $t8, $v1, 0
    ctx->pc = 0x315750u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x315754: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x315754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x315758: 0x5cc3a  dsrl        $t9, $a1, 16
    ctx->pc = 0x315758u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 5) >> 16);
    // 0x31575c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x315760: 0x3191825  or          $v1, $t8, $t9
    ctx->pc = 0x315760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) | GPR_U64(ctx, 25));
    // 0x315764: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315764u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315768: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x315768u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x31576c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x31576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x315770: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x315770u;
    {
        const bool branch_taken_0x315770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315770u;
        // 0x315774: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315770) {
            ctx->pc = 0x315808u;
            goto label_315808;
        }
    }
    ctx->pc = 0x315778u;
    // 0x315778: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x315778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31577c: 0x6783c  dsll32      $t7, $a2, 0
    ctx->pc = 0x31577cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) << (32 + 0));
    // 0x315780: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x315780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x315784: 0x27c20008  addiu       $v0, $fp, 0x8
    ctx->pc = 0x315784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x315788: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x315788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x31578c: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x31578cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x315790: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x315790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x315794: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x315794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x315798: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x315798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x31579c: 0xf343a  dsrl        $a2, $t7, 16
    ctx->pc = 0x31579cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) >> 16);
    // 0x3157a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3157a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3157a4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3157a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3157a8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x3157a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x3157ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3157acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3157b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3157b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3157b4: 0x15703c  dsll32      $t6, $s5, 0
    ctx->pc = 0x3157b4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 21) << (32 + 0));
    // 0x3157b8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3157b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3157bc: 0xe103e  dsrl32      $v0, $t6, 0
    ctx->pc = 0x3157bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x3157c0: 0x3063025  or          $a2, $t8, $a2
    ctx->pc = 0x3157c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 24) | GPR_U64(ctx, 6));
    // 0x3157c4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3157c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3157c8: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x3157c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x3157cc: 0xfd450000  sd          $a1, 0x0($t2)
    ctx->pc = 0x3157ccu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 5));
    // 0x3157d0: 0xfd460008  sd          $a2, 0x8($t2)
    ctx->pc = 0x3157d0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 6));
    // 0x3157d4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3157d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3157d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3157d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3157dc: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x3157dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x3157e0: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x3157e0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x3157e4: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x3157e4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x3157e8: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3157e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3157ec: 0xfd450000  sd          $a1, 0x0($t2)
    ctx->pc = 0x3157ecu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 5));
    // 0x3157f0: 0xfd460008  sd          $a2, 0x8($t2)
    ctx->pc = 0x3157f0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 6));
    // 0x3157f4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3157f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3157f8: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x3157f8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x3157fc: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x3157fcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x315800: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315800u;
    {
        const bool branch_taken_0x315800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315800u;
        // 0x315804: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315800) {
            ctx->pc = 0x315810u;
            goto label_315810;
        }
    }
    ctx->pc = 0x315808u;
label_315808:
    // 0x315808: 0x6783c  dsll32      $t7, $a2, 0
    ctx->pc = 0x315808u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31580c: 0x15703c  dsll32      $t6, $s5, 0
    ctx->pc = 0x31580cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 21) << (32 + 0));
label_315810:
    // 0x315810: 0x26c20008  addiu       $v0, $s6, 0x8
    ctx->pc = 0x315810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x315814: 0x25030008  addiu       $v1, $t0, 0x8
    ctx->pc = 0x315814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x315818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31581c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31581cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x315820: 0xf2c3a  dsrl        $a1, $t7, 16
    ctx->pc = 0x315820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) >> 16);
    // 0x315824: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x315824u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315828: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x315828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x31582c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x315830: 0xe203e  dsrl32      $a0, $t6, 0
    ctx->pc = 0x315830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x315834: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x315834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x315838: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x315838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x31583c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31583cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315840: 0x1f3182b  sltu        $v1, $t7, $s3
    ctx->pc = 0x315840u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x315844: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315844u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315848: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x315848u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x31584c: 0x1460ff2e  bnez        $v1, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x31584Cu;
    {
        const bool branch_taken_0x31584c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31584Cu;
        // 0x315850: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31584c) {
            ctx->pc = 0x315508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315508;
        }
    }
    ctx->pc = 0x315854u;
    // 0x315854: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x315854u;
    {
        const bool branch_taken_0x315854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315854u;
        // 0x315858: 0x8fb400a4  lw          $s4, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315854) {
            ctx->pc = 0x31586Cu;
            goto label_31586c;
        }
    }
    ctx->pc = 0x31585Cu;
    // 0x31585c: 0x0  nop
    ctx->pc = 0x31585cu;
    // NOP
label_315860:
    // 0x315860: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x315860u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x315864: 0xafb400a4  sw          $s4, 0xA4($sp)
    ctx->pc = 0x315864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 20));
    // 0x315868: 0x8fb400a4  lw          $s4, 0xA4($sp)
    ctx->pc = 0x315868u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_31586c:
    // 0x31586c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x31586cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x315870: 0x287102b  sltu        $v0, $s4, $a3
    ctx->pc = 0x315870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x315874: 0x1440ff0c  bnez        $v0, . + 4 + (-0xF4 << 2)
    ctx->pc = 0x315874u;
    {
        const bool branch_taken_0x315874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315874u;
        // 0x315878: 0x8fa500a0  lw          $a1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315874) {
            ctx->pc = 0x3154A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3154a8;
        }
    }
    ctx->pc = 0x31587Cu;
label_31587c:
    // 0x31587c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x31587cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x315880: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x315880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x315884: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x315884u;
    {
        const bool branch_taken_0x315884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315884u;
        // 0x315888: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315884) {
            ctx->pc = 0x315928u;
            goto label_315928;
        }
    }
    ctx->pc = 0x31588Cu;
    // 0x31588c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x31588cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x315890: 0x2493ffff  addiu       $s3, $a0, -0x1
    ctx->pc = 0x315890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x315894: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x315894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315898:
    // 0x315898: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x315898u;
    {
        const bool branch_taken_0x315898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315898u;
        // 0x31589c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315898) {
            ctx->pc = 0x3158C4u;
            goto label_3158c4;
        }
    }
    ctx->pc = 0x3158A0u;
label_3158a0:
    // 0x3158a0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x3158a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x3158a4: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x3158a4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
    // 0x3158a8: 0xfd400008  sd          $zero, 0x8($t2)
    ctx->pc = 0x3158a8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 0));
    // 0x3158ac: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3158acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3158b0: 0x1f3102b  sltu        $v0, $t7, $s3
    ctx->pc = 0x3158b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3158b4: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x3158b4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
    // 0x3158b8: 0xfd400008  sd          $zero, 0x8($t2)
    ctx->pc = 0x3158b8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 0));
    // 0x3158bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3158BCu;
    {
        const bool branch_taken_0x3158bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3158C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158BCu;
        // 0x3158c0: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158bc) {
            ctx->pc = 0x3158A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3158a0;
        }
    }
    ctx->pc = 0x3158C4u;
label_3158c4:
    // 0x3158c4: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x3158c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x3158c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3158C8u;
    {
        const bool branch_taken_0x3158c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3158CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158C8u;
        // 0x3158cc: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158c8) {
            ctx->pc = 0x315918u;
            goto label_315918;
        }
    }
    ctx->pc = 0x3158D0u;
    // 0x3158d0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3158D0u;
    {
        const bool branch_taken_0x3158d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3158D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158D0u;
        // 0x3158d4: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158d0) {
            ctx->pc = 0x315918u;
            goto label_315918;
        }
    }
    ctx->pc = 0x3158D8u;
label_3158d8:
    // 0x3158d8: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x3158d8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
    // 0x3158dc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x3158dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x3158e0: 0xfd400008  sd          $zero, 0x8($t2)
    ctx->pc = 0x3158e0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 0));
    // 0x3158e4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3158e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3158e8: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x3158e8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
    // 0x3158ec: 0x1f3102b  sltu        $v0, $t7, $s3
    ctx->pc = 0x3158ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3158f0: 0xfd400008  sd          $zero, 0x8($t2)
    ctx->pc = 0x3158f0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 0));
    // 0x3158f4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3158f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3158f8: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x3158f8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
    // 0x3158fc: 0xfd400008  sd          $zero, 0x8($t2)
    ctx->pc = 0x3158fcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 0));
    // 0x315900: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315900u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315904: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x315904u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
    // 0x315908: 0xfd400008  sd          $zero, 0x8($t2)
    ctx->pc = 0x315908u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 0));
    // 0x31590c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x31590Cu;
    {
        const bool branch_taken_0x31590c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31590Cu;
        // 0x315910: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31590c) {
            ctx->pc = 0x3158D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3158d8;
        }
    }
    ctx->pc = 0x315914u;
    // 0x315914: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x315914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_315918:
    // 0x315918: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x315918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31591c: 0x285102b  sltu        $v0, $s4, $a1
    ctx->pc = 0x31591cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x315920: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x315920u;
    {
        const bool branch_taken_0x315920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315920u;
        // 0x315924: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315920) {
            ctx->pc = 0x315898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315898;
        }
    }
    ctx->pc = 0x315928u;
label_315928:
    // 0x315928: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x315928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x31592c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x31592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x315930: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x315930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x315934: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x315934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x315938: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x315938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31593c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x31593cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x315940: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x315940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x315944: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x315944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x315948: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x315948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31594c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x31594cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x315950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315954: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x315954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
    // 0x315958: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x315958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x31595c: 0x1440fe92  bnez        $v0, . + 4 + (-0x16E << 2)
    ctx->pc = 0x31595Cu;
    {
        const bool branch_taken_0x31595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31595Cu;
        // 0x315960: 0xafa500b0  sw          $a1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31595c) {
            ctx->pc = 0x3153A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3153a8;
        }
    }
    ctx->pc = 0x315964u;
    // 0x315964: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x315964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x315968: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x315968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x31596c: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x31596cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x315970: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x315970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x315974: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x315974u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x315978: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x315978u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x31597c: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x31597cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x315980: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x315980u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x315984: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x315984u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x315988: 0x3e00008  jr          $ra
    ctx->pc = 0x315988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315988u;
        // 0x31598c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315990u;
}
