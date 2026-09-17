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

// Function: sub_002E0260
// Address: 0x2e0260 - 0x2e03c0
void sub_002E0260_0x2e0260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0260_0x2e0260");
#endif

    switch (ctx->pc) {
        case 0x2e02e0u: goto label_2e02e0;
        case 0x2e0338u: goto label_2e0338;
        case 0x2e0368u: goto label_2e0368;
        default: break;
    }

    ctx->pc = 0x2e0260u;

    // 0x2e0260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0264: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2e0264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2e0268: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e0268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e026c: 0x30f200ff  andi        $s2, $a3, 0xFF
    ctx->pc = 0x2e026cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2e0270: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e0270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e0274: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e0274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0278: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e0278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2e027c: 0x311600ff  andi        $s6, $t0, 0xFF
    ctx->pc = 0x2e027cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2e0280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0288: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e0288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e028c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e0290: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e0290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e0294: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2e0294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2e0298: 0x8275017b  lb          $s5, 0x17B($s3)
    ctx->pc = 0x2e0298u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 379)));
    // 0x2e029c: 0x2aa30031  slti        $v1, $s5, 0x31
    ctx->pc = 0x2e029cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x2e02a0: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2E02A0u;
    {
        const bool branch_taken_0x2e02a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02A0u;
        // 0x2e02a4: 0x9264017b  lbu         $a0, 0x17B($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 379)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02a0) {
            ctx->pc = 0x2E0394u;
            goto label_2e0394;
        }
    }
    ctx->pc = 0x2E02A8u;
    // 0x2e02a8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2e02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e02ac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2e02acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e02b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e02b4: 0xa263017b  sb          $v1, 0x17B($s3)
    ctx->pc = 0x2e02b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 379), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e02b8: 0xac450054  sw          $a1, 0x54($v0)
    ctx->pc = 0x2e02b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
    // 0x2e02bc: 0x9263017a  lbu         $v1, 0x17A($s3)
    ctx->pc = 0x2e02bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 378)));
    // 0x2e02c0: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x2e02c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e02c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E02C4u;
    {
        const bool branch_taken_0x2e02c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E02C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02C4u;
        // 0x2e02c8: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02c4) {
            ctx->pc = 0x2E02D8u;
            goto label_2e02d8;
        }
    }
    ctx->pc = 0x2E02CCu;
    // 0x2e02cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E02CCu;
    {
        const bool branch_taken_0x2e02cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02CCu;
        // 0x2e02d0: 0xa0460118  sb          $a2, 0x118($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 280), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02cc) {
            ctx->pc = 0x2E02F4u;
            goto label_2e02f4;
        }
    }
    ctx->pc = 0x2E02D4u;
    // 0x2e02d4: 0x0  nop
    ctx->pc = 0x2e02d4u;
    // NOP
label_2e02d8:
    // 0x2e02d8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2E02D8u;
    SET_GPR_U32(ctx, 31, 0x2E02E0u);
    ctx->pc = 0x2E02DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E02D8u;
    // 0x2e02dc: 0x9271017a  lbu         $s1, 0x17A($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 378)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2E02D8u, 0x2E02E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E02E0u;
label_2e02e0:
    // 0x2e02e0: 0x2b38021  addu        $s0, $s5, $s3
    ctx->pc = 0x2e02e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2e02e4: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x2e02e4u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e02e8: 0x26100118  addiu       $s0, $s0, 0x118
    ctx->pc = 0x2e02e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x2e02ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2e02ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e02f0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e02f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2e02f4:
    // 0x2e02f4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E02F4u;
    {
        const bool branch_taken_0x2e02f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02F4u;
        // 0x2e02f8: 0x2e42000a  sltiu       $v0, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02f4) {
            ctx->pc = 0x2E0308u;
            goto label_2e0308;
        }
    }
    ctx->pc = 0x2E02FCu;
    // 0x2e02fc: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x2e02fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e0300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0300u;
    {
        const bool branch_taken_0x2e0300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0300u;
        // 0x2e0304: 0x242a00b  movn        $s4, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0300) {
            ctx->pc = 0x2E030Cu;
            goto label_2e030c;
        }
    }
    ctx->pc = 0x2E0308u;
label_2e0308:
    // 0x2e0308: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2e0308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e030c:
    // 0x2e030c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E030Cu;
    {
        const bool branch_taken_0x2e030c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E030Cu;
        // 0x2e0310: 0x2ec2000a  sltiu       $v0, $s6, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e030c) {
            ctx->pc = 0x2E0320u;
            goto label_2e0320;
        }
    }
    ctx->pc = 0x2E0314u;
    // 0x2e0314: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x2e0314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e0318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0318u;
    {
        const bool branch_taken_0x2e0318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0318u;
        // 0x2e031c: 0x2c2900b  movn        $s2, $s6, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0318) {
            ctx->pc = 0x2E0324u;
            goto label_2e0324;
        }
    }
    ctx->pc = 0x2E0320u;
label_2e0320:
    // 0x2e0320: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e0320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0324:
    // 0x2e0324: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x2e0324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2e0328: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0328u;
    {
        const bool branch_taken_0x2e0328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0328u;
        // 0x2e032c: 0x254102a  slt         $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0328) {
            ctx->pc = 0x2E0358u;
            goto label_2e0358;
        }
    }
    ctx->pc = 0x2E0330u;
    // 0x2e0330: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2E0330u;
    SET_GPR_U32(ctx, 31, 0x2E0338u);
    ctx->pc = 0x2E0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0330u;
    // 0x2e0334: 0x2548023  subu        $s0, $s2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2E0330u, 0x2E0338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0338u;
label_2e0338:
    // 0x2e0338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e0338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e033c: 0x2b38821  addu        $s1, $s5, $s3
    ctx->pc = 0x2e033cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2e0340: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2e0340u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e0344: 0x26310149  addiu       $s1, $s1, 0x149
    ctx->pc = 0x2e0344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 329));
    // 0x2e0348: 0x1810  mfhi        $v1
    ctx->pc = 0x2e0348u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e034c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2e034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2e0350: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E0350u;
    {
        const bool branch_taken_0x2e0350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0350u;
        // 0x2e0354: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0350) {
            ctx->pc = 0x2E038Cu;
            goto label_2e038c;
        }
    }
    ctx->pc = 0x2E0358u;
label_2e0358:
    // 0x2e0358: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0358u;
    {
        const bool branch_taken_0x2e0358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0358u;
        // 0x2e035c: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0358) {
            ctx->pc = 0x2E0388u;
            goto label_2e0388;
        }
    }
    ctx->pc = 0x2E0360u;
    // 0x2e0360: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2E0360u;
    SET_GPR_U32(ctx, 31, 0x2E0368u);
    ctx->pc = 0x2E0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0360u;
    // 0x2e0364: 0x2928023  subu        $s0, $s4, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2E0360u, 0x2E0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0368u;
label_2e0368:
    // 0x2e0368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e0368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e036c: 0x2b38821  addu        $s1, $s5, $s3
    ctx->pc = 0x2e036cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2e0370: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2e0370u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e0374: 0x26310149  addiu       $s1, $s1, 0x149
    ctx->pc = 0x2e0374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 329));
    // 0x2e0378: 0x1810  mfhi        $v1
    ctx->pc = 0x2e0378u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e037c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e0380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0380u;
    {
        const bool branch_taken_0x2e0380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0380u;
        // 0x2e0384: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0380) {
            ctx->pc = 0x2E038Cu;
            goto label_2e038c;
        }
    }
    ctx->pc = 0x2E0388u;
label_2e0388:
    // 0x2e0388: 0xa0540149  sb          $s4, 0x149($v0)
    ctx->pc = 0x2e0388u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 329), (uint8_t)GPR_U32(ctx, 20));
label_2e038c:
    // 0x2e038c: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2e038cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
    // 0x2e0390: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e0390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e0394:
    // 0x2e0394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0398: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e0398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e039c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e039cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e03a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e03a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e03a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e03a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e03a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e03a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03ac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e03acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e03b0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2e03b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e03b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E03B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E03B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03B4u;
        // 0x2e03b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E03B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E03BCu;
    // 0x2e03bc: 0x0  nop
    ctx->pc = 0x2e03bcu;
    // NOP
    ctx->pc = 0x2e03c0u;
}
