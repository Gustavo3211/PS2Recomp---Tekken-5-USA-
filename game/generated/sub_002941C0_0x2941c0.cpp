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

// Function: sub_002941C0
// Address: 0x2941c0 - 0x294450
void sub_002941C0_0x2941c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002941C0_0x2941c0");
#endif

    switch (ctx->pc) {
        case 0x29421cu: goto label_29421c;
        case 0x294238u: goto label_294238;
        case 0x294258u: goto label_294258;
        case 0x294268u: goto label_294268;
        case 0x294270u: goto label_294270;
        case 0x2942d4u: goto label_2942d4;
        case 0x294300u: goto label_294300;
        case 0x294354u: goto label_294354;
        case 0x29435cu: goto label_29435c;
        case 0x2943c0u: goto label_2943c0;
        default: break;
    }

    ctx->pc = 0x2941c0u;

    // 0x2941c0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2941c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2941c4: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x2941c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x2941c8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2941c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941cc: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x2941ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x2941d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2941d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2941d4: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x2941d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x2941d8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2941d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2941dc: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x2941dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x2941e0: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x2941e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x2941e4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x2941e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x2941e8: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x2941e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x2941ec: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x2941ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x2941f0: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x2941f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x2941f4: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2941F4u;
    {
        const bool branch_taken_0x2941f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2941F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941F4u;
        // 0x2941f8: 0xffbf0158  sd          $ra, 0x158($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941f4) {
            ctx->pc = 0x294210u;
            goto label_294210;
        }
    }
    ctx->pc = 0x2941FCu;
    // 0x2941fc: 0x12f5000c  beq         $s7, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x2941FCu;
    {
        const bool branch_taken_0x2941fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 21));
        ctx->pc = 0x294200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941FCu;
        // 0x294200: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941fc) {
            ctx->pc = 0x294230u;
            goto label_294230;
        }
    }
    ctx->pc = 0x294204u;
    // 0x294204: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x294204u;
    {
        const bool branch_taken_0x294204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294204u;
        // 0x294208: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294204) {
            ctx->pc = 0x294424u;
            goto label_294424;
        }
    }
    ctx->pc = 0x29420Cu;
    // 0x29420c: 0x0  nop
    ctx->pc = 0x29420cu;
    // NOP
label_294210:
    // 0x294210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x294210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294214: 0xc0880d8  jal         func_220360
    ctx->pc = 0x294214u;
    SET_GPR_U32(ctx, 31, 0x29421Cu);
    ctx->pc = 0x294218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294214u;
    // 0x294218: 0x3c100005  lui         $s0, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220360u, 0x294214u, 0x29421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29421Cu;
label_29421c:
    // 0x29421c: 0x2413001e  addiu       $s3, $zero, 0x1E
    ctx->pc = 0x29421cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x294220: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x294220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x294224: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x294224u;
    {
        const bool branch_taken_0x294224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294224u;
        // 0x294228: 0x36107e04  ori         $s0, $s0, 0x7E04 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32260);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294224) {
            ctx->pc = 0x294248u;
            goto label_294248;
        }
    }
    ctx->pc = 0x29422Cu;
    // 0x29422c: 0x0  nop
    ctx->pc = 0x29422cu;
    // NOP
label_294230:
    // 0x294230: 0xc0880e2  jal         func_220388
    ctx->pc = 0x294230u;
    SET_GPR_U32(ctx, 31, 0x294238u);
    ctx->pc = 0x294234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294230u;
    // 0x294234: 0x3c100001  lui         $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220388u, 0x294230u, 0x294238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294238u;
label_294238:
    // 0x294238: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x294238u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29423c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x29423cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x294240: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x294240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x294244: 0x3610869f  ori         $s0, $s0, 0x869F
    ctx->pc = 0x294244u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)34463);
label_294248:
    // 0x294248: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x294248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x29424c: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x29424Cu;
    {
        const bool branch_taken_0x29424c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x294250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29424Cu;
        // 0x294250: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29424c) {
            ctx->pc = 0x2942C0u;
            goto label_2942c0;
        }
    }
    ctx->pc = 0x294254u;
    // 0x294254: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x294254u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_294258:
    // 0x294258: 0x56e00008  bnel        $s7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x294258u;
    {
        const bool branch_taken_0x294258 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x294258) {
            ctx->pc = 0x29425Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294258u;
            // 0x29425c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29427Cu;
            goto label_29427c;
        }
    }
    ctx->pc = 0x294260u;
    // 0x294260: 0xc086428  jal         func_2190A0
    ctx->pc = 0x294260u;
    SET_GPR_U32(ctx, 31, 0x294268u);
    ctx->pc = 0x294264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294260u;
    // 0x294264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2190A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2190A0u, 0x294260u, 0x294268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294268u;
label_294268:
    // 0x294268: 0xc086304  jal         func_218C10
    ctx->pc = 0x294268u;
    SET_GPR_U32(ctx, 31, 0x294270u);
    ctx->pc = 0x29426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294268u;
    // 0x29426c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x294268u, 0x294270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294270u;
label_294270:
    // 0x294270: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x294270u;
    {
        const bool branch_taken_0x294270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294270) {
            ctx->pc = 0x294274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294270u;
            // 0x294274: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2942B4u;
            goto label_2942b4;
        }
    }
    ctx->pc = 0x294278u;
    // 0x294278: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x294278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_29427c:
    // 0x29427c: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x29427cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x294280: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x294280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x294284: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x294284u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x294288: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x294288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29428c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x294290: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x294290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x294294: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x294294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x294298: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x294298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x29429c: 0x8c710034  lw          $s1, 0x34($v1)
    ctx->pc = 0x29429cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2942a0: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x2942a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x2942a4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2942a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2942a8: 0x202880b  movn        $s1, $s0, $v0
    ctx->pc = 0x2942a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
    // 0x2942ac: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x2942acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x2942b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2942b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2942b4:
    // 0x2942b4: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x2942b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2942b8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2942B8u;
    {
        const bool branch_taken_0x2942b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2942b8) {
            ctx->pc = 0x294258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294258;
        }
    }
    ctx->pc = 0x2942C0u;
label_2942c0:
    // 0x2942c0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2942c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2942c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2942c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942c8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2942c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942cc: 0xc0935d8  jal         func_24D760
    ctx->pc = 0x2942CCu;
    SET_GPR_U32(ctx, 31, 0x2942D4u);
    ctx->pc = 0x2942D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2942CCu;
    // 0x2942d0: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D760u, 0x2942CCu, 0x2942D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942D4u;
label_2942d4:
    // 0x2942d4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2942d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2942d8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2942d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2942dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2942dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942e0: 0x1860004f  blez        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2942E0u;
    {
        const bool branch_taken_0x2942e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2942E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942E0u;
        // 0x2942e4: 0xafa400f8  sw          $a0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942e0) {
            ctx->pc = 0x294420u;
            goto label_294420;
        }
    }
    ctx->pc = 0x2942E8u;
    // 0x2942e8: 0x2682000c  addiu       $v0, $s4, 0xC
    ctx->pc = 0x2942e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2942ec: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x2942ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2942f0: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2942f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2942f4: 0x269e0004  addiu       $fp, $s4, 0x4
    ctx->pc = 0x2942f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2942f8: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x2942f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x2942fc: 0x12b0c0  sll         $s6, $s2, 3
    ctx->pc = 0x2942fcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_294300:
    // 0x294300: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x294300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x294304: 0x129900  sll         $s3, $s2, 4
    ctx->pc = 0x294304u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x294308: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x294308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x29430c: 0x2721823  subu        $v1, $s3, $s2
    ctx->pc = 0x29430cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x294310: 0x3b61021  addu        $v0, $sp, $s6
    ctx->pc = 0x294310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
    // 0x294314: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x294314u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x294318: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x294318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29431c: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x29431cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x294320: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x294320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294324: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x294324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x294328: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x294328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x29432c: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x29432cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x294330: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x294330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x294334: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x294334u;
    {
        const bool branch_taken_0x294334 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x294338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294334u;
        // 0x294338: 0x44a821  addu        $s5, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294334) {
            ctx->pc = 0x294348u;
            goto label_294348;
        }
    }
    ctx->pc = 0x29433Cu;
    // 0x29433c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29433Cu;
    {
        const bool branch_taken_0x29433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29433Cu;
        // 0x294340: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29433c) {
            ctx->pc = 0x29434Cu;
            goto label_29434c;
        }
    }
    ctx->pc = 0x294344u;
    // 0x294344: 0x0  nop
    ctx->pc = 0x294344u;
    // NOP
label_294348:
    // 0x294348: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x294348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_29434c:
    // 0x29434c: 0xc086428  jal         func_2190A0
    ctx->pc = 0x29434Cu;
    SET_GPR_U32(ctx, 31, 0x294354u);
    ctx->pc = 0x2190A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2190A0u, 0x29434Cu, 0x294354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294354u;
label_294354:
    // 0x294354: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x294354u;
    SET_GPR_U32(ctx, 31, 0x29435Cu);
    ctx->pc = 0x294358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294354u;
    // 0x294358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x294354u, 0x29435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29435Cu;
label_29435c:
    // 0x29435c: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x29435cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x294360: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x294360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x294364: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x294364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x294368: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x294368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x29436c: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29436Cu;
    {
        const bool branch_taken_0x29436c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x294370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29436Cu;
        // 0x294370: 0x2721023  subu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29436c) {
            ctx->pc = 0x294388u;
            goto label_294388;
        }
    }
    ctx->pc = 0x294374u;
    // 0x294374: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x294374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x294378: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x294378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29437c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x29437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x294380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x294380u;
    {
        const bool branch_taken_0x294380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294380u;
        // 0x294384: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294380) {
            ctx->pc = 0x294394u;
            goto label_294394;
        }
    }
    ctx->pc = 0x294388u;
label_294388:
    // 0x294388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x294388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29438c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x29438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x294390: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x294390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_294394:
    // 0x294394: 0x2728023  subu        $s0, $s3, $s2
    ctx->pc = 0x294394u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x294398: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x294398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29439c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x29439cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2943a0: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x2943a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2943a4: 0x3d01021  addu        $v0, $fp, $s0
    ctx->pc = 0x2943a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x2943a8: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x2943a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2943ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2943acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2943b0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2943b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2943b4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2943b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2943b8: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2943B8u;
    SET_GPR_U32(ctx, 31, 0x2943C0u);
    ctx->pc = 0x2943BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2943B8u;
    // 0x2943bc: 0xafa200f4  sw          $v0, 0xF4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2943B8u, 0x2943C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2943C0u;
label_2943c0:
    // 0x2943c0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2943c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2943c4: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x2943c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2943c8: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x2943c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2943cc: 0xa6000038  sh          $zero, 0x38($s0)
    ctx->pc = 0x2943ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x2943d0: 0xafb100f8  sw          $s1, 0xF8($sp)
    ctx->pc = 0x2943d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 17));
    // 0x2943d4: 0x16e0000d  bnez        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x2943D4u;
    {
        const bool branch_taken_0x2943d4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2943D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943D4u;
        // 0x2943d8: 0xac600030  sw          $zero, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2943d4) {
            ctx->pc = 0x29440Cu;
            goto label_29440c;
        }
    }
    ctx->pc = 0x2943DCu;
    // 0x2943dc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2943dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2943e0: 0x2465b710  addiu       $a1, $v1, -0x48F0
    ctx->pc = 0x2943e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
    // 0x2943e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2943e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB710u));
    // 0x2943e8: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x2943e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x2943ec: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2943ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x2943f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2943F0u;
    {
        const bool branch_taken_0x2943f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2943f0) {
            ctx->pc = 0x2943F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2943F0u;
            // 0x2943f4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294410u;
            goto label_294410;
        }
    }
    ctx->pc = 0x2943F8u;
    // 0x2943f8: 0x3b61021  addu        $v0, $sp, $s6
    ctx->pc = 0x2943f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
    // 0x2943fc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2943fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x294400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x294400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294404: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x294404u;
    {
        const bool branch_taken_0x294404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x294404) {
            ctx->pc = 0x294408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294404u;
            // 0x294408: 0xacb2000c  sw          $s2, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29440Cu;
            goto label_29440c;
        }
    }
    ctx->pc = 0x29440Cu;
label_29440c:
    // 0x29440c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x29440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_294410:
    // 0x294410: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x294414: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x294414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x294418: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x294418u;
    {
        const bool branch_taken_0x294418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294418u;
        // 0x29441c: 0x12b0c0  sll         $s6, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294418) {
            ctx->pc = 0x294300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294300;
        }
    }
    ctx->pc = 0x294420u;
label_294420:
    // 0x294420: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x294420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_294424:
    // 0x294424: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x294424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x294428: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x294428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29442c: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x29442cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x294430: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x294430u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x294434: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x294434u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x294438: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x294438u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29443c: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x29443cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x294440: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x294440u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x294444: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x294444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x294448: 0x3e00008  jr          $ra
    ctx->pc = 0x294448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294448u;
        // 0x29444c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294450u;
}
