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

// Function: sub_0028F448
// Address: 0x28f448 - 0x28f8f8
void sub_0028F448_0x28f448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F448_0x28f448");
#endif

    switch (ctx->pc) {
        case 0x28f4a0u: goto label_28f4a0;
        case 0x28f4b8u: goto label_28f4b8;
        case 0x28f4f4u: goto label_28f4f4;
        case 0x28f508u: goto label_28f508;
        case 0x28f544u: goto label_28f544;
        case 0x28f570u: goto label_28f570;
        case 0x28f5acu: goto label_28f5ac;
        case 0x28f5c0u: goto label_28f5c0;
        case 0x28f5fcu: goto label_28f5fc;
        case 0x28f638u: goto label_28f638;
        case 0x28f668u: goto label_28f668;
        case 0x28f698u: goto label_28f698;
        case 0x28f6c8u: goto label_28f6c8;
        case 0x28f6f8u: goto label_28f6f8;
        case 0x28f728u: goto label_28f728;
        case 0x28f758u: goto label_28f758;
        case 0x28f788u: goto label_28f788;
        case 0x28f7b8u: goto label_28f7b8;
        case 0x28f7e8u: goto label_28f7e8;
        case 0x28f818u: goto label_28f818;
        case 0x28f848u: goto label_28f848;
        case 0x28f878u: goto label_28f878;
        case 0x28f8a8u: goto label_28f8a8;
        default: break;
    }

    ctx->pc = 0x28f448u;

    // 0x28f448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28f448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28f44c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28f450: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28f450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x28f454: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28f458: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x28f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x28f45c: 0x2477a6e8  addiu       $s7, $v1, -0x5918
    ctx->pc = 0x28f45cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944488));
    // 0x28f460: 0x24547270  addiu       $s4, $v0, 0x7270
    ctx->pc = 0x28f460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 29296));
    // 0x28f464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28f468: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x28f468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x28f46c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f470: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28f470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f474: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28f478: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28f478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f47c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28f47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28f480: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x28f480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f484: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28f484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28f488: 0x2415efff  addiu       $s5, $zero, -0x1001
    ctx->pc = 0x28f488u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28f48c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x28f48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x28f490: 0x26960004  addiu       $s6, $s4, 0x4
    ctx->pc = 0x28f490u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x28f494: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x28f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x28f498: 0x26fe0004  addiu       $fp, $s7, 0x4
    ctx->pc = 0x28f498u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x28f49c: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x28f49cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28f4a0:
    // 0x28f4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28f4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f4a4: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x28f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x28f4a8: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x28f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x28f4ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28f4b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x28f4b4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x28f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_28f4b8:
    // 0x28f4b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28f4bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28f4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28f4c0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f4c4: 0x971021  addu        $v0, $a0, $s7
    ctx->pc = 0x28f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x28f4c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f4cc: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F4CCu;
    {
        const bool branch_taken_0x28f4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x28F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4CCu;
        // 0x28f4d0: 0x28c50021  slti        $a1, $a2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4cc) {
            ctx->pc = 0x28F4E0u;
            goto label_28f4e0;
        }
    }
    ctx->pc = 0x28F4D4u;
    // 0x28f4d4: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x28f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x28f4d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28F4D8u;
    {
        const bool branch_taken_0x28f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4D8u;
        // 0x28f4dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4d8) {
            ctx->pc = 0x28F4ECu;
            goto label_28f4ec;
        }
    }
    ctx->pc = 0x28F4E0u;
label_28f4e0:
    // 0x28f4e0: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x28F4E0u;
    {
        const bool branch_taken_0x28f4e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4E0u;
        // 0x28f4e4: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4e0) {
            ctx->pc = 0x28F4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f4b8;
        }
    }
    ctx->pc = 0x28F4E8u;
    // 0x28f4e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f4ec:
    // 0x28f4ec: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x28F4ECu;
    SET_GPR_U32(ctx, 31, 0x28F4F4u);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x28F4ECu, 0x28F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F4F4u;
label_28f4f4:
    // 0x28f4f4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28F4F4u;
    {
        const bool branch_taken_0x28f4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4F4u;
        // 0x28f4f8: 0x2667a6e8  addiu       $a3, $s3, -0x5918 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4f4) {
            ctx->pc = 0x28F560u;
            goto label_28f560;
        }
    }
    ctx->pc = 0x28F4FCu;
    // 0x28f4fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f500: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x28f500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x28f504: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x28f504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_28f508:
    // 0x28f508: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28f50c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28f510: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28f510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f514: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x28f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x28f518: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f51c: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F51Cu;
    {
        const bool branch_taken_0x28f51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x28F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F51Cu;
        // 0x28f520: 0x28a60021  slti        $a2, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f51c) {
            ctx->pc = 0x28F530u;
            goto label_28f530;
        }
    }
    ctx->pc = 0x28F524u;
    // 0x28f524: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x28f524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x28f528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28F528u;
    {
        const bool branch_taken_0x28f528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F528u;
        // 0x28f52c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f528) {
            ctx->pc = 0x28F53Cu;
            goto label_28f53c;
        }
    }
    ctx->pc = 0x28F530u;
label_28f530:
    // 0x28f530: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x28F530u;
    {
        const bool branch_taken_0x28f530 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F530u;
        // 0x28f534: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f530) {
            ctx->pc = 0x28F508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f508;
        }
    }
    ctx->pc = 0x28F538u;
    // 0x28f538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f53c:
    // 0x28f53c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28F53Cu;
    SET_GPR_U32(ctx, 31, 0x28F544u);
    ctx->pc = 0x28F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F53Cu;
    // 0x28f540: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28F53Cu, 0x28F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F544u;
label_28f544:
    // 0x28f544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f548: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F548u;
    {
        const bool branch_taken_0x28f548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F548u;
        // 0x28f54c: 0x2341821  addu        $v1, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f548) {
            ctx->pc = 0x28F560u;
            goto label_28f560;
        }
    }
    ctx->pc = 0x28F550u;
    // 0x28f550: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f554: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x28f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x28f558: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28f55c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_28f560:
    // 0x28f560: 0x2667a6e8  addiu       $a3, $s3, -0x5918
    ctx->pc = 0x28f560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944488));
    // 0x28f564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f568: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x28f568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x28f56c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x28f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_28f570:
    // 0x28f570: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28f574: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28f574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28f578: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28f578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f57c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x28f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x28f580: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f584: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F584u;
    {
        const bool branch_taken_0x28f584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x28F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F584u;
        // 0x28f588: 0x28a60021  slti        $a2, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f584) {
            ctx->pc = 0x28F598u;
            goto label_28f598;
        }
    }
    ctx->pc = 0x28F58Cu;
    // 0x28f58c: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x28f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x28f590: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28F590u;
    {
        const bool branch_taken_0x28f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F590u;
        // 0x28f594: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f590) {
            ctx->pc = 0x28F5A4u;
            goto label_28f5a4;
        }
    }
    ctx->pc = 0x28F598u;
label_28f598:
    // 0x28f598: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x28F598u;
    {
        const bool branch_taken_0x28f598 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F598u;
        // 0x28f59c: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f598) {
            ctx->pc = 0x28F570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f570;
        }
    }
    ctx->pc = 0x28F5A0u;
    // 0x28f5a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f5a4:
    // 0x28f5a4: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x28F5A4u;
    SET_GPR_U32(ctx, 31, 0x28F5ACu);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x28F5A4u, 0x28F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5ACu;
label_28f5ac:
    // 0x28f5ac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28F5ACu;
    {
        const bool branch_taken_0x28f5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5ACu;
        // 0x28f5b0: 0x2667a6e8  addiu       $a3, $s3, -0x5918 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5ac) {
            ctx->pc = 0x28F618u;
            goto label_28f618;
        }
    }
    ctx->pc = 0x28F5B4u;
    // 0x28f5b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f5b8: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x28f5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x28f5bc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x28f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_28f5c0:
    // 0x28f5c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28f5c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28f5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28f5c8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f5cc: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x28f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x28f5d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f5d4: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F5D4u;
    {
        const bool branch_taken_0x28f5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x28F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5D4u;
        // 0x28f5d8: 0x28a60021  slti        $a2, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5d4) {
            ctx->pc = 0x28F5E8u;
            goto label_28f5e8;
        }
    }
    ctx->pc = 0x28F5DCu;
    // 0x28f5dc: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x28f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x28f5e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28F5E0u;
    {
        const bool branch_taken_0x28f5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5E0u;
        // 0x28f5e4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5e0) {
            ctx->pc = 0x28F5F4u;
            goto label_28f5f4;
        }
    }
    ctx->pc = 0x28F5E8u;
label_28f5e8:
    // 0x28f5e8: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x28F5E8u;
    {
        const bool branch_taken_0x28f5e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5E8u;
        // 0x28f5ec: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5e8) {
            ctx->pc = 0x28F5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f5c0;
        }
    }
    ctx->pc = 0x28F5F0u;
    // 0x28f5f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f5f4:
    // 0x28f5f4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28F5F4u;
    SET_GPR_U32(ctx, 31, 0x28F5FCu);
    ctx->pc = 0x28F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F5F4u;
    // 0x28f5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28F5F4u, 0x28F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F5FCu;
label_28f5fc:
    // 0x28f5fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f600: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F600u;
    {
        const bool branch_taken_0x28f600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F600u;
        // 0x28f604: 0x2361821  addu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f600) {
            ctx->pc = 0x28F618u;
            goto label_28f618;
        }
    }
    ctx->pc = 0x28F608u;
    // 0x28f608: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f60c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x28f60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x28f610: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28f614: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28f614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_28f618:
    // 0x28f618: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28f618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28f61c: 0x2a020021  slti        $v0, $s0, 0x21
    ctx->pc = 0x28f61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x28f620: 0x5440ff9f  bnel        $v0, $zero, . + 4 + (-0x61 << 2)
    ctx->pc = 0x28F620u;
    {
        const bool branch_taken_0x28f620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f620) {
            ctx->pc = 0x28F624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F620u;
            // 0x28f624: 0x1088c0  sll         $s1, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f4a0;
        }
    }
    ctx->pc = 0x28F628u;
    // 0x28f628: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28f62c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f630: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F630u;
    SET_GPR_U32(ctx, 31, 0x28F638u);
    ctx->pc = 0x28F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F630u;
    // 0x28f634: 0x24a5a8b0  addiu       $a1, $a1, -0x5750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F630u, 0x28F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F638u;
label_28f638:
    // 0x28f638: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F638u;
    {
        const bool branch_taken_0x28f638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f638) {
            ctx->pc = 0x28F63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F638u;
            // 0x28f63c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F65Cu;
            goto label_28f65c;
        }
    }
    ctx->pc = 0x28F640u;
    // 0x28f640: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f644: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F644u;
    {
        const bool branch_taken_0x28f644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F644u;
        // 0x28f648: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f644) {
            ctx->pc = 0x28F658u;
            goto label_28f658;
        }
    }
    ctx->pc = 0x28F64Cu;
    // 0x28f64c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f650: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f654: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f658:
    // 0x28f658: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f65c:
    // 0x28f65c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f660: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F660u;
    SET_GPR_U32(ctx, 31, 0x28F668u);
    ctx->pc = 0x28F664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F660u;
    // 0x28f664: 0x24a5a8d8  addiu       $a1, $a1, -0x5728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F660u, 0x28F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F668u;
label_28f668:
    // 0x28f668: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F668u;
    {
        const bool branch_taken_0x28f668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f668) {
            ctx->pc = 0x28F66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F668u;
            // 0x28f66c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F68Cu;
            goto label_28f68c;
        }
    }
    ctx->pc = 0x28F670u;
    // 0x28f670: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f674: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F674u;
    {
        const bool branch_taken_0x28f674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F674u;
        // 0x28f678: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f674) {
            ctx->pc = 0x28F688u;
            goto label_28f688;
        }
    }
    ctx->pc = 0x28F67Cu;
    // 0x28f67c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f680: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f684: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f688:
    // 0x28f688: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f68c:
    // 0x28f68c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f690: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F690u;
    SET_GPR_U32(ctx, 31, 0x28F698u);
    ctx->pc = 0x28F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F690u;
    // 0x28f694: 0x24a5a900  addiu       $a1, $a1, -0x5700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F690u, 0x28F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F698u;
label_28f698:
    // 0x28f698: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F698u;
    {
        const bool branch_taken_0x28f698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f698) {
            ctx->pc = 0x28F69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F698u;
            // 0x28f69c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F6BCu;
            goto label_28f6bc;
        }
    }
    ctx->pc = 0x28F6A0u;
    // 0x28f6a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f6a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F6A4u;
    {
        const bool branch_taken_0x28f6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6A4u;
        // 0x28f6a8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6a4) {
            ctx->pc = 0x28F6B8u;
            goto label_28f6b8;
        }
    }
    ctx->pc = 0x28F6ACu;
    // 0x28f6ac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f6b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f6b4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f6b8:
    // 0x28f6b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f6bc:
    // 0x28f6bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f6c0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F6C0u;
    SET_GPR_U32(ctx, 31, 0x28F6C8u);
    ctx->pc = 0x28F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F6C0u;
    // 0x28f6c4: 0x24a5a928  addiu       $a1, $a1, -0x56D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F6C0u, 0x28F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F6C8u;
label_28f6c8:
    // 0x28f6c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F6C8u;
    {
        const bool branch_taken_0x28f6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f6c8) {
            ctx->pc = 0x28F6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F6C8u;
            // 0x28f6cc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F6ECu;
            goto label_28f6ec;
        }
    }
    ctx->pc = 0x28F6D0u;
    // 0x28f6d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f6d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F6D4u;
    {
        const bool branch_taken_0x28f6d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6D4u;
        // 0x28f6d8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6d4) {
            ctx->pc = 0x28F6E8u;
            goto label_28f6e8;
        }
    }
    ctx->pc = 0x28F6DCu;
    // 0x28f6dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f6e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f6e4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f6e8:
    // 0x28f6e8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f6ec:
    // 0x28f6ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f6f0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F6F0u;
    SET_GPR_U32(ctx, 31, 0x28F6F8u);
    ctx->pc = 0x28F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F6F0u;
    // 0x28f6f4: 0x24a5a950  addiu       $a1, $a1, -0x56B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F6F0u, 0x28F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F6F8u;
label_28f6f8:
    // 0x28f6f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F6F8u;
    {
        const bool branch_taken_0x28f6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f6f8) {
            ctx->pc = 0x28F6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F6F8u;
            // 0x28f6fc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F71Cu;
            goto label_28f71c;
        }
    }
    ctx->pc = 0x28F700u;
    // 0x28f700: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f704: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F704u;
    {
        const bool branch_taken_0x28f704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F704u;
        // 0x28f708: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f704) {
            ctx->pc = 0x28F718u;
            goto label_28f718;
        }
    }
    ctx->pc = 0x28F70Cu;
    // 0x28f70c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f710: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f714: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f718:
    // 0x28f718: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f71c:
    // 0x28f71c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f720: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F720u;
    SET_GPR_U32(ctx, 31, 0x28F728u);
    ctx->pc = 0x28F724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F720u;
    // 0x28f724: 0x24a5a968  addiu       $a1, $a1, -0x5698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F720u, 0x28F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F728u;
label_28f728:
    // 0x28f728: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F728u;
    {
        const bool branch_taken_0x28f728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f728) {
            ctx->pc = 0x28F72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F728u;
            // 0x28f72c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F74Cu;
            goto label_28f74c;
        }
    }
    ctx->pc = 0x28F730u;
    // 0x28f730: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f734: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F734u;
    {
        const bool branch_taken_0x28f734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F734u;
        // 0x28f738: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f734) {
            ctx->pc = 0x28F748u;
            goto label_28f748;
        }
    }
    ctx->pc = 0x28F73Cu;
    // 0x28f73c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f740: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f744: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f748:
    // 0x28f748: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f74c:
    // 0x28f74c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f750: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F750u;
    SET_GPR_U32(ctx, 31, 0x28F758u);
    ctx->pc = 0x28F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F750u;
    // 0x28f754: 0x24a5a980  addiu       $a1, $a1, -0x5680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F750u, 0x28F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F758u;
label_28f758:
    // 0x28f758: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F758u;
    {
        const bool branch_taken_0x28f758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f758) {
            ctx->pc = 0x28F75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F758u;
            // 0x28f75c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F77Cu;
            goto label_28f77c;
        }
    }
    ctx->pc = 0x28F760u;
    // 0x28f760: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f764: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F764u;
    {
        const bool branch_taken_0x28f764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F764u;
        // 0x28f768: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f764) {
            ctx->pc = 0x28F778u;
            goto label_28f778;
        }
    }
    ctx->pc = 0x28F76Cu;
    // 0x28f76c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f770: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f774: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f778:
    // 0x28f778: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f77c:
    // 0x28f77c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f780: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F780u;
    SET_GPR_U32(ctx, 31, 0x28F788u);
    ctx->pc = 0x28F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F780u;
    // 0x28f784: 0x24a5a998  addiu       $a1, $a1, -0x5668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F780u, 0x28F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F788u;
label_28f788:
    // 0x28f788: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F788u;
    {
        const bool branch_taken_0x28f788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f788) {
            ctx->pc = 0x28F78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F788u;
            // 0x28f78c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F7ACu;
            goto label_28f7ac;
        }
    }
    ctx->pc = 0x28F790u;
    // 0x28f790: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f794: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F794u;
    {
        const bool branch_taken_0x28f794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F794u;
        // 0x28f798: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f794) {
            ctx->pc = 0x28F7A8u;
            goto label_28f7a8;
        }
    }
    ctx->pc = 0x28F79Cu;
    // 0x28f79c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f7a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f7a4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f7a8:
    // 0x28f7a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f7ac:
    // 0x28f7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f7b0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F7B0u;
    SET_GPR_U32(ctx, 31, 0x28F7B8u);
    ctx->pc = 0x28F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7B0u;
    // 0x28f7b4: 0x24a5a9b0  addiu       $a1, $a1, -0x5650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F7B0u, 0x28F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7B8u;
label_28f7b8:
    // 0x28f7b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F7B8u;
    {
        const bool branch_taken_0x28f7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f7b8) {
            ctx->pc = 0x28F7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F7B8u;
            // 0x28f7bc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F7DCu;
            goto label_28f7dc;
        }
    }
    ctx->pc = 0x28F7C0u;
    // 0x28f7c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f7c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F7C4u;
    {
        const bool branch_taken_0x28f7c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7C4u;
        // 0x28f7c8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7c4) {
            ctx->pc = 0x28F7D8u;
            goto label_28f7d8;
        }
    }
    ctx->pc = 0x28F7CCu;
    // 0x28f7cc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f7d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f7d4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f7d8:
    // 0x28f7d8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f7dc:
    // 0x28f7dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f7e0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F7E0u;
    SET_GPR_U32(ctx, 31, 0x28F7E8u);
    ctx->pc = 0x28F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7E0u;
    // 0x28f7e4: 0x24a5a9d0  addiu       $a1, $a1, -0x5630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F7E0u, 0x28F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7E8u;
label_28f7e8:
    // 0x28f7e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F7E8u;
    {
        const bool branch_taken_0x28f7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f7e8) {
            ctx->pc = 0x28F7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F7E8u;
            // 0x28f7ec: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F80Cu;
            goto label_28f80c;
        }
    }
    ctx->pc = 0x28F7F0u;
    // 0x28f7f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f7f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F7F4u;
    {
        const bool branch_taken_0x28f7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7F4u;
        // 0x28f7f8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7f4) {
            ctx->pc = 0x28F808u;
            goto label_28f808;
        }
    }
    ctx->pc = 0x28F7FCu;
    // 0x28f7fc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f800: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f804: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f808:
    // 0x28f808: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f80c:
    // 0x28f80c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f810: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F810u;
    SET_GPR_U32(ctx, 31, 0x28F818u);
    ctx->pc = 0x28F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F810u;
    // 0x28f814: 0x24a5a9f0  addiu       $a1, $a1, -0x5610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F810u, 0x28F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F818u;
label_28f818:
    // 0x28f818: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F818u;
    {
        const bool branch_taken_0x28f818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f818) {
            ctx->pc = 0x28F81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F818u;
            // 0x28f81c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F83Cu;
            goto label_28f83c;
        }
    }
    ctx->pc = 0x28F820u;
    // 0x28f820: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f824: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F824u;
    {
        const bool branch_taken_0x28f824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F824u;
        // 0x28f828: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f824) {
            ctx->pc = 0x28F838u;
            goto label_28f838;
        }
    }
    ctx->pc = 0x28F82Cu;
    // 0x28f82c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f830: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f834: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f838:
    // 0x28f838: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f83c:
    // 0x28f83c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f840: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F840u;
    SET_GPR_U32(ctx, 31, 0x28F848u);
    ctx->pc = 0x28F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F840u;
    // 0x28f844: 0x24a5aa08  addiu       $a1, $a1, -0x55F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F840u, 0x28F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F848u;
label_28f848:
    // 0x28f848: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F848u;
    {
        const bool branch_taken_0x28f848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f848) {
            ctx->pc = 0x28F84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F848u;
            // 0x28f84c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F86Cu;
            goto label_28f86c;
        }
    }
    ctx->pc = 0x28F850u;
    // 0x28f850: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f854: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F854u;
    {
        const bool branch_taken_0x28f854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F854u;
        // 0x28f858: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f854) {
            ctx->pc = 0x28F868u;
            goto label_28f868;
        }
    }
    ctx->pc = 0x28F85Cu;
    // 0x28f85c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f860: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f864: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f868:
    // 0x28f868: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f86c:
    // 0x28f86c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f870: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F870u;
    SET_GPR_U32(ctx, 31, 0x28F878u);
    ctx->pc = 0x28F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F870u;
    // 0x28f874: 0x24a5aa20  addiu       $a1, $a1, -0x55E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F870u, 0x28F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F878u;
label_28f878:
    // 0x28f878: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F878u;
    {
        const bool branch_taken_0x28f878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f878) {
            ctx->pc = 0x28F87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F878u;
            // 0x28f87c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F89Cu;
            goto label_28f89c;
        }
    }
    ctx->pc = 0x28F880u;
    // 0x28f880: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f884: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F884u;
    {
        const bool branch_taken_0x28f884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F884u;
        // 0x28f888: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f884) {
            ctx->pc = 0x28F898u;
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F88Cu;
    // 0x28f88c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f890: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f894: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28f898:
    // 0x28f898: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28f898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28f89c:
    // 0x28f89c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f8a0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28F8A0u;
    SET_GPR_U32(ctx, 31, 0x28F8A8u);
    ctx->pc = 0x28F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F8A0u;
    // 0x28f8a4: 0x24a5aa40  addiu       $a1, $a1, -0x55C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28F8A0u, 0x28F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F8A8u;
label_28f8a8:
    // 0x28f8a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F8A8u;
    {
        const bool branch_taken_0x28f8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8A8u;
        // 0x28f8ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8a8) {
            ctx->pc = 0x28F8CCu;
            goto label_28f8cc;
        }
    }
    ctx->pc = 0x28F8B0u;
    // 0x28f8b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f8b4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F8B4u;
    {
        const bool branch_taken_0x28f8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8B4u;
        // 0x28f8b8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8b4) {
            ctx->pc = 0x28F8CCu;
            goto label_28f8cc;
        }
    }
    ctx->pc = 0x28F8BCu;
    // 0x28f8bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28f8c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28f8c4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28f8c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f8cc:
    // 0x28f8cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28f8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f8d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28f8d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f8d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28f8d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28f8d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28f8d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f8dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28f8dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28f8e0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x28f8e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f8e4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x28f8e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28f8e8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x28f8e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f8ec: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x28f8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28f8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8F0u;
        // 0x28f8f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F8F8u;
}
