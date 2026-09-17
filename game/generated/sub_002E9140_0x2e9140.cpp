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

// Function: sub_002E9140
// Address: 0x2e9140 - 0x2e92f0
void sub_002E9140_0x2e9140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9140_0x2e9140");
#endif

    switch (ctx->pc) {
        case 0x2e9194u: goto label_2e9194;
        case 0x2e927cu: goto label_2e927c;
        case 0x2e9288u: goto label_2e9288;
        case 0x2e92a0u: goto label_2e92a0;
        case 0x2e92c8u: goto label_2e92c8;
        default: break;
    }

    ctx->pc = 0x2e9140u;

    // 0x2e9140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e9144: 0x2406efff  addiu       $a2, $zero, -0x1001
    ctx->pc = 0x2e9144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2e9148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e914c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x2e914cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x2e9150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e9150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e9154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e9154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e9158: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e9158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e915c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e915cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9160: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e9160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e9164: 0x26640110  addiu       $a0, $s3, 0x110
    ctx->pc = 0x2e9164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    // 0x2e9168: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e9168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e916c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e9170: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x2e9170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x2e9174: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2e9174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2e9178: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e9178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e917c: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2e917cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x2e9180: 0x8e630124  lw          $v1, 0x124($s3)
    ctx->pc = 0x2e9180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x2e9184: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2e9184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e9188: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e9188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e918c: 0xc0bb8c2  jal         func_2EE308
    ctx->pc = 0x2E918Cu;
    SET_GPR_U32(ctx, 31, 0x2E9194u);
    ctx->pc = 0x2E9190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E918Cu;
    // 0x2e9190: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE308u, 0x2E918Cu, 0x2E9194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9194u;
label_2e9194:
    // 0x2e9194: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e9194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9198: 0x2602f670  addiu       $v0, $s0, -0x990
    ctx->pc = 0x2e9198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964848));
    // 0x2e919c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2e919cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e91a0: 0x72343  sra         $a0, $a3, 13
    ctx->pc = 0x2e91a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 13));
    // 0x2e91a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e91a8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e91a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e91ac: 0x80b20000  lb          $s2, 0x0($a1)
    ctx->pc = 0x2e91acu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e91b0: 0x30e68000  andi        $a2, $a3, 0x8000
    ctx->pc = 0x2e91b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2e91b4: 0x80710000  lb          $s1, 0x0($v1)
    ctx->pc = 0x2e91b4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e91b8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2e91b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e91bc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E91BCu;
    {
        const bool branch_taken_0x2e91bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91BCu;
        // 0x2e91c0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91bc) {
            ctx->pc = 0x2E91D0u;
            goto label_2e91d0;
        }
    }
    ctx->pc = 0x2E91C4u;
    // 0x2e91c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e91c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e91c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E91C8u;
    {
        const bool branch_taken_0x2e91c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91C8u;
        // 0x2e91cc: 0x22023  negu        $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91c8) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E91D0u;
label_2e91d0:
    // 0x2e91d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e91d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e91d4:
    // 0x2e91d4: 0x71383  sra         $v0, $a3, 14
    ctx->pc = 0x2e91d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 14));
    // 0x2e91d8: 0x30e31000  andi        $v1, $a3, 0x1000
    ctx->pc = 0x2e91d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
    // 0x2e91dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E91DCu;
    {
        const bool branch_taken_0x2e91dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91DCu;
        // 0x2e91e0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91dc) {
            ctx->pc = 0x2E91F0u;
            goto label_2e91f0;
        }
    }
    ctx->pc = 0x2E91E4u;
    // 0x2e91e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e91e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e91e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E91E8u;
    {
        const bool branch_taken_0x2e91e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91E8u;
        // 0x2e91ec: 0x22823  negu        $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91e8) {
            ctx->pc = 0x2E91F4u;
            goto label_2e91f4;
        }
    }
    ctx->pc = 0x2E91F0u;
label_2e91f0:
    // 0x2e91f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e91f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e91f4:
    // 0x2e91f4: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x2e91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2e91f8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e91fc: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x2e91fcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2e9200: 0x2a23ffec  slti        $v1, $s1, -0x14
    ctx->pc = 0x2e9200u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967276) ? 1 : 0);
    // 0x2e9204: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9204u;
    {
        const bool branch_taken_0x2e9204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9204u;
        // 0x2e9208: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9204) {
            ctx->pc = 0x2E9210u;
            goto label_2e9210;
        }
    }
    ctx->pc = 0x2E920Cu;
    // 0x2e920c: 0x2402ffec  addiu       $v0, $zero, -0x14
    ctx->pc = 0x2e920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
label_2e9210:
    // 0x2e9210: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e9210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e9214: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x2e9214u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2e9218: 0x2a230015  slti        $v1, $s1, 0x15
    ctx->pc = 0x2e9218u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2e921c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E921Cu;
    {
        const bool branch_taken_0x2e921c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E921Cu;
        // 0x2e9220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e921c) {
            ctx->pc = 0x2E9228u;
            goto label_2e9228;
        }
    }
    ctx->pc = 0x2E9224u;
    // 0x2e9224: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2e9224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2e9228:
    // 0x2e9228: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x2e9228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2e922c: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x2e922cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2e9230: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e9230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e9234: 0x38e03  sra         $s1, $v1, 24
    ctx->pc = 0x2e9234u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2e9238: 0x29603  sra         $s2, $v0, 24
    ctx->pc = 0x2e9238u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2e923c: 0x2a43fff6  slti        $v1, $s2, -0xA
    ctx->pc = 0x2e923cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x2e9240: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9240u;
    {
        const bool branch_taken_0x2e9240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9240u;
        // 0x2e9244: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9240) {
            ctx->pc = 0x2E924Cu;
            goto label_2e924c;
        }
    }
    ctx->pc = 0x2E9248u;
    // 0x2e9248: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x2e9248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
label_2e924c:
    // 0x2e924c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e924cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e9250: 0x29603  sra         $s2, $v0, 24
    ctx->pc = 0x2e9250u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2e9254: 0x2a43000b  slti        $v1, $s2, 0xB
    ctx->pc = 0x2e9254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2e9258: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9258u;
    {
        const bool branch_taken_0x2e9258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9258u;
        // 0x2e925c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9258) {
            ctx->pc = 0x2E9264u;
            goto label_2e9264;
        }
    }
    ctx->pc = 0x2E9260u;
    // 0x2e9260: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e9264:
    // 0x2e9264: 0x2610f670  addiu       $s0, $s0, -0x990
    ctx->pc = 0x2e9264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964848));
    // 0x2e9268: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e9268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e926c: 0x29603  sra         $s2, $v0, 24
    ctx->pc = 0x2e926cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2e9270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9274: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x2E9274u;
    SET_GPR_U32(ctx, 31, 0x2E927Cu);
    ctx->pc = 0x2E9278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9274u;
    // 0x2e9278: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2E9274u, 0x2E927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E927Cu;
label_2e927c:
    // 0x2e927c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2e927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2e9280: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x2E9280u;
    SET_GPR_U32(ctx, 31, 0x2E9288u);
    ctx->pc = 0x2E9284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9280u;
    // 0x2e9284: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2E9280u, 0x2E9288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9288u;
label_2e9288:
    // 0x2e9288: 0x16340003  bne         $s1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9288u;
    {
        const bool branch_taken_0x2e9288 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x2E928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9288u;
        // 0x2e928c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9288) {
            ctx->pc = 0x2E9298u;
            goto label_2e9298;
        }
    }
    ctx->pc = 0x2E9290u;
    // 0x2e9290: 0x12550009  beq         $s2, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E9290u;
    {
        const bool branch_taken_0x2e9290 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x2E9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9290u;
        // 0x2e9294: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9290) {
            ctx->pc = 0x2E92B8u;
            goto label_2e92b8;
        }
    }
    ctx->pc = 0x2E9298u;
label_2e9298:
    // 0x2e9298: 0xc092940  jal         func_24A500
    ctx->pc = 0x2E9298u;
    SET_GPR_U32(ctx, 31, 0x2E92A0u);
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2E9298u, 0x2E92A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E92A0u;
label_2e92a0:
    // 0x2e92a0: 0x26630130  addiu       $v1, $s3, 0x130
    ctx->pc = 0x2e92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    // 0x2e92a4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2e92a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e92a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E92A8u;
    {
        const bool branch_taken_0x2e92a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92A8u;
        // 0x2e92ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92a8) {
            ctx->pc = 0x2E92BCu;
            goto label_2e92bc;
        }
    }
    ctx->pc = 0x2E92B0u;
    // 0x2e92b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e92b4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2e92b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2e92b8:
    // 0x2e92b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e92b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e92bc:
    // 0x2e92bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e92bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e92c0: 0xc0ba3c4  jal         func_2E8F10
    ctx->pc = 0x2E92C0u;
    SET_GPR_U32(ctx, 31, 0x2E92C8u);
    ctx->pc = 0x2E92C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E92C0u;
    // 0x2e92c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8F10u, 0x2E92C0u, 0x2E92C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E92C8u;
label_2e92c8:
    // 0x2e92c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e92c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e92cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e92ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e92d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e92d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e92d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e92d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e92d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e92d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e92dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e92dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e92e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e92e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e92e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E92E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E92E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92E4u;
        // 0x2e92e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E92E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E92ECu;
    // 0x2e92ec: 0x0  nop
    ctx->pc = 0x2e92ecu;
    // NOP
    ctx->pc = 0x2e92f0u;
}
