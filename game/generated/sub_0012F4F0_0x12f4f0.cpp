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

// Function: sub_0012F4F0
// Address: 0x12f4f0 - 0x12f680
void sub_0012F4F0_0x12f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F4F0_0x12f4f0");
#endif

    switch (ctx->pc) {
        case 0x12f520u: goto label_12f520;
        case 0x12f534u: goto label_12f534;
        case 0x12f56cu: goto label_12f56c;
        case 0x12f5a0u: goto label_12f5a0;
        case 0x12f5f8u: goto label_12f5f8;
        case 0x12f640u: goto label_12f640;
        default: break;
    }

    ctx->pc = 0x12f4f0u;

    // 0x12f4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f4f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12f4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12f4f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12f4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12f4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12f500: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12f500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f504: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12f504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12f508: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12f508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f50c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f518: 0xc04bd22  jal         func_12F488
    ctx->pc = 0x12F518u;
    SET_GPR_U32(ctx, 31, 0x12F520u);
    ctx->pc = 0x12F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F518u;
    // 0x12f51c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F488u, 0x12F518u, 0x12F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F520u;
label_12f520:
    // 0x12f520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f524: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F524u;
    {
        const bool branch_taken_0x12f524 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F524u;
        // 0x12f528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f524) {
            ctx->pc = 0x12F548u;
            goto label_12f548;
        }
    }
    ctx->pc = 0x12F52Cu;
    // 0x12f52c: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12F52Cu;
    SET_GPR_U32(ctx, 31, 0x12F534u);
    ctx->pc = 0x12F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F52Cu;
    // 0x12f530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12F52Cu, 0x12F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F534u;
label_12f534:
    // 0x12f534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f538: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x12f538u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f53c: 0xad630010  sw          $v1, 0x10($t3)
    ctx->pc = 0x12f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 3));
    // 0x12f540: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x12F540u;
    {
        const bool branch_taken_0x12f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F540u;
        // 0x12f544: 0xad600014  sw          $zero, 0x14($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f540) {
            ctx->pc = 0x12F664u;
            goto label_12f664;
        }
    }
    ctx->pc = 0x12F548u;
label_12f548:
    // 0x12f548: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F548u;
    {
        const bool branch_taken_0x12f548 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x12f548) {
            ctx->pc = 0x12F54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F548u;
            // 0x12f54c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F560u;
            goto label_12f560;
        }
    }
    ctx->pc = 0x12F550u;
    // 0x12f550: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x12f550u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f554: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12f554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f558: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12f558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f55c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x12f55cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_12f560:
    // 0x12f560: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x12f560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12f564: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12F564u;
    SET_GPR_U32(ctx, 31, 0x12F56Cu);
    ctx->pc = 0x12F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F564u;
    // 0x12f568: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12F564u, 0x12F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F56Cu;
label_12f56c:
    // 0x12f56c: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x12f56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x12f570: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x12f570u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f574: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x12f574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x12f578: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x12f578u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x12f57c: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x12f57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x12f580: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12f580u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f584: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x12f584u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12f588: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x12f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12f58c: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x12f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x12f590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12f590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12f594: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x12f594u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x12f598: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x12f598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x12f59c: 0x0  nop
    ctx->pc = 0x12f59cu;
    // NOP
label_12f5a0:
    // 0x12f5a0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x12f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f5a4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x12f5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x12f5a8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x12f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12f5ac: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x12f5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x12f5b0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12f5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12f5b4: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x12f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12f5b8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x12f5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12f5bc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x12f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x12f5c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f5c4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x12f5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12f5c8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x12f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12f5cc: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x12f5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x12f5d0: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x12f5d0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x12f5d4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x12f5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12f5d8: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x12f5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x12f5dc: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x12f5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x12f5e0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x12f5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12f5e4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12F5E4u;
    {
        const bool branch_taken_0x12f5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5E4u;
        // 0x12f5e8: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5e4) {
            ctx->pc = 0x12F5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f5a0;
        }
    }
    ctx->pc = 0x12F5ECu;
    // 0x12f5ec: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x12f5ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12f5f0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x12F5F0u;
    {
        const bool branch_taken_0x12f5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f5f0) {
            ctx->pc = 0x12F5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F5F0u;
            // 0x12f5f4: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F630u;
            goto label_12f630;
        }
    }
    ctx->pc = 0x12F5F8u;
label_12f5f8:
    // 0x12f5f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x12f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f5fc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x12f5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x12f600: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x12f600u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12f604: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x12f604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12f608: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x12f608u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x12f60c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x12f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12f610: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x12f610u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x12f614: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x12f614u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12f618: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x12f618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x12f61c: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x12f61cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x12f620: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x12f620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12f624: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12F624u;
    {
        const bool branch_taken_0x12f624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F624u;
        // 0x12f628: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f624) {
            ctx->pc = 0x12F5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f5f8;
        }
    }
    ctx->pc = 0x12F62Cu;
    // 0x12f62c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x12f62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_12f630:
    // 0x12f630: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x12f630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f634: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12F634u;
    {
        const bool branch_taken_0x12f634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f634) {
            ctx->pc = 0x12F638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F634u;
            // 0x12f638: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F660u;
            goto label_12f660;
        }
    }
    ctx->pc = 0x12F63Cu;
    // 0x12f63c: 0x0  nop
    ctx->pc = 0x12f63cu;
    // NOP
label_12f640:
    // 0x12f640: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x12f640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x12f644: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x12f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f648: 0x0  nop
    ctx->pc = 0x12f648u;
    // NOP
    // 0x12f64c: 0x0  nop
    ctx->pc = 0x12f64cu;
    // NOP
    // 0x12f650: 0x0  nop
    ctx->pc = 0x12f650u;
    // NOP
    // 0x12f654: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F654u;
    {
        const bool branch_taken_0x12f654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F654u;
        // 0x12f658: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f654) {
            ctx->pc = 0x12F640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f640;
        }
    }
    ctx->pc = 0x12F65Cu;
    // 0x12f65c: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x12f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_12f660:
    // 0x12f660: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x12f660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_12f664:
    // 0x12f664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12f668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f66c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12f66cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f670: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12f670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12f674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f678: 0x3e00008  jr          $ra
    ctx->pc = 0x12F678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F678u;
        // 0x12f67c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F680u;
}
