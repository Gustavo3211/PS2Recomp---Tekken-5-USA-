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

// Function: sub_0029F910
// Address: 0x29f910 - 0x29faa0
void sub_0029F910_0x29f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F910_0x29f910");
#endif

    switch (ctx->pc) {
        case 0x29f9b8u: goto label_29f9b8;
        case 0x29f9dcu: goto label_29f9dc;
        case 0x29fa08u: goto label_29fa08;
        case 0x29fa24u: goto label_29fa24;
        case 0x29fa38u: goto label_29fa38;
        case 0x29fa54u: goto label_29fa54;
        case 0x29fa6cu: goto label_29fa6c;
        default: break;
    }

    ctx->pc = 0x29f910u;

    // 0x29f910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29f910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29f914: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29f918: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29f918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f91c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f920: 0x26440158  addiu       $a0, $s2, 0x158
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
    // 0x29f924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29f928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29f92c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29f92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29f930: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29f934: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29f938: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29f938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x29f93c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29f940: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f944: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F944u;
    {
        const bool branch_taken_0x29f944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F944u;
        // 0x29f948: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f944) {
            ctx->pc = 0x29F95Cu;
            goto label_29f95c;
        }
    }
    ctx->pc = 0x29F94Cu;
    // 0x29f94c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29f950: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29f950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29f954: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29F954u;
    {
        const bool branch_taken_0x29f954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29f954) {
            ctx->pc = 0x29F958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F954u;
            // 0x29f958: 0x8e430150  lw          $v1, 0x150($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F96Cu;
            goto label_29f96c;
        }
    }
    ctx->pc = 0x29F95Cu;
label_29f95c:
    // 0x29f95c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x29f960: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29f960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f964: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x29f964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29f968: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x29f968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_29f96c:
    // 0x29f96c: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x29f96cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x29f970: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x29F970u;
    {
        const bool branch_taken_0x29f970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F970u;
        // 0x29f974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f970) {
            ctx->pc = 0x29FA78u;
            goto label_29fa78;
        }
    }
    ctx->pc = 0x29F978u;
    // 0x29f978: 0x28620039  slti        $v0, $v1, 0x39
    ctx->pc = 0x29f978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x29f97c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29F97Cu;
    {
        const bool branch_taken_0x29f97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F97Cu;
        // 0x29f980: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f97c) {
            ctx->pc = 0x29F998u;
            goto label_29f998;
        }
    }
    ctx->pc = 0x29F984u;
    // 0x29f984: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x29f984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x29f988: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F988u;
    {
        const bool branch_taken_0x29f988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F988u;
        // 0x29f98c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f988) {
            ctx->pc = 0x29F9A8u;
            goto label_29f9a8;
        }
    }
    ctx->pc = 0x29F990u;
    // 0x29f990: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x29F990u;
    {
        const bool branch_taken_0x29f990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F990u;
        // 0x29f994: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f990) {
            ctx->pc = 0x29FA7Cu;
            goto label_29fa7c;
        }
    }
    ctx->pc = 0x29F998u;
label_29f998:
    // 0x29f998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29f998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f99c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29F99Cu;
    {
        const bool branch_taken_0x29f99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F99Cu;
        // 0x29f9a0: 0x2450ca48  addiu       $s0, $v0, -0x35B8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f99c) {
            ctx->pc = 0x29F9B0u;
            goto label_29f9b0;
        }
    }
    ctx->pc = 0x29F9A4u;
    // 0x29f9a4: 0x0  nop
    ctx->pc = 0x29f9a4u;
    // NOP
label_29f9a8:
    // 0x29f9a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29f9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9ac: 0x2450ca60  addiu       $s0, $v0, -0x35A0
    ctx->pc = 0x29f9acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
label_29f9b0:
    // 0x29f9b0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29F9B0u;
    SET_GPR_U32(ctx, 31, 0x29F9B8u);
    ctx->pc = 0x29F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F9B0u;
    // 0x29f9b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29F9B0u, 0x29F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9B8u;
label_29f9b8:
    // 0x29f9b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F9BCu;
    {
        const bool branch_taken_0x29f9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9BCu;
        // 0x29f9c0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9bc) {
            ctx->pc = 0x29F9D0u;
            goto label_29f9d0;
        }
    }
    ctx->pc = 0x29F9C4u;
    // 0x29f9c4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29f9c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29f9cc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_29f9d0:
    // 0x29f9d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29f9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9d4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29F9D4u;
    SET_GPR_U32(ctx, 31, 0x29F9DCu);
    ctx->pc = 0x29F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F9D4u;
    // 0x29f9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29F9D4u, 0x29F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9DCu;
label_29f9dc:
    // 0x29f9dc: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x29f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x29f9e0: 0xae630108  sw          $v1, 0x108($s3)
    ctx->pc = 0x29f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 264), GPR_U32(ctx, 3));
    // 0x29f9e4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29f9e8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29f9ec: 0x2457ca30  addiu       $s7, $v0, -0x35D0
    ctx->pc = 0x29f9ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953520));
    // 0x29f9f0: 0x2476c920  addiu       $s6, $v1, -0x36E0
    ctx->pc = 0x29f9f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953248));
    // 0x29f9f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29f9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9f8: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x29f9f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f9fc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x29f9fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fa00: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x29fa00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29fa04: 0x0  nop
    ctx->pc = 0x29fa04u;
    // NOP
label_29fa08:
    // 0x29fa08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29fa08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29fa0c: 0x2171021  addu        $v0, $s0, $s7
    ctx->pc = 0x29fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x29fa10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29fa14: 0x1075000a  beq         $v1, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x29FA14u;
    {
        const bool branch_taken_0x29fa14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x29FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA14u;
        // 0x29fa18: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa14) {
            ctx->pc = 0x29FA40u;
            goto label_29fa40;
        }
    }
    ctx->pc = 0x29FA1Cu;
    // 0x29fa1c: 0xc086304  jal         func_218C10
    ctx->pc = 0x29FA1Cu;
    SET_GPR_U32(ctx, 31, 0x29FA24u);
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x29FA1Cu, 0x29FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA24u;
label_29fa24:
    // 0x29fa24: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x29FA24u;
    {
        const bool branch_taken_0x29fa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x29FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA24u;
        // 0x29fa28: 0x2162821  addu        $a1, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa24) {
            ctx->pc = 0x29FA40u;
            goto label_29fa40;
        }
    }
    ctx->pc = 0x29FA2Cu;
    // 0x29fa2c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x29fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29fa30: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29FA30u;
    SET_GPR_U32(ctx, 31, 0x29FA38u);
    ctx->pc = 0x29FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA30u;
    // 0x29fa34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29FA30u, 0x29FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA38u;
label_29fa38:
    // 0x29fa38: 0x8e630108  lw          $v1, 0x108($s3)
    ctx->pc = 0x29fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
    // 0x29fa3c: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x29fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
label_29fa40:
    // 0x29fa40: 0x2a220022  slti        $v0, $s1, 0x22
    ctx->pc = 0x29fa40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x29fa44: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29FA44u;
    {
        const bool branch_taken_0x29fa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fa44) {
            ctx->pc = 0x29FA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FA44u;
            // 0x29fa48: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fa08;
        }
    }
    ctx->pc = 0x29FA4Cu;
    // 0x29fa4c: 0xc086304  jal         func_218C10
    ctx->pc = 0x29FA4Cu;
    SET_GPR_U32(ctx, 31, 0x29FA54u);
    ctx->pc = 0x29FA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA4Cu;
    // 0x29fa50: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x29FA4Cu, 0x29FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA54u;
label_29fa54:
    // 0x29fa54: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29FA54u;
    {
        const bool branch_taken_0x29fa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fa54) {
            ctx->pc = 0x29FA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FA54u;
            // 0x29fa58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FA78u;
            goto label_29fa78;
        }
    }
    ctx->pc = 0x29FA5Cu;
    // 0x29fa5c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29fa60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29fa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa64: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29FA64u;
    SET_GPR_U32(ctx, 31, 0x29FA6Cu);
    ctx->pc = 0x29FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA64u;
    // 0x29fa68: 0x8c45c998  lw          $a1, -0x3668($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29FA64u, 0x29FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA6Cu;
label_29fa6c:
    // 0x29fa6c: 0x8e630108  lw          $v1, 0x108($s3)
    ctx->pc = 0x29fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
    // 0x29fa70: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x29fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x29fa74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29fa74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29fa78:
    // 0x29fa78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29fa78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29fa7c:
    // 0x29fa7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29fa7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fa80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29fa80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29fa84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29fa84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29fa88: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29fa88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29fa8c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29fa8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29fa90: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29fa90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29fa94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29fa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29fa98: 0x3e00008  jr          $ra
    ctx->pc = 0x29FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA98u;
        // 0x29fa9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FAA0u;
}
