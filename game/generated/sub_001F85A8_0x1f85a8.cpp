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

// Function: sub_001F85A8
// Address: 0x1f85a8 - 0x1f8850
void sub_001F85A8_0x1f85a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F85A8_0x1f85a8");
#endif

    switch (ctx->pc) {
        case 0x1f8654u: goto label_1f8654;
        case 0x1f86acu: goto label_1f86ac;
        case 0x1f86bcu: goto label_1f86bc;
        case 0x1f87e8u: goto label_1f87e8;
        default: break;
    }

    ctx->pc = 0x1f85a8u;

    // 0x1f85a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f85a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f85ac: 0x8f87c898  lw          $a3, -0x3768($gp)
    ctx->pc = 0x1f85acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953112)));
    // 0x1f85b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f85b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f85b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f85b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f85b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f85b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f85bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f85bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f85c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f85c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f85c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f85c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f85c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f85cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1f85ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f85d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f85d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f85d4: 0x922301bb  lbu         $v1, 0x1BB($s1)
    ctx->pc = 0x1f85d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 443)));
    // 0x1f85d8: 0x10c2001a  beq         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F85D8u;
    {
        const bool branch_taken_0x1f85d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85D8u;
        // 0x1f85dc: 0x243200a  movz        $a0, $s2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85d8) {
            ctx->pc = 0x1F8644u;
            goto label_1f8644;
        }
    }
    ctx->pc = 0x1F85E0u;
    // 0x1f85e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f85e4: 0x14c20017  bne         $a2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F85E4u;
    {
        const bool branch_taken_0x1f85e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85E4u;
        // 0x1f85e8: 0x24034eef  addiu       $v1, $zero, 0x4EEF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20207));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85e4) {
            ctx->pc = 0x1F8644u;
            goto label_1f8644;
        }
    }
    ctx->pc = 0x1F85ECu;
    // 0x1f85ec: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x1f85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1f85f0: 0x9444001c  lhu         $a0, 0x1C($v0)
    ctx->pc = 0x1f85f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1f85f4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F85F4u;
    {
        const bool branch_taken_0x1f85f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85F4u;
        // 0x1f85f8: 0x28824ef0  slti        $v0, $a0, 0x4EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20208) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85f4) {
            ctx->pc = 0x1F8620u;
            goto label_1f8620;
        }
    }
    ctx->pc = 0x1F85FCu;
    // 0x1f85fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F85FCu;
    {
        const bool branch_taken_0x1f85fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85FCu;
        // 0x1f8600: 0x3402fa6e  ori         $v0, $zero, 0xFA6E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64110);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85fc) {
            ctx->pc = 0x1F8618u;
            goto label_1f8618;
        }
    }
    ctx->pc = 0x1F8604u;
    // 0x1f8604: 0x240227e2  addiu       $v0, $zero, 0x27E2
    ctx->pc = 0x1f8604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10210));
    // 0x1f8608: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8608u;
    {
        const bool branch_taken_0x1f8608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8608u;
        // 0x1f860c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8608) {
            ctx->pc = 0x1F8624u;
            goto label_1f8624;
        }
    }
    ctx->pc = 0x1F8610u;
    // 0x1f8610: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F8610u;
    {
        const bool branch_taken_0x1f8610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8610) {
            ctx->pc = 0x1F8644u;
            goto label_1f8644;
        }
    }
    ctx->pc = 0x1F8618u;
label_1f8618:
    // 0x1f8618: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8618u;
    {
        const bool branch_taken_0x1f8618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f8618) {
            ctx->pc = 0x1F8644u;
            goto label_1f8644;
        }
    }
    ctx->pc = 0x1F8620u;
label_1f8620:
    // 0x1f8620: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f8620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1f8624:
    // 0x1f8624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f8624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8628: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1f8628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x1f862c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F862Cu;
    {
        const bool branch_taken_0x1f862c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F862Cu;
        // 0x1f8630: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f862c) {
            ctx->pc = 0x1F8644u;
            goto label_1f8644;
        }
    }
    ctx->pc = 0x1F8634u;
    // 0x1f8634: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8634u;
    {
        const bool branch_taken_0x1f8634 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f8634) {
            ctx->pc = 0x1F8644u;
            goto label_1f8644;
        }
    }
    ctx->pc = 0x1F863Cu;
    // 0x1f863c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f863cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8640: 0xaf87c898  sw          $a3, -0x3768($gp)
    ctx->pc = 0x1f8640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953112), GPR_U32(ctx, 7));
label_1f8644:
    // 0x1f8644: 0x10a7007b  beq         $a1, $a3, . + 4 + (0x7B << 2)
    ctx->pc = 0x1F8644u;
    {
        const bool branch_taken_0x1f8644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x1F8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8644u;
        // 0x1f8648: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8644) {
            ctx->pc = 0x1F8834u;
            goto label_1f8834;
        }
    }
    ctx->pc = 0x1F864Cu;
    // 0x1f864c: 0xc091726  jal         func_245C98
    ctx->pc = 0x1F864Cu;
    SET_GPR_U32(ctx, 31, 0x1F8654u);
    ctx->pc = 0x1F8650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F864Cu;
    // 0x1f8650: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x1F864Cu, 0x1F8654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8654u;
label_1f8654:
    // 0x1f8654: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f8654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8658: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F8658u;
    {
        const bool branch_taken_0x1f8658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8658u;
        // 0x1f865c: 0x8f82c898  lw          $v0, -0x3768($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8658) {
            ctx->pc = 0x1F8698u;
            goto label_1f8698;
        }
    }
    ctx->pc = 0x1F8660u;
    // 0x1f8660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8664: 0xaf80c898  sw          $zero, -0x3768($gp)
    ctx->pc = 0x1f8664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953112), GPR_U32(ctx, 0));
    // 0x1f8668: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f8668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1f866c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f866cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f8670: 0xa620007a  sh          $zero, 0x7A($s1)
    ctx->pc = 0x1f8670u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f8674: 0xa620000e  sh          $zero, 0xE($s1)
    ctx->pc = 0x1f8674u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f8678: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1f8678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1f867c: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1f867cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1f8680: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f8680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f8684: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1f8684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f8688: 0xa640007a  sh          $zero, 0x7A($s2)
    ctx->pc = 0x1f8688u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f868c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1F868Cu;
    {
        const bool branch_taken_0x1f868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F868Cu;
        // 0x1f8690: 0xa640000e  sh          $zero, 0xE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f868c) {
            ctx->pc = 0x1F87E0u;
            goto label_1f87e0;
        }
    }
    ctx->pc = 0x1F8694u;
    // 0x1f8694: 0x0  nop
    ctx->pc = 0x1f8694u;
    // NOP
label_1f8698:
    // 0x1f8698: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f8698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f869c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1f869cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f86a0: 0x8010  mfhi        $s0
    ctx->pc = 0x1f86a0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1f86a4: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F86A4u;
    SET_GPR_U32(ctx, 31, 0x1F86ACu);
    ctx->pc = 0x1F86A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F86A4u;
    // 0x1f86a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F86A4u, 0x1F86ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86ACu;
label_1f86ac:
    // 0x1f86ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f86acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f86b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f86b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86b4: 0xc0917c0  jal         func_245F00
    ctx->pc = 0x1F86B4u;
    SET_GPR_U32(ctx, 31, 0x1F86BCu);
    ctx->pc = 0x1F86B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F86B4u;
    // 0x1f86b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F00u, 0x1F86B4u, 0x1F86BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86BCu;
label_1f86bc:
    // 0x1f86bc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1f86bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f86c0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1f86c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f86c4: 0xc78181c0  lwc1        $f1, -0x7E40($gp)
    ctx->pc = 0x1f86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f86c8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f86c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f86cc: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x1f86ccu;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x1f86d0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1f86d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f86d4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1f86d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f86d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F86D8u;
    {
        const bool branch_taken_0x1f86d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86D8u;
        // 0x1f86dc: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86d8) {
            ctx->pc = 0x1F86F0u;
            goto label_1f86f0;
        }
    }
    ctx->pc = 0x1F86E0u;
    // 0x1f86e0: 0xc78081c4  lwc1        $f0, -0x7E3C($gp)
    ctx->pc = 0x1f86e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f86e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F86E4u;
    {
        const bool branch_taken_0x1f86e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86E4u;
        // 0x1f86e8: 0x46001881  sub.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86e4) {
            ctx->pc = 0x1F8708u;
            goto label_1f8708;
        }
    }
    ctx->pc = 0x1F86ECu;
    // 0x1f86ec: 0x0  nop
    ctx->pc = 0x1f86ecu;
    // NOP
label_1f86f0:
    // 0x1f86f0: 0xc78081c8  lwc1        $f0, -0x7E38($gp)
    ctx->pc = 0x1f86f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f86f4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1f86f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f86f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F86F8u;
    {
        const bool branch_taken_0x1f86f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f86f8) {
            ctx->pc = 0x1F8708u;
            goto label_1f8708;
        }
    }
    ctx->pc = 0x1F8700u;
    // 0x1f8700: 0xc78081cc  lwc1        $f0, -0x7E34($gp)
    ctx->pc = 0x1f8700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8704: 0x46001880  add.s       $f2, $f3, $f0
    ctx->pc = 0x1f8704u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1f8708:
    // 0x1f8708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f870c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f870cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8710: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8710u;
    {
        const bool branch_taken_0x1f8710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8710) {
            ctx->pc = 0x1F8720u;
            goto label_1f8720;
        }
    }
    ctx->pc = 0x1F8718u;
    // 0x1f8718: 0xc78081d0  lwc1        $f0, -0x7E30($gp)
    ctx->pc = 0x1f8718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f871c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f871cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f8720:
    // 0x1f8720: 0xc78181d4  lwc1        $f1, -0x7E2C($gp)
    ctx->pc = 0x1f8720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8724: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x1f8724u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x1f8728: 0xc78581d8  lwc1        $f5, -0x7E28($gp)
    ctx->pc = 0x1f8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f872c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1f872cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f8730: 0xc78081dc  lwc1        $f0, -0x7E24($gp)
    ctx->pc = 0x1f8730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8734: 0xe6230020  swc1        $f3, 0x20($s1)
    ctx->pc = 0x1f8734u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1f8738: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1f8738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f873c: 0x0  nop
    ctx->pc = 0x1f873cu;
    // NOP
    // 0x1f8740: 0x0  nop
    ctx->pc = 0x1f8740u;
    // NOP
    // 0x1f8744: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x1f8744u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x1f8748: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f8748u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f874c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f874cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f8750: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f8750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f8754: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f8754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f8758: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x1f8758u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f875c: 0xa622007a  sh          $v0, 0x7A($s1)
    ctx->pc = 0x1f875cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f8760: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1f8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8764: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1f8764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f8768: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1f8768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f876c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F876Cu;
    {
        const bool branch_taken_0x1f876c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F876Cu;
        // 0x1f8770: 0xe6410008  swc1        $f1, 0x8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f876c) {
            ctx->pc = 0x1F8780u;
            goto label_1f8780;
        }
    }
    ctx->pc = 0x1F8774u;
    // 0x1f8774: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8774u;
    {
        const bool branch_taken_0x1f8774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8774u;
        // 0x1f8778: 0x46051901  sub.s       $f4, $f3, $f5 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8774) {
            ctx->pc = 0x1F8790u;
            goto label_1f8790;
        }
    }
    ctx->pc = 0x1F877Cu;
    // 0x1f877c: 0x0  nop
    ctx->pc = 0x1f877cu;
    // NOP
label_1f8780:
    // 0x1f8780: 0xc78081e0  lwc1        $f0, -0x7E20($gp)
    ctx->pc = 0x1f8780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8784: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1f8784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8788: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8788u;
    {
        const bool branch_taken_0x1f8788 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8788) {
            ctx->pc = 0x1F878Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8788u;
            // 0x1f878c: 0x46051900  add.s       $f4, $f3, $f5 (Delay Slot)
            ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8790u;
            goto label_1f8790;
        }
    }
    ctx->pc = 0x1F8790u;
label_1f8790:
    // 0x1f8790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8794: 0x46002086  mov.s       $f2, $f4
    ctx->pc = 0x1f8794u;
    ctx->f[2] = FPU_MOV_S(ctx->f[4]);
    // 0x1f8798: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f8798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f879c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F879Cu;
    {
        const bool branch_taken_0x1f879c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f879c) {
            ctx->pc = 0x1F87ACu;
            goto label_1f87ac;
        }
    }
    ctx->pc = 0x1F87A4u;
    // 0x1f87a4: 0xc78081e4  lwc1        $f0, -0x7E1C($gp)
    ctx->pc = 0x1f87a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f87a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f87a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f87ac:
    // 0x1f87ac: 0xc78081e8  lwc1        $f0, -0x7E18($gp)
    ctx->pc = 0x1f87acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f87b0: 0xc78181ec  lwc1        $f1, -0x7E14($gp)
    ctx->pc = 0x1f87b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f87b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f87b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f87b8: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x1f87b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1f87bc: 0x0  nop
    ctx->pc = 0x1f87bcu;
    // NOP
    // 0x1f87c0: 0x0  nop
    ctx->pc = 0x1f87c0u;
    // NOP
    // 0x1f87c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f87c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f87c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f87c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f87cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f87ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f87d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f87d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f87d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f87d8: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x1f87d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f87dc: 0xa642007a  sh          $v0, 0x7A($s2)
    ctx->pc = 0x1f87dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
label_1f87e0:
    // 0x1f87e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f87e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f87e4: 0x0  nop
    ctx->pc = 0x1f87e4u;
    // NOP
label_1f87e8:
    // 0x1f87e8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1f87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1f87ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f87ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f87f0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f87f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f87f4: 0x244405d0  addiu       $a0, $v0, 0x5D0
    ctx->pc = 0x1f87f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1488));
    // 0x1f87f8: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x1f87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1f87fc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1f87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1f8800: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1f8800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1f8804: 0x28c30006  slti        $v1, $a2, 0x6
    ctx->pc = 0x1f8804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f8808: 0x244205d8  addiu       $v0, $v0, 0x5D8
    ctx->pc = 0x1f8808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1496));
    // 0x1f880c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1f880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8810: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1f8810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f8814: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f8814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f8818: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1f8818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1f881c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8820: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f8820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1f8824: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1f8824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8828: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F8828u;
    {
        const bool branch_taken_0x1f8828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8828u;
        // 0x1f882c: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8828) {
            ctx->pc = 0x1F87E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f87e8;
        }
    }
    ctx->pc = 0x1F8830u;
    // 0x1f8830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8834:
    // 0x1f8834: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f8834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8838: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f8838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f883c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f883cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8844: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8844u;
        // 0x1f8848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F884Cu;
    // 0x1f884c: 0x0  nop
    ctx->pc = 0x1f884cu;
    // NOP
    ctx->pc = 0x1f8850u;
}
