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

// Function: sub_002F0F90
// Address: 0x2f0f90 - 0x2f1b58
void sub_002F0F90_0x2f0f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0F90_0x2f0f90");
#endif

    switch (ctx->pc) {
        case 0x2f0ff0u: goto label_2f0ff0;
        case 0x2f102cu: goto label_2f102c;
        case 0x2f1064u: goto label_2f1064;
        case 0x2f109cu: goto label_2f109c;
        case 0x2f10d4u: goto label_2f10d4;
        case 0x2f110cu: goto label_2f110c;
        case 0x2f1144u: goto label_2f1144;
        case 0x2f117cu: goto label_2f117c;
        case 0x2f11b4u: goto label_2f11b4;
        case 0x2f11ecu: goto label_2f11ec;
        case 0x2f1224u: goto label_2f1224;
        case 0x2f125cu: goto label_2f125c;
        case 0x2f1294u: goto label_2f1294;
        case 0x2f12ccu: goto label_2f12cc;
        case 0x2f1304u: goto label_2f1304;
        case 0x2f133cu: goto label_2f133c;
        case 0x2f1374u: goto label_2f1374;
        case 0x2f13acu: goto label_2f13ac;
        case 0x2f13e8u: goto label_2f13e8;
        case 0x2f13f8u: goto label_2f13f8;
        case 0x2f1404u: goto label_2f1404;
        case 0x2f1448u: goto label_2f1448;
        case 0x2f1484u: goto label_2f1484;
        case 0x2f14bcu: goto label_2f14bc;
        case 0x2f14f4u: goto label_2f14f4;
        case 0x2f152cu: goto label_2f152c;
        case 0x2f1564u: goto label_2f1564;
        case 0x2f159cu: goto label_2f159c;
        case 0x2f15d4u: goto label_2f15d4;
        case 0x2f160cu: goto label_2f160c;
        case 0x2f1644u: goto label_2f1644;
        case 0x2f167cu: goto label_2f167c;
        case 0x2f16b4u: goto label_2f16b4;
        case 0x2f16ecu: goto label_2f16ec;
        case 0x2f1724u: goto label_2f1724;
        case 0x2f175cu: goto label_2f175c;
        case 0x2f1794u: goto label_2f1794;
        case 0x2f17ccu: goto label_2f17cc;
        case 0x2f1804u: goto label_2f1804;
        case 0x2f1840u: goto label_2f1840;
        case 0x2f1850u: goto label_2f1850;
        case 0x2f185cu: goto label_2f185c;
        case 0x2f189cu: goto label_2f189c;
        case 0x2f18c4u: goto label_2f18c4;
        case 0x2f18ecu: goto label_2f18ec;
        case 0x2f1914u: goto label_2f1914;
        case 0x2f193cu: goto label_2f193c;
        case 0x2f1964u: goto label_2f1964;
        case 0x2f198cu: goto label_2f198c;
        case 0x2f19b4u: goto label_2f19b4;
        case 0x2f19dcu: goto label_2f19dc;
        case 0x2f1a04u: goto label_2f1a04;
        case 0x2f1a2cu: goto label_2f1a2c;
        case 0x2f1a54u: goto label_2f1a54;
        case 0x2f1a7cu: goto label_2f1a7c;
        case 0x2f1aa4u: goto label_2f1aa4;
        case 0x2f1accu: goto label_2f1acc;
        case 0x2f1af4u: goto label_2f1af4;
        case 0x2f1b1cu: goto label_2f1b1c;
        default: break;
    }

    ctx->pc = 0x2f0f90u;

    // 0x2f0f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f0f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f0f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0f98: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f0f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2f0f9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f0f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fa0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f0fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f0fa4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f0fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fa8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f0fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f0fac: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2f0facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2f0fb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f0fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f0fb4: 0x10a20120  beq         $a1, $v0, . + 4 + (0x120 << 2)
    ctx->pc = 0x2F0FB4u;
    {
        const bool branch_taken_0x2f0fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FB4u;
        // 0x2f0fb8: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fb4) {
            ctx->pc = 0x2F1438u;
            goto label_2f1438;
        }
    }
    ctx->pc = 0x2F0FBCu;
    // 0x2f0fbc: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2f0fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f0fc0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0FC0u;
    {
        const bool branch_taken_0x2f0fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0fc0) {
            ctx->pc = 0x2F0FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0FC0u;
            // 0x2f0fc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0FD8u;
            goto label_2f0fd8;
        }
    }
    ctx->pc = 0x2F0FC8u;
    // 0x2f0fc8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0FC8u;
    {
        const bool branch_taken_0x2f0fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0fc8) {
            ctx->pc = 0x2F0FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0FC8u;
            // 0x2f0fcc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0FE8u;
            goto label_2f0fe8;
        }
    }
    ctx->pc = 0x2F0FD0u;
    // 0x2f0fd0: 0x100002cf  b           . + 4 + (0x2CF << 2)
    ctx->pc = 0x2F0FD0u;
    {
        const bool branch_taken_0x2f0fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FD0u;
        // 0x2f0fd4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fd0) {
            ctx->pc = 0x2F1B10u;
            goto label_2f1b10;
        }
    }
    ctx->pc = 0x2F0FD8u;
label_2f0fd8:
    // 0x2f0fd8: 0x50a2022d  beql        $a1, $v0, . + 4 + (0x22D << 2)
    ctx->pc = 0x2F0FD8u;
    {
        const bool branch_taken_0x2f0fd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f0fd8) {
            ctx->pc = 0x2F0FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0FD8u;
            // 0x2f0fdc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1890u;
            goto label_2f1890;
        }
    }
    ctx->pc = 0x2F0FE0u;
    // 0x2f0fe0: 0x100002cb  b           . + 4 + (0x2CB << 2)
    ctx->pc = 0x2F0FE0u;
    {
        const bool branch_taken_0x2f0fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FE0u;
        // 0x2f0fe4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fe0) {
            ctx->pc = 0x2F1B10u;
            goto label_2f1b10;
        }
    }
    ctx->pc = 0x2F0FE8u;
label_2f0fe8:
    // 0x2f0fe8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F0FE8u;
    SET_GPR_U32(ctx, 31, 0x2F0FF0u);
    ctx->pc = 0x2F0FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FE8u;
    // 0x2f0fec: 0x24a50e98  addiu       $a1, $a1, 0xE98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F0FE8u, 0x2F0FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0FF0u;
label_2f0ff0:
    // 0x2f0ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f0ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ff4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2F0FF4u;
    {
        const bool branch_taken_0x2f0ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0ff4) {
            ctx->pc = 0x2F0FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0FF4u;
            // 0x2f0ff8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1020u;
            goto label_2f1020;
        }
    }
    ctx->pc = 0x2F0FFCu;
    // 0x2f0ffc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0FFCu;
    {
        const bool branch_taken_0x2f0ffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FFCu;
        // 0x2f1000: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ffc) {
            ctx->pc = 0x2F1010u;
            goto label_2f1010;
        }
    }
    ctx->pc = 0x2F1004u;
    // 0x2f1004: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1004u;
    {
        const bool branch_taken_0x2f1004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1004u;
        // 0x2f1008: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1004) {
            ctx->pc = 0x2F1018u;
            goto label_2f1018;
        }
    }
    ctx->pc = 0x2F100Cu;
    // 0x2f100c: 0x0  nop
    ctx->pc = 0x2f100cu;
    // NOP
label_2f1010:
    // 0x2f1010: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1014: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1018:
    // 0x2f1018: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f101c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f101cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1020:
    // 0x2f1020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1024: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1024u;
    SET_GPR_U32(ctx, 31, 0x2F102Cu);
    ctx->pc = 0x2F1028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1024u;
    // 0x2f1028: 0x24a50ea8  addiu       $a1, $a1, 0xEA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1024u, 0x2F102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F102Cu;
label_2f102c:
    // 0x2f102c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1030: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1030u;
    {
        const bool branch_taken_0x2f1030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1030) {
            ctx->pc = 0x2F1034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1030u;
            // 0x2f1034: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1058u;
            goto label_2f1058;
        }
    }
    ctx->pc = 0x2F1038u;
    // 0x2f1038: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1038u;
    {
        const bool branch_taken_0x2f1038 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1038u;
        // 0x2f103c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1038) {
            ctx->pc = 0x2F1048u;
            goto label_2f1048;
        }
    }
    ctx->pc = 0x2F1040u;
    // 0x2f1040: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1040u;
    {
        const bool branch_taken_0x2f1040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1040u;
        // 0x2f1044: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1040) {
            ctx->pc = 0x2F1050u;
            goto label_2f1050;
        }
    }
    ctx->pc = 0x2F1048u;
label_2f1048:
    // 0x2f1048: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f104c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1050:
    // 0x2f1050: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1054: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2f1054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2f1058:
    // 0x2f1058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f105c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F105Cu;
    SET_GPR_U32(ctx, 31, 0x2F1064u);
    ctx->pc = 0x2F1060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F105Cu;
    // 0x2f1060: 0x24a54ad0  addiu       $a1, $a1, 0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F105Cu, 0x2F1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1064u;
label_2f1064:
    // 0x2f1064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1068: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1068u;
    {
        const bool branch_taken_0x2f1068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1068) {
            ctx->pc = 0x2F106Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1068u;
            // 0x2f106c: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1090u;
            goto label_2f1090;
        }
    }
    ctx->pc = 0x2F1070u;
    // 0x2f1070: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1070u;
    {
        const bool branch_taken_0x2f1070 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1070u;
        // 0x2f1074: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1070) {
            ctx->pc = 0x2F1080u;
            goto label_2f1080;
        }
    }
    ctx->pc = 0x2F1078u;
    // 0x2f1078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1078u;
    {
        const bool branch_taken_0x2f1078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1078u;
        // 0x2f107c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1078) {
            ctx->pc = 0x2F1088u;
            goto label_2f1088;
        }
    }
    ctx->pc = 0x2F1080u;
label_2f1080:
    // 0x2f1080: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1088:
    // 0x2f1088: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f108c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2f108cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2f1090:
    // 0x2f1090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1094: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1094u;
    SET_GPR_U32(ctx, 31, 0x2F109Cu);
    ctx->pc = 0x2F1098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1094u;
    // 0x2f1098: 0x24a54ad8  addiu       $a1, $a1, 0x4AD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1094u, 0x2F109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F109Cu;
label_2f109c:
    // 0x2f109c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10a0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F10A0u;
    {
        const bool branch_taken_0x2f10a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f10a0) {
            ctx->pc = 0x2F10A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F10A0u;
            // 0x2f10a4: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F10C8u;
            goto label_2f10c8;
        }
    }
    ctx->pc = 0x2F10A8u;
    // 0x2f10a8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F10A8u;
    {
        const bool branch_taken_0x2f10a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10A8u;
        // 0x2f10ac: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10a8) {
            ctx->pc = 0x2F10B8u;
            goto label_2f10b8;
        }
    }
    ctx->pc = 0x2F10B0u;
    // 0x2f10b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F10B0u;
    {
        const bool branch_taken_0x2f10b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10B0u;
        // 0x2f10b4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10b0) {
            ctx->pc = 0x2F10C0u;
            goto label_2f10c0;
        }
    }
    ctx->pc = 0x2F10B8u;
label_2f10b8:
    // 0x2f10b8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f10bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f10bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f10c0:
    // 0x2f10c0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f10c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f10c4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2f10c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2f10c8:
    // 0x2f10c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f10c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10cc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F10CCu;
    SET_GPR_U32(ctx, 31, 0x2F10D4u);
    ctx->pc = 0x2F10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F10CCu;
    // 0x2f10d0: 0x24a54ae0  addiu       $a1, $a1, 0x4AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F10CCu, 0x2F10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F10D4u;
label_2f10d4:
    // 0x2f10d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f10d8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F10D8u;
    {
        const bool branch_taken_0x2f10d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f10d8) {
            ctx->pc = 0x2F10DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F10D8u;
            // 0x2f10dc: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1100u;
            goto label_2f1100;
        }
    }
    ctx->pc = 0x2F10E0u;
    // 0x2f10e0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F10E0u;
    {
        const bool branch_taken_0x2f10e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10E0u;
        // 0x2f10e4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10e0) {
            ctx->pc = 0x2F10F0u;
            goto label_2f10f0;
        }
    }
    ctx->pc = 0x2F10E8u;
    // 0x2f10e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F10E8u;
    {
        const bool branch_taken_0x2f10e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10E8u;
        // 0x2f10ec: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10e8) {
            ctx->pc = 0x2F10F8u;
            goto label_2f10f8;
        }
    }
    ctx->pc = 0x2F10F0u;
label_2f10f0:
    // 0x2f10f0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f10f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f10f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f10f8:
    // 0x2f10f8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f10fc: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2f10fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2f1100:
    // 0x2f1100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1104: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1104u;
    SET_GPR_U32(ctx, 31, 0x2F110Cu);
    ctx->pc = 0x2F1108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1104u;
    // 0x2f1108: 0x24a54ae8  addiu       $a1, $a1, 0x4AE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1104u, 0x2F110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F110Cu;
label_2f110c:
    // 0x2f110c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f110cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1110: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1110u;
    {
        const bool branch_taken_0x2f1110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1110) {
            ctx->pc = 0x2F1114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1110u;
            // 0x2f1114: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1138u;
            goto label_2f1138;
        }
    }
    ctx->pc = 0x2F1118u;
    // 0x2f1118: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1118u;
    {
        const bool branch_taken_0x2f1118 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1118u;
        // 0x2f111c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1118) {
            ctx->pc = 0x2F1128u;
            goto label_2f1128;
        }
    }
    ctx->pc = 0x2F1120u;
    // 0x2f1120: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1120u;
    {
        const bool branch_taken_0x2f1120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1120u;
        // 0x2f1124: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1120) {
            ctx->pc = 0x2F1130u;
            goto label_2f1130;
        }
    }
    ctx->pc = 0x2F1128u;
label_2f1128:
    // 0x2f1128: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f112c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1130:
    // 0x2f1130: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1134: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1138:
    // 0x2f1138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f113c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F113Cu;
    SET_GPR_U32(ctx, 31, 0x2F1144u);
    ctx->pc = 0x2F1140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F113Cu;
    // 0x2f1140: 0x24a50ec0  addiu       $a1, $a1, 0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F113Cu, 0x2F1144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1144u;
label_2f1144:
    // 0x2f1144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1148: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1148u;
    {
        const bool branch_taken_0x2f1148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1148) {
            ctx->pc = 0x2F114Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1148u;
            // 0x2f114c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1170u;
            goto label_2f1170;
        }
    }
    ctx->pc = 0x2F1150u;
    // 0x2f1150: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1150u;
    {
        const bool branch_taken_0x2f1150 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1150u;
        // 0x2f1154: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1150) {
            ctx->pc = 0x2F1160u;
            goto label_2f1160;
        }
    }
    ctx->pc = 0x2F1158u;
    // 0x2f1158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1158u;
    {
        const bool branch_taken_0x2f1158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1158u;
        // 0x2f115c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1158) {
            ctx->pc = 0x2F1168u;
            goto label_2f1168;
        }
    }
    ctx->pc = 0x2F1160u;
label_2f1160:
    // 0x2f1160: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1164: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1168:
    // 0x2f1168: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f116c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f116cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1170:
    // 0x2f1170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1174: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1174u;
    SET_GPR_U32(ctx, 31, 0x2F117Cu);
    ctx->pc = 0x2F1178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1174u;
    // 0x2f1178: 0x24a50ed0  addiu       $a1, $a1, 0xED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1174u, 0x2F117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F117Cu;
label_2f117c:
    // 0x2f117c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f117cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1180: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1180u;
    {
        const bool branch_taken_0x2f1180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1180) {
            ctx->pc = 0x2F1184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1180u;
            // 0x2f1184: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F11A8u;
            goto label_2f11a8;
        }
    }
    ctx->pc = 0x2F1188u;
    // 0x2f1188: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1188u;
    {
        const bool branch_taken_0x2f1188 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1188u;
        // 0x2f118c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1188) {
            ctx->pc = 0x2F1198u;
            goto label_2f1198;
        }
    }
    ctx->pc = 0x2F1190u;
    // 0x2f1190: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1190u;
    {
        const bool branch_taken_0x2f1190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1190u;
        // 0x2f1194: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1190) {
            ctx->pc = 0x2F11A0u;
            goto label_2f11a0;
        }
    }
    ctx->pc = 0x2F1198u;
label_2f1198:
    // 0x2f1198: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f119c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f11a0:
    // 0x2f11a0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f11a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f11a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f11a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f11a8:
    // 0x2f11a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f11a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11ac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F11ACu;
    SET_GPR_U32(ctx, 31, 0x2F11B4u);
    ctx->pc = 0x2F11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11ACu;
    // 0x2f11b0: 0x24a50ee0  addiu       $a1, $a1, 0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F11ACu, 0x2F11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F11B4u;
label_2f11b4:
    // 0x2f11b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f11b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11b8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F11B8u;
    {
        const bool branch_taken_0x2f11b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f11b8) {
            ctx->pc = 0x2F11BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F11B8u;
            // 0x2f11bc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F11E0u;
            goto label_2f11e0;
        }
    }
    ctx->pc = 0x2F11C0u;
    // 0x2f11c0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F11C0u;
    {
        const bool branch_taken_0x2f11c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11C0u;
        // 0x2f11c4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11c0) {
            ctx->pc = 0x2F11D0u;
            goto label_2f11d0;
        }
    }
    ctx->pc = 0x2F11C8u;
    // 0x2f11c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F11C8u;
    {
        const bool branch_taken_0x2f11c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11C8u;
        // 0x2f11cc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11c8) {
            ctx->pc = 0x2F11D8u;
            goto label_2f11d8;
        }
    }
    ctx->pc = 0x2F11D0u;
label_2f11d0:
    // 0x2f11d0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f11d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f11d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f11d8:
    // 0x2f11d8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f11dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f11dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f11e0:
    // 0x2f11e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f11e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11e4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F11E4u;
    SET_GPR_U32(ctx, 31, 0x2F11ECu);
    ctx->pc = 0x2F11E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11E4u;
    // 0x2f11e8: 0x24a50ef0  addiu       $a1, $a1, 0xEF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F11E4u, 0x2F11ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F11ECu;
label_2f11ec:
    // 0x2f11ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f11ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11f0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F11F0u;
    {
        const bool branch_taken_0x2f11f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f11f0) {
            ctx->pc = 0x2F11F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F11F0u;
            // 0x2f11f4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1218u;
            goto label_2f1218;
        }
    }
    ctx->pc = 0x2F11F8u;
    // 0x2f11f8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F11F8u;
    {
        const bool branch_taken_0x2f11f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11F8u;
        // 0x2f11fc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11f8) {
            ctx->pc = 0x2F1208u;
            goto label_2f1208;
        }
    }
    ctx->pc = 0x2F1200u;
    // 0x2f1200: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1200u;
    {
        const bool branch_taken_0x2f1200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1200u;
        // 0x2f1204: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1200) {
            ctx->pc = 0x2F1210u;
            goto label_2f1210;
        }
    }
    ctx->pc = 0x2F1208u;
label_2f1208:
    // 0x2f1208: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f120c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1210:
    // 0x2f1210: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1214: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1218:
    // 0x2f1218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f121c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F121Cu;
    SET_GPR_U32(ctx, 31, 0x2F1224u);
    ctx->pc = 0x2F1220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F121Cu;
    // 0x2f1220: 0x24a50f00  addiu       $a1, $a1, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F121Cu, 0x2F1224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1224u;
label_2f1224:
    // 0x2f1224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1228: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1228u;
    {
        const bool branch_taken_0x2f1228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1228) {
            ctx->pc = 0x2F122Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1228u;
            // 0x2f122c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1250u;
            goto label_2f1250;
        }
    }
    ctx->pc = 0x2F1230u;
    // 0x2f1230: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1230u;
    {
        const bool branch_taken_0x2f1230 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1230u;
        // 0x2f1234: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1230) {
            ctx->pc = 0x2F1240u;
            goto label_2f1240;
        }
    }
    ctx->pc = 0x2F1238u;
    // 0x2f1238: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1238u;
    {
        const bool branch_taken_0x2f1238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1238u;
        // 0x2f123c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1238) {
            ctx->pc = 0x2F1248u;
            goto label_2f1248;
        }
    }
    ctx->pc = 0x2F1240u;
label_2f1240:
    // 0x2f1240: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1244: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1248:
    // 0x2f1248: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f124c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f124cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1250:
    // 0x2f1250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1254: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1254u;
    SET_GPR_U32(ctx, 31, 0x2F125Cu);
    ctx->pc = 0x2F1258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1254u;
    // 0x2f1258: 0x24a50f18  addiu       $a1, $a1, 0xF18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1254u, 0x2F125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F125Cu;
label_2f125c:
    // 0x2f125c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f125cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1260: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1260u;
    {
        const bool branch_taken_0x2f1260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1260) {
            ctx->pc = 0x2F1264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1260u;
            // 0x2f1264: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1288u;
            goto label_2f1288;
        }
    }
    ctx->pc = 0x2F1268u;
    // 0x2f1268: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1268u;
    {
        const bool branch_taken_0x2f1268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1268u;
        // 0x2f126c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1268) {
            ctx->pc = 0x2F1278u;
            goto label_2f1278;
        }
    }
    ctx->pc = 0x2F1270u;
    // 0x2f1270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1270u;
    {
        const bool branch_taken_0x2f1270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1270u;
        // 0x2f1274: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1270) {
            ctx->pc = 0x2F1280u;
            goto label_2f1280;
        }
    }
    ctx->pc = 0x2F1278u;
label_2f1278:
    // 0x2f1278: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f127c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f127cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1280:
    // 0x2f1280: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1284: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1288:
    // 0x2f1288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f128c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F128Cu;
    SET_GPR_U32(ctx, 31, 0x2F1294u);
    ctx->pc = 0x2F1290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F128Cu;
    // 0x2f1290: 0x24a50f28  addiu       $a1, $a1, 0xF28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F128Cu, 0x2F1294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1294u;
label_2f1294:
    // 0x2f1294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1298: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1298u;
    {
        const bool branch_taken_0x2f1298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1298) {
            ctx->pc = 0x2F129Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1298u;
            // 0x2f129c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F12C0u;
            goto label_2f12c0;
        }
    }
    ctx->pc = 0x2F12A0u;
    // 0x2f12a0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F12A0u;
    {
        const bool branch_taken_0x2f12a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12A0u;
        // 0x2f12a4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12a0) {
            ctx->pc = 0x2F12B0u;
            goto label_2f12b0;
        }
    }
    ctx->pc = 0x2F12A8u;
    // 0x2f12a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F12A8u;
    {
        const bool branch_taken_0x2f12a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12A8u;
        // 0x2f12ac: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12a8) {
            ctx->pc = 0x2F12B8u;
            goto label_2f12b8;
        }
    }
    ctx->pc = 0x2F12B0u;
label_2f12b0:
    // 0x2f12b0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f12b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f12b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f12b8:
    // 0x2f12b8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f12bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f12bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f12c0:
    // 0x2f12c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f12c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12c4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F12C4u;
    SET_GPR_U32(ctx, 31, 0x2F12CCu);
    ctx->pc = 0x2F12C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12C4u;
    // 0x2f12c8: 0x24a50f38  addiu       $a1, $a1, 0xF38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F12C4u, 0x2F12CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12CCu;
label_2f12cc:
    // 0x2f12cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f12ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12d0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F12D0u;
    {
        const bool branch_taken_0x2f12d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f12d0) {
            ctx->pc = 0x2F12D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F12D0u;
            // 0x2f12d4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F12F8u;
            goto label_2f12f8;
        }
    }
    ctx->pc = 0x2F12D8u;
    // 0x2f12d8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F12D8u;
    {
        const bool branch_taken_0x2f12d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12D8u;
        // 0x2f12dc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12d8) {
            ctx->pc = 0x2F12E8u;
            goto label_2f12e8;
        }
    }
    ctx->pc = 0x2F12E0u;
    // 0x2f12e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F12E0u;
    {
        const bool branch_taken_0x2f12e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12E0u;
        // 0x2f12e4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12e0) {
            ctx->pc = 0x2F12F0u;
            goto label_2f12f0;
        }
    }
    ctx->pc = 0x2F12E8u;
label_2f12e8:
    // 0x2f12e8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f12ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f12ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f12f0:
    // 0x2f12f0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f12f4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f12f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f12f8:
    // 0x2f12f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f12f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12fc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F12FCu;
    SET_GPR_U32(ctx, 31, 0x2F1304u);
    ctx->pc = 0x2F1300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12FCu;
    // 0x2f1300: 0x24a50f50  addiu       $a1, $a1, 0xF50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F12FCu, 0x2F1304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1304u;
label_2f1304:
    // 0x2f1304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1308: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1308u;
    {
        const bool branch_taken_0x2f1308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1308) {
            ctx->pc = 0x2F130Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1308u;
            // 0x2f130c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1330u;
            goto label_2f1330;
        }
    }
    ctx->pc = 0x2F1310u;
    // 0x2f1310: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1310u;
    {
        const bool branch_taken_0x2f1310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1310u;
        // 0x2f1314: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1310) {
            ctx->pc = 0x2F1320u;
            goto label_2f1320;
        }
    }
    ctx->pc = 0x2F1318u;
    // 0x2f1318: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1318u;
    {
        const bool branch_taken_0x2f1318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1318u;
        // 0x2f131c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1318) {
            ctx->pc = 0x2F1328u;
            goto label_2f1328;
        }
    }
    ctx->pc = 0x2F1320u;
label_2f1320:
    // 0x2f1320: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1324: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1328:
    // 0x2f1328: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f132c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f132cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1330:
    // 0x2f1330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1334: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1334u;
    SET_GPR_U32(ctx, 31, 0x2F133Cu);
    ctx->pc = 0x2F1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1334u;
    // 0x2f1338: 0x24a50f68  addiu       $a1, $a1, 0xF68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1334u, 0x2F133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F133Cu;
label_2f133c:
    // 0x2f133c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1340: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1340u;
    {
        const bool branch_taken_0x2f1340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1340) {
            ctx->pc = 0x2F1344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1340u;
            // 0x2f1344: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1368u;
            goto label_2f1368;
        }
    }
    ctx->pc = 0x2F1348u;
    // 0x2f1348: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1348u;
    {
        const bool branch_taken_0x2f1348 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1348u;
        // 0x2f134c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1348) {
            ctx->pc = 0x2F1358u;
            goto label_2f1358;
        }
    }
    ctx->pc = 0x2F1350u;
    // 0x2f1350: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1350u;
    {
        const bool branch_taken_0x2f1350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1350u;
        // 0x2f1354: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1350) {
            ctx->pc = 0x2F1360u;
            goto label_2f1360;
        }
    }
    ctx->pc = 0x2F1358u;
label_2f1358:
    // 0x2f1358: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f135c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1360:
    // 0x2f1360: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1364: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1368:
    // 0x2f1368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f136c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F136Cu;
    SET_GPR_U32(ctx, 31, 0x2F1374u);
    ctx->pc = 0x2F1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F136Cu;
    // 0x2f1370: 0x24a50f78  addiu       $a1, $a1, 0xF78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F136Cu, 0x2F1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1374u;
label_2f1374:
    // 0x2f1374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1378: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1378u;
    {
        const bool branch_taken_0x2f1378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1378) {
            ctx->pc = 0x2F137Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1378u;
            // 0x2f137c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F13A0u;
            goto label_2f13a0;
        }
    }
    ctx->pc = 0x2F1380u;
    // 0x2f1380: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1380u;
    {
        const bool branch_taken_0x2f1380 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1380u;
        // 0x2f1384: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1380) {
            ctx->pc = 0x2F1390u;
            goto label_2f1390;
        }
    }
    ctx->pc = 0x2F1388u;
    // 0x2f1388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1388u;
    {
        const bool branch_taken_0x2f1388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1388u;
        // 0x2f138c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1388) {
            ctx->pc = 0x2F1398u;
            goto label_2f1398;
        }
    }
    ctx->pc = 0x2F1390u;
label_2f1390:
    // 0x2f1390: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1394: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1398:
    // 0x2f1398: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f139c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f139cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f13a0:
    // 0x2f13a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f13a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13a4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F13A4u;
    SET_GPR_U32(ctx, 31, 0x2F13ACu);
    ctx->pc = 0x2F13A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13A4u;
    // 0x2f13a8: 0x24a50f88  addiu       $a1, $a1, 0xF88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F13A4u, 0x2F13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F13ACu;
label_2f13ac:
    // 0x2f13ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f13acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13b0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F13B0u;
    {
        const bool branch_taken_0x2f13b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13B0u;
        // 0x2f13b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13b0) {
            ctx->pc = 0x2F13D8u;
            goto label_2f13d8;
        }
    }
    ctx->pc = 0x2F13B8u;
    // 0x2f13b8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F13B8u;
    {
        const bool branch_taken_0x2f13b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13B8u;
        // 0x2f13bc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13b8) {
            ctx->pc = 0x2F13C8u;
            goto label_2f13c8;
        }
    }
    ctx->pc = 0x2F13C0u;
    // 0x2f13c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F13C0u;
    {
        const bool branch_taken_0x2f13c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F13C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13C0u;
        // 0x2f13c4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13c0) {
            ctx->pc = 0x2F13D0u;
            goto label_2f13d0;
        }
    }
    ctx->pc = 0x2F13C8u;
label_2f13c8:
    // 0x2f13c8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f13c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f13cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f13ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f13d0:
    // 0x2f13d0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f13d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f13d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f13d8:
    // 0x2f13d8: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2f13d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x2f13dc: 0x2413efff  addiu       $s3, $zero, -0x1001
    ctx->pc = 0x2f13dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f13e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f13e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f13e4: 0x0  nop
    ctx->pc = 0x2f13e4u;
    // NOP
label_2f13e8:
    // 0x2f13e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f13e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f13ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13f0: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2F13F0u;
    SET_GPR_U32(ctx, 31, 0x2F13F8u);
    ctx->pc = 0x2F13F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13F0u;
    // 0x2f13f4: 0x26850fa0  addiu       $a1, $s4, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2F13F0u, 0x2F13F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F13F8u;
label_2f13f8:
    // 0x2f13f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f13f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13fc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F13FCu;
    SET_GPR_U32(ctx, 31, 0x2F1404u);
    ctx->pc = 0x2F1400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13FCu;
    // 0x2f1400: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F13FCu, 0x2F1404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1404u;
label_2f1404:
    // 0x2f1404: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f1404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1408: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1408u;
    {
        const bool branch_taken_0x2f1408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1408u;
        // 0x2f140c: 0x2a040004  slti        $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1408) {
            ctx->pc = 0x2F1428u;
            goto label_2f1428;
        }
    }
    ctx->pc = 0x2F1410u;
    // 0x2f1410: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1410u;
    {
        const bool branch_taken_0x2f1410 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1410u;
        // 0x2f1414: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1410) {
            ctx->pc = 0x2F1420u;
            goto label_2f1420;
        }
    }
    ctx->pc = 0x2F1418u;
    // 0x2f1418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1418u;
    {
        const bool branch_taken_0x2f1418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1418u;
        // 0x2f141c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1418) {
            ctx->pc = 0x2F1424u;
            goto label_2f1424;
        }
    }
    ctx->pc = 0x2F1420u;
label_2f1420:
    // 0x2f1420: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2f1420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_2f1424:
    // 0x2f1424: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2f1424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2f1428:
    // 0x2f1428: 0x5480ffef  bnel        $a0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2F1428u;
    {
        const bool branch_taken_0x2f1428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1428) {
            ctx->pc = 0x2F142Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1428u;
            // 0x2f142c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F13E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f13e8;
        }
    }
    ctx->pc = 0x2F1430u;
    // 0x2f1430: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x2F1430u;
    {
        const bool branch_taken_0x2f1430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1430u;
        // 0x2f1434: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1430) {
            ctx->pc = 0x2F1B10u;
            goto label_2f1b10;
        }
    }
    ctx->pc = 0x2F1438u;
label_2f1438:
    // 0x2f1438: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f143c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f143cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1440: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1440u;
    SET_GPR_U32(ctx, 31, 0x2F1448u);
    ctx->pc = 0x2F1444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1440u;
    // 0x2f1444: 0x24a50fb8  addiu       $a1, $a1, 0xFB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1440u, 0x2F1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1448u;
label_2f1448:
    // 0x2f1448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f144c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2F144Cu;
    {
        const bool branch_taken_0x2f144c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f144c) {
            ctx->pc = 0x2F1450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F144Cu;
            // 0x2f1450: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1478u;
            goto label_2f1478;
        }
    }
    ctx->pc = 0x2F1454u;
    // 0x2f1454: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1454u;
    {
        const bool branch_taken_0x2f1454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1454u;
        // 0x2f1458: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1454) {
            ctx->pc = 0x2F1468u;
            goto label_2f1468;
        }
    }
    ctx->pc = 0x2F145Cu;
    // 0x2f145c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F145Cu;
    {
        const bool branch_taken_0x2f145c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F145Cu;
        // 0x2f1460: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f145c) {
            ctx->pc = 0x2F1470u;
            goto label_2f1470;
        }
    }
    ctx->pc = 0x2F1464u;
    // 0x2f1464: 0x0  nop
    ctx->pc = 0x2f1464u;
    // NOP
label_2f1468:
    // 0x2f1468: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f146c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1470:
    // 0x2f1470: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1474: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1478:
    // 0x2f1478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f147c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F147Cu;
    SET_GPR_U32(ctx, 31, 0x2F1484u);
    ctx->pc = 0x2F1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F147Cu;
    // 0x2f1480: 0x24a50fc8  addiu       $a1, $a1, 0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F147Cu, 0x2F1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1484u;
label_2f1484:
    // 0x2f1484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1488: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1488u;
    {
        const bool branch_taken_0x2f1488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1488) {
            ctx->pc = 0x2F148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1488u;
            // 0x2f148c: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F14B0u;
            goto label_2f14b0;
        }
    }
    ctx->pc = 0x2F1490u;
    // 0x2f1490: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1490u;
    {
        const bool branch_taken_0x2f1490 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1490u;
        // 0x2f1494: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1490) {
            ctx->pc = 0x2F14A0u;
            goto label_2f14a0;
        }
    }
    ctx->pc = 0x2F1498u;
    // 0x2f1498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1498u;
    {
        const bool branch_taken_0x2f1498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1498u;
        // 0x2f149c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1498) {
            ctx->pc = 0x2F14A8u;
            goto label_2f14a8;
        }
    }
    ctx->pc = 0x2F14A0u;
label_2f14a0:
    // 0x2f14a0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f14a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f14a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f14a8:
    // 0x2f14a8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f14a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f14ac: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2f14acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2f14b0:
    // 0x2f14b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f14b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14b4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F14B4u;
    SET_GPR_U32(ctx, 31, 0x2F14BCu);
    ctx->pc = 0x2F14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14B4u;
    // 0x2f14b8: 0x24a54af0  addiu       $a1, $a1, 0x4AF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F14B4u, 0x2F14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14BCu;
label_2f14bc:
    // 0x2f14bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f14bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14c0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F14C0u;
    {
        const bool branch_taken_0x2f14c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f14c0) {
            ctx->pc = 0x2F14C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F14C0u;
            // 0x2f14c4: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F14E8u;
            goto label_2f14e8;
        }
    }
    ctx->pc = 0x2F14C8u;
    // 0x2f14c8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F14C8u;
    {
        const bool branch_taken_0x2f14c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14C8u;
        // 0x2f14cc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14c8) {
            ctx->pc = 0x2F14D8u;
            goto label_2f14d8;
        }
    }
    ctx->pc = 0x2F14D0u;
    // 0x2f14d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F14D0u;
    {
        const bool branch_taken_0x2f14d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14D0u;
        // 0x2f14d4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14d0) {
            ctx->pc = 0x2F14E0u;
            goto label_2f14e0;
        }
    }
    ctx->pc = 0x2F14D8u;
label_2f14d8:
    // 0x2f14d8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f14dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f14dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f14e0:
    // 0x2f14e0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f14e4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2f14e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2f14e8:
    // 0x2f14e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f14e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14ec: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F14ECu;
    SET_GPR_U32(ctx, 31, 0x2F14F4u);
    ctx->pc = 0x2F14F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14ECu;
    // 0x2f14f0: 0x24a54af8  addiu       $a1, $a1, 0x4AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F14ECu, 0x2F14F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14F4u;
label_2f14f4:
    // 0x2f14f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f14f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14f8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F14F8u;
    {
        const bool branch_taken_0x2f14f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f14f8) {
            ctx->pc = 0x2F14FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F14F8u;
            // 0x2f14fc: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1520u;
            goto label_2f1520;
        }
    }
    ctx->pc = 0x2F1500u;
    // 0x2f1500: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1500u;
    {
        const bool branch_taken_0x2f1500 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1500u;
        // 0x2f1504: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1500) {
            ctx->pc = 0x2F1510u;
            goto label_2f1510;
        }
    }
    ctx->pc = 0x2F1508u;
    // 0x2f1508: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1508u;
    {
        const bool branch_taken_0x2f1508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1508u;
        // 0x2f150c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1508) {
            ctx->pc = 0x2F1518u;
            goto label_2f1518;
        }
    }
    ctx->pc = 0x2F1510u;
label_2f1510:
    // 0x2f1510: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1514: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1518:
    // 0x2f1518: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f151c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2f151cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2f1520:
    // 0x2f1520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1524: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1524u;
    SET_GPR_U32(ctx, 31, 0x2F152Cu);
    ctx->pc = 0x2F1528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1524u;
    // 0x2f1528: 0x24a54b00  addiu       $a1, $a1, 0x4B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1524u, 0x2F152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F152Cu;
label_2f152c:
    // 0x2f152c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f152cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1530: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1530u;
    {
        const bool branch_taken_0x2f1530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1530) {
            ctx->pc = 0x2F1534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1530u;
            // 0x2f1534: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1558u;
            goto label_2f1558;
        }
    }
    ctx->pc = 0x2F1538u;
    // 0x2f1538: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1538u;
    {
        const bool branch_taken_0x2f1538 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1538u;
        // 0x2f153c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1538) {
            ctx->pc = 0x2F1548u;
            goto label_2f1548;
        }
    }
    ctx->pc = 0x2F1540u;
    // 0x2f1540: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1540u;
    {
        const bool branch_taken_0x2f1540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1540u;
        // 0x2f1544: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1540) {
            ctx->pc = 0x2F1550u;
            goto label_2f1550;
        }
    }
    ctx->pc = 0x2F1548u;
label_2f1548:
    // 0x2f1548: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f154c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1550:
    // 0x2f1550: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1554: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2f1554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_2f1558:
    // 0x2f1558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f155c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F155Cu;
    SET_GPR_U32(ctx, 31, 0x2F1564u);
    ctx->pc = 0x2F1560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F155Cu;
    // 0x2f1560: 0x24a54b08  addiu       $a1, $a1, 0x4B08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F155Cu, 0x2F1564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1564u;
label_2f1564:
    // 0x2f1564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1568: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1568u;
    {
        const bool branch_taken_0x2f1568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1568) {
            ctx->pc = 0x2F156Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1568u;
            // 0x2f156c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1590u;
            goto label_2f1590;
        }
    }
    ctx->pc = 0x2F1570u;
    // 0x2f1570: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1570u;
    {
        const bool branch_taken_0x2f1570 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1570u;
        // 0x2f1574: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1570) {
            ctx->pc = 0x2F1580u;
            goto label_2f1580;
        }
    }
    ctx->pc = 0x2F1578u;
    // 0x2f1578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1578u;
    {
        const bool branch_taken_0x2f1578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1578u;
        // 0x2f157c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1578) {
            ctx->pc = 0x2F1588u;
            goto label_2f1588;
        }
    }
    ctx->pc = 0x2F1580u;
label_2f1580:
    // 0x2f1580: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1584: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1588:
    // 0x2f1588: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f158c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f158cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1590:
    // 0x2f1590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1594: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1594u;
    SET_GPR_U32(ctx, 31, 0x2F159Cu);
    ctx->pc = 0x2F1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1594u;
    // 0x2f1598: 0x24a50fe0  addiu       $a1, $a1, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1594u, 0x2F159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F159Cu;
label_2f159c:
    // 0x2f159c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f159cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15a0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F15A0u;
    {
        const bool branch_taken_0x2f15a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f15a0) {
            ctx->pc = 0x2F15A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F15A0u;
            // 0x2f15a4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F15C8u;
            goto label_2f15c8;
        }
    }
    ctx->pc = 0x2F15A8u;
    // 0x2f15a8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F15A8u;
    {
        const bool branch_taken_0x2f15a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15A8u;
        // 0x2f15ac: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15a8) {
            ctx->pc = 0x2F15B8u;
            goto label_2f15b8;
        }
    }
    ctx->pc = 0x2F15B0u;
    // 0x2f15b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F15B0u;
    {
        const bool branch_taken_0x2f15b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15B0u;
        // 0x2f15b4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15b0) {
            ctx->pc = 0x2F15C0u;
            goto label_2f15c0;
        }
    }
    ctx->pc = 0x2F15B8u;
label_2f15b8:
    // 0x2f15b8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f15bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f15bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f15c0:
    // 0x2f15c0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f15c4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f15c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f15c8:
    // 0x2f15c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f15c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15cc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F15CCu;
    SET_GPR_U32(ctx, 31, 0x2F15D4u);
    ctx->pc = 0x2F15D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15CCu;
    // 0x2f15d0: 0x24a50ff0  addiu       $a1, $a1, 0xFF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F15CCu, 0x2F15D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F15D4u;
label_2f15d4:
    // 0x2f15d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f15d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15d8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F15D8u;
    {
        const bool branch_taken_0x2f15d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f15d8) {
            ctx->pc = 0x2F15DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F15D8u;
            // 0x2f15dc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1600u;
            goto label_2f1600;
        }
    }
    ctx->pc = 0x2F15E0u;
    // 0x2f15e0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F15E0u;
    {
        const bool branch_taken_0x2f15e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15E0u;
        // 0x2f15e4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15e0) {
            ctx->pc = 0x2F15F0u;
            goto label_2f15f0;
        }
    }
    ctx->pc = 0x2F15E8u;
    // 0x2f15e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F15E8u;
    {
        const bool branch_taken_0x2f15e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15E8u;
        // 0x2f15ec: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f15e8) {
            ctx->pc = 0x2F15F8u;
            goto label_2f15f8;
        }
    }
    ctx->pc = 0x2F15F0u;
label_2f15f0:
    // 0x2f15f0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f15f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f15f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f15f8:
    // 0x2f15f8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f15fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f15fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1600:
    // 0x2f1600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1604: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1604u;
    SET_GPR_U32(ctx, 31, 0x2F160Cu);
    ctx->pc = 0x2F1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1604u;
    // 0x2f1608: 0x24a51000  addiu       $a1, $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1604u, 0x2F160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F160Cu;
label_2f160c:
    // 0x2f160c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f160cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1610: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1610u;
    {
        const bool branch_taken_0x2f1610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1610) {
            ctx->pc = 0x2F1614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1610u;
            // 0x2f1614: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1638u;
            goto label_2f1638;
        }
    }
    ctx->pc = 0x2F1618u;
    // 0x2f1618: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1618u;
    {
        const bool branch_taken_0x2f1618 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1618u;
        // 0x2f161c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1618) {
            ctx->pc = 0x2F1628u;
            goto label_2f1628;
        }
    }
    ctx->pc = 0x2F1620u;
    // 0x2f1620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1620u;
    {
        const bool branch_taken_0x2f1620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1620u;
        // 0x2f1624: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1620) {
            ctx->pc = 0x2F1630u;
            goto label_2f1630;
        }
    }
    ctx->pc = 0x2F1628u;
label_2f1628:
    // 0x2f1628: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f162c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f162cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1630:
    // 0x2f1630: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1634: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1638:
    // 0x2f1638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f163c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F163Cu;
    SET_GPR_U32(ctx, 31, 0x2F1644u);
    ctx->pc = 0x2F1640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F163Cu;
    // 0x2f1640: 0x24a51010  addiu       $a1, $a1, 0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F163Cu, 0x2F1644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1644u;
label_2f1644:
    // 0x2f1644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1648: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1648u;
    {
        const bool branch_taken_0x2f1648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1648) {
            ctx->pc = 0x2F164Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1648u;
            // 0x2f164c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1670u;
            goto label_2f1670;
        }
    }
    ctx->pc = 0x2F1650u;
    // 0x2f1650: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1650u;
    {
        const bool branch_taken_0x2f1650 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1650u;
        // 0x2f1654: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1650) {
            ctx->pc = 0x2F1660u;
            goto label_2f1660;
        }
    }
    ctx->pc = 0x2F1658u;
    // 0x2f1658: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1658u;
    {
        const bool branch_taken_0x2f1658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1658u;
        // 0x2f165c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1658) {
            ctx->pc = 0x2F1668u;
            goto label_2f1668;
        }
    }
    ctx->pc = 0x2F1660u;
label_2f1660:
    // 0x2f1660: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1664: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1668:
    // 0x2f1668: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f166c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f166cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1670:
    // 0x2f1670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1674: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1674u;
    SET_GPR_U32(ctx, 31, 0x2F167Cu);
    ctx->pc = 0x2F1678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1674u;
    // 0x2f1678: 0x24a51020  addiu       $a1, $a1, 0x1020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1674u, 0x2F167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F167Cu;
label_2f167c:
    // 0x2f167c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1680: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1680u;
    {
        const bool branch_taken_0x2f1680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1680) {
            ctx->pc = 0x2F1684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1680u;
            // 0x2f1684: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F16A8u;
            goto label_2f16a8;
        }
    }
    ctx->pc = 0x2F1688u;
    // 0x2f1688: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1688u;
    {
        const bool branch_taken_0x2f1688 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1688u;
        // 0x2f168c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1688) {
            ctx->pc = 0x2F1698u;
            goto label_2f1698;
        }
    }
    ctx->pc = 0x2F1690u;
    // 0x2f1690: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1690u;
    {
        const bool branch_taken_0x2f1690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1690u;
        // 0x2f1694: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1690) {
            ctx->pc = 0x2F16A0u;
            goto label_2f16a0;
        }
    }
    ctx->pc = 0x2F1698u;
label_2f1698:
    // 0x2f1698: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f169c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f169cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f16a0:
    // 0x2f16a0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f16a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f16a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f16a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f16a8:
    // 0x2f16a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f16a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16ac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F16ACu;
    SET_GPR_U32(ctx, 31, 0x2F16B4u);
    ctx->pc = 0x2F16B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16ACu;
    // 0x2f16b0: 0x24a51038  addiu       $a1, $a1, 0x1038 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F16ACu, 0x2F16B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F16B4u;
label_2f16b4:
    // 0x2f16b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f16b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16b8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F16B8u;
    {
        const bool branch_taken_0x2f16b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f16b8) {
            ctx->pc = 0x2F16BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F16B8u;
            // 0x2f16bc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F16E0u;
            goto label_2f16e0;
        }
    }
    ctx->pc = 0x2F16C0u;
    // 0x2f16c0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F16C0u;
    {
        const bool branch_taken_0x2f16c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16C0u;
        // 0x2f16c4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f16c0) {
            ctx->pc = 0x2F16D0u;
            goto label_2f16d0;
        }
    }
    ctx->pc = 0x2F16C8u;
    // 0x2f16c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F16C8u;
    {
        const bool branch_taken_0x2f16c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16C8u;
        // 0x2f16cc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f16c8) {
            ctx->pc = 0x2F16D8u;
            goto label_2f16d8;
        }
    }
    ctx->pc = 0x2F16D0u;
label_2f16d0:
    // 0x2f16d0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f16d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f16d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f16d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f16d8:
    // 0x2f16d8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f16dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f16dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f16e0:
    // 0x2f16e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f16e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16e4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F16E4u;
    SET_GPR_U32(ctx, 31, 0x2F16ECu);
    ctx->pc = 0x2F16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16E4u;
    // 0x2f16e8: 0x24a51048  addiu       $a1, $a1, 0x1048 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F16E4u, 0x2F16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F16ECu;
label_2f16ec:
    // 0x2f16ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f16ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16f0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F16F0u;
    {
        const bool branch_taken_0x2f16f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f16f0) {
            ctx->pc = 0x2F16F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F16F0u;
            // 0x2f16f4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1718u;
            goto label_2f1718;
        }
    }
    ctx->pc = 0x2F16F8u;
    // 0x2f16f8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F16F8u;
    {
        const bool branch_taken_0x2f16f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F16F8u;
        // 0x2f16fc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f16f8) {
            ctx->pc = 0x2F1708u;
            goto label_2f1708;
        }
    }
    ctx->pc = 0x2F1700u;
    // 0x2f1700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1700u;
    {
        const bool branch_taken_0x2f1700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1700u;
        // 0x2f1704: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1700) {
            ctx->pc = 0x2F1710u;
            goto label_2f1710;
        }
    }
    ctx->pc = 0x2F1708u;
label_2f1708:
    // 0x2f1708: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f170c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1710:
    // 0x2f1710: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1714: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1718:
    // 0x2f1718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f171c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F171Cu;
    SET_GPR_U32(ctx, 31, 0x2F1724u);
    ctx->pc = 0x2F1720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F171Cu;
    // 0x2f1720: 0x24a51058  addiu       $a1, $a1, 0x1058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F171Cu, 0x2F1724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1724u;
label_2f1724:
    // 0x2f1724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1728: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1728u;
    {
        const bool branch_taken_0x2f1728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1728) {
            ctx->pc = 0x2F172Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1728u;
            // 0x2f172c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1750u;
            goto label_2f1750;
        }
    }
    ctx->pc = 0x2F1730u;
    // 0x2f1730: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1730u;
    {
        const bool branch_taken_0x2f1730 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1730u;
        // 0x2f1734: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1730) {
            ctx->pc = 0x2F1740u;
            goto label_2f1740;
        }
    }
    ctx->pc = 0x2F1738u;
    // 0x2f1738: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1738u;
    {
        const bool branch_taken_0x2f1738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1738u;
        // 0x2f173c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1738) {
            ctx->pc = 0x2F1748u;
            goto label_2f1748;
        }
    }
    ctx->pc = 0x2F1740u;
label_2f1740:
    // 0x2f1740: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1744: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1748:
    // 0x2f1748: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f174c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f174cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1750:
    // 0x2f1750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1754: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1754u;
    SET_GPR_U32(ctx, 31, 0x2F175Cu);
    ctx->pc = 0x2F1758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1754u;
    // 0x2f1758: 0x24a51070  addiu       $a1, $a1, 0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1754u, 0x2F175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F175Cu;
label_2f175c:
    // 0x2f175c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f175cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1760: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1760u;
    {
        const bool branch_taken_0x2f1760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1760) {
            ctx->pc = 0x2F1764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1760u;
            // 0x2f1764: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1788u;
            goto label_2f1788;
        }
    }
    ctx->pc = 0x2F1768u;
    // 0x2f1768: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1768u;
    {
        const bool branch_taken_0x2f1768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1768u;
        // 0x2f176c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1768) {
            ctx->pc = 0x2F1778u;
            goto label_2f1778;
        }
    }
    ctx->pc = 0x2F1770u;
    // 0x2f1770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1770u;
    {
        const bool branch_taken_0x2f1770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1770u;
        // 0x2f1774: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1770) {
            ctx->pc = 0x2F1780u;
            goto label_2f1780;
        }
    }
    ctx->pc = 0x2F1778u;
label_2f1778:
    // 0x2f1778: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f177c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1780:
    // 0x2f1780: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f1784: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1788:
    // 0x2f1788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f178c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F178Cu;
    SET_GPR_U32(ctx, 31, 0x2F1794u);
    ctx->pc = 0x2F1790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F178Cu;
    // 0x2f1790: 0x24a51088  addiu       $a1, $a1, 0x1088 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F178Cu, 0x2F1794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1794u;
label_2f1794:
    // 0x2f1794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1798: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1798u;
    {
        const bool branch_taken_0x2f1798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1798) {
            ctx->pc = 0x2F179Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1798u;
            // 0x2f179c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F17C0u;
            goto label_2f17c0;
        }
    }
    ctx->pc = 0x2F17A0u;
    // 0x2f17a0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F17A0u;
    {
        const bool branch_taken_0x2f17a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17A0u;
        // 0x2f17a4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17a0) {
            ctx->pc = 0x2F17B0u;
            goto label_2f17b0;
        }
    }
    ctx->pc = 0x2F17A8u;
    // 0x2f17a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F17A8u;
    {
        const bool branch_taken_0x2f17a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17A8u;
        // 0x2f17ac: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17a8) {
            ctx->pc = 0x2F17B8u;
            goto label_2f17b8;
        }
    }
    ctx->pc = 0x2F17B0u;
label_2f17b0:
    // 0x2f17b0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f17b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f17b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f17b8:
    // 0x2f17b8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f17bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f17bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f17c0:
    // 0x2f17c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f17c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17c4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F17C4u;
    SET_GPR_U32(ctx, 31, 0x2F17CCu);
    ctx->pc = 0x2F17C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F17C4u;
    // 0x2f17c8: 0x24a51098  addiu       $a1, $a1, 0x1098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F17C4u, 0x2F17CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F17CCu;
label_2f17cc:
    // 0x2f17cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f17ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17d0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F17D0u;
    {
        const bool branch_taken_0x2f17d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f17d0) {
            ctx->pc = 0x2F17D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F17D0u;
            // 0x2f17d4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F17F8u;
            goto label_2f17f8;
        }
    }
    ctx->pc = 0x2F17D8u;
    // 0x2f17d8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F17D8u;
    {
        const bool branch_taken_0x2f17d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17D8u;
        // 0x2f17dc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17d8) {
            ctx->pc = 0x2F17E8u;
            goto label_2f17e8;
        }
    }
    ctx->pc = 0x2F17E0u;
    // 0x2f17e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F17E0u;
    {
        const bool branch_taken_0x2f17e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17E0u;
        // 0x2f17e4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f17e0) {
            ctx->pc = 0x2F17F0u;
            goto label_2f17f0;
        }
    }
    ctx->pc = 0x2F17E8u;
label_2f17e8:
    // 0x2f17e8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f17e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f17ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f17ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f17f0:
    // 0x2f17f0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f17f4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f17f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f17f8:
    // 0x2f17f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f17f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17fc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F17FCu;
    SET_GPR_U32(ctx, 31, 0x2F1804u);
    ctx->pc = 0x2F1800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F17FCu;
    // 0x2f1800: 0x24a510a8  addiu       $a1, $a1, 0x10A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F17FCu, 0x2F1804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1804u;
label_2f1804:
    // 0x2f1804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1808: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1808u;
    {
        const bool branch_taken_0x2f1808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1808u;
        // 0x2f180c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1808) {
            ctx->pc = 0x2F1830u;
            goto label_2f1830;
        }
    }
    ctx->pc = 0x2F1810u;
    // 0x2f1810: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1810u;
    {
        const bool branch_taken_0x2f1810 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1810u;
        // 0x2f1814: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1810) {
            ctx->pc = 0x2F1820u;
            goto label_2f1820;
        }
    }
    ctx->pc = 0x2F1818u;
    // 0x2f1818: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1818u;
    {
        const bool branch_taken_0x2f1818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1818u;
        // 0x2f181c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1818) {
            ctx->pc = 0x2F1828u;
            goto label_2f1828;
        }
    }
    ctx->pc = 0x2F1820u;
label_2f1820:
    // 0x2f1820: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2f1820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1824: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1828:
    // 0x2f1828: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f182c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f182cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1830:
    // 0x2f1830: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2f1830u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x2f1834: 0x2413efff  addiu       $s3, $zero, -0x1001
    ctx->pc = 0x2f1834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f1838: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f1838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f183c: 0x0  nop
    ctx->pc = 0x2f183cu;
    // NOP
label_2f1840:
    // 0x2f1840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f1840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1844: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f1844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1848: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2F1848u;
    SET_GPR_U32(ctx, 31, 0x2F1850u);
    ctx->pc = 0x2F184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1848u;
    // 0x2f184c: 0x268510c0  addiu       $a1, $s4, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2F1848u, 0x2F1850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1850u;
label_2f1850:
    // 0x2f1850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1854: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1854u;
    SET_GPR_U32(ctx, 31, 0x2F185Cu);
    ctx->pc = 0x2F1858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1854u;
    // 0x2f1858: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1854u, 0x2F185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F185Cu;
label_2f185c:
    // 0x2f185c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f185cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1860: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1860u;
    {
        const bool branch_taken_0x2f1860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1860u;
        // 0x2f1864: 0x2a040004  slti        $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1860) {
            ctx->pc = 0x2F1880u;
            goto label_2f1880;
        }
    }
    ctx->pc = 0x2F1868u;
    // 0x2f1868: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1868u;
    {
        const bool branch_taken_0x2f1868 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1868u;
        // 0x2f186c: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1868) {
            ctx->pc = 0x2F1878u;
            goto label_2f1878;
        }
    }
    ctx->pc = 0x2F1870u;
    // 0x2f1870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1870u;
    {
        const bool branch_taken_0x2f1870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1870u;
        // 0x2f1874: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1870) {
            ctx->pc = 0x2F187Cu;
            goto label_2f187c;
        }
    }
    ctx->pc = 0x2F1878u;
label_2f1878:
    // 0x2f1878: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2f1878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_2f187c:
    // 0x2f187c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2f187cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2f1880:
    // 0x2f1880: 0x5480ffef  bnel        $a0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2F1880u;
    {
        const bool branch_taken_0x2f1880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1880) {
            ctx->pc = 0x2F1884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1880u;
            // 0x2f1884: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1840;
        }
    }
    ctx->pc = 0x2F1888u;
    // 0x2f1888: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2F1888u;
    {
        const bool branch_taken_0x2f1888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1888u;
        // 0x2f188c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1888) {
            ctx->pc = 0x2F1B10u;
            goto label_2f1b10;
        }
    }
    ctx->pc = 0x2F1890u;
label_2f1890:
    // 0x2f1890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1894: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1894u;
    SET_GPR_U32(ctx, 31, 0x2F189Cu);
    ctx->pc = 0x2F1898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1894u;
    // 0x2f1898: 0x24a510d8  addiu       $a1, $a1, 0x10D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1894u, 0x2F189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F189Cu;
label_2f189c:
    // 0x2f189c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F18A0u;
    {
        const bool branch_taken_0x2f18a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F18A0u;
        // 0x2f18a4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f18a0) {
            ctx->pc = 0x2F18B4u;
            goto label_2f18b4;
        }
    }
    ctx->pc = 0x2F18A8u;
    // 0x2f18a8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f18a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f18ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f18acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f18b0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f18b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f18b4:
    // 0x2f18b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f18b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f18b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f18b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18bc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F18BCu;
    SET_GPR_U32(ctx, 31, 0x2F18C4u);
    ctx->pc = 0x2F18C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F18BCu;
    // 0x2f18c0: 0x24a510e8  addiu       $a1, $a1, 0x10E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F18BCu, 0x2F18C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F18C4u;
label_2f18c4:
    // 0x2f18c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f18c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F18C8u;
    {
        const bool branch_taken_0x2f18c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F18C8u;
        // 0x2f18cc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f18c8) {
            ctx->pc = 0x2F18DCu;
            goto label_2f18dc;
        }
    }
    ctx->pc = 0x2F18D0u;
    // 0x2f18d0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f18d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f18d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f18d8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f18d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f18dc:
    // 0x2f18dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f18dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f18e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f18e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18e4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F18E4u;
    SET_GPR_U32(ctx, 31, 0x2F18ECu);
    ctx->pc = 0x2F18E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F18E4u;
    // 0x2f18e8: 0x24a510f8  addiu       $a1, $a1, 0x10F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F18E4u, 0x2F18ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F18ECu;
label_2f18ec:
    // 0x2f18ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f18ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F18F0u;
    {
        const bool branch_taken_0x2f18f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F18F0u;
        // 0x2f18f4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f18f0) {
            ctx->pc = 0x2F1904u;
            goto label_2f1904;
        }
    }
    ctx->pc = 0x2F18F8u;
    // 0x2f18f8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f18fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f18fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1900: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f1904:
    // 0x2f1904: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f1908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f190c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F190Cu;
    SET_GPR_U32(ctx, 31, 0x2F1914u);
    ctx->pc = 0x2F1910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F190Cu;
    // 0x2f1910: 0x24a51108  addiu       $a1, $a1, 0x1108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F190Cu, 0x2F1914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1914u;
label_2f1914:
    // 0x2f1914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1918: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1918u;
    {
        const bool branch_taken_0x2f1918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1918u;
        // 0x2f191c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1918) {
            ctx->pc = 0x2F192Cu;
            goto label_2f192c;
        }
    }
    ctx->pc = 0x2F1920u;
    // 0x2f1920: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f1924: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1928: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f192c:
    // 0x2f192c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f192cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f1930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1934: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1934u;
    SET_GPR_U32(ctx, 31, 0x2F193Cu);
    ctx->pc = 0x2F1938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1934u;
    // 0x2f1938: 0x24a51118  addiu       $a1, $a1, 0x1118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1934u, 0x2F193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F193Cu;
label_2f193c:
    // 0x2f193c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1940: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1940u;
    {
        const bool branch_taken_0x2f1940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1940u;
        // 0x2f1944: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1940) {
            ctx->pc = 0x2F1954u;
            goto label_2f1954;
        }
    }
    ctx->pc = 0x2F1948u;
    // 0x2f1948: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f194c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f194cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1950: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f1954:
    // 0x2f1954: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f1958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f195c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F195Cu;
    SET_GPR_U32(ctx, 31, 0x2F1964u);
    ctx->pc = 0x2F1960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F195Cu;
    // 0x2f1960: 0x24a51130  addiu       $a1, $a1, 0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F195Cu, 0x2F1964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1964u;
label_2f1964:
    // 0x2f1964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1968: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1968u;
    {
        const bool branch_taken_0x2f1968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1968u;
        // 0x2f196c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1968) {
            ctx->pc = 0x2F197Cu;
            goto label_2f197c;
        }
    }
    ctx->pc = 0x2F1970u;
    // 0x2f1970: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f1974: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1978: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f197c:
    // 0x2f197c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f197cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f1980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1984: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1984u;
    SET_GPR_U32(ctx, 31, 0x2F198Cu);
    ctx->pc = 0x2F1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1984u;
    // 0x2f1988: 0x24a51148  addiu       $a1, $a1, 0x1148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1984u, 0x2F198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F198Cu;
label_2f198c:
    // 0x2f198c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f198cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1990: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1990u;
    {
        const bool branch_taken_0x2f1990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1990u;
        // 0x2f1994: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1990) {
            ctx->pc = 0x2F19A4u;
            goto label_2f19a4;
        }
    }
    ctx->pc = 0x2F1998u;
    // 0x2f1998: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f199c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f19a0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f19a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f19a4:
    // 0x2f19a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f19a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f19a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f19a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19ac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F19ACu;
    SET_GPR_U32(ctx, 31, 0x2F19B4u);
    ctx->pc = 0x2F19B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19ACu;
    // 0x2f19b0: 0x24a51160  addiu       $a1, $a1, 0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F19ACu, 0x2F19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F19B4u;
label_2f19b4:
    // 0x2f19b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f19b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F19B8u;
    {
        const bool branch_taken_0x2f19b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19B8u;
        // 0x2f19bc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19b8) {
            ctx->pc = 0x2F19CCu;
            goto label_2f19cc;
        }
    }
    ctx->pc = 0x2F19C0u;
    // 0x2f19c0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f19c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f19c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f19c8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f19cc:
    // 0x2f19cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f19ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f19d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f19d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19d4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F19D4u;
    SET_GPR_U32(ctx, 31, 0x2F19DCu);
    ctx->pc = 0x2F19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19D4u;
    // 0x2f19d8: 0x24a51178  addiu       $a1, $a1, 0x1178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F19D4u, 0x2F19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F19DCu;
label_2f19dc:
    // 0x2f19dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f19dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F19E0u;
    {
        const bool branch_taken_0x2f19e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19E0u;
        // 0x2f19e4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19e0) {
            ctx->pc = 0x2F19F4u;
            goto label_2f19f4;
        }
    }
    ctx->pc = 0x2F19E8u;
    // 0x2f19e8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f19ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f19ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f19f0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f19f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f19f4:
    // 0x2f19f4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f19f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f19f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f19f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19fc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F19FCu;
    SET_GPR_U32(ctx, 31, 0x2F1A04u);
    ctx->pc = 0x2F1A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19FCu;
    // 0x2f1a00: 0x24a51188  addiu       $a1, $a1, 0x1188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F19FCu, 0x2F1A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A04u;
label_2f1a04:
    // 0x2f1a04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a08: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1A08u;
    {
        const bool branch_taken_0x2f1a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A08u;
        // 0x2f1a0c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a08) {
            ctx->pc = 0x2F1A1Cu;
            goto label_2f1a1c;
        }
    }
    ctx->pc = 0x2F1A10u;
    // 0x2f1a10: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f1a14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1a18: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f1a1c:
    // 0x2f1a1c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f1a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a24: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1A24u;
    SET_GPR_U32(ctx, 31, 0x2F1A2Cu);
    ctx->pc = 0x2F1A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A24u;
    // 0x2f1a28: 0x24a51198  addiu       $a1, $a1, 0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1A24u, 0x2F1A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A2Cu;
label_2f1a2c:
    // 0x2f1a2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a30: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1A30u;
    {
        const bool branch_taken_0x2f1a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A30u;
        // 0x2f1a34: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a30) {
            ctx->pc = 0x2F1A44u;
            goto label_2f1a44;
        }
    }
    ctx->pc = 0x2F1A38u;
    // 0x2f1a38: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f1a3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1a40: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f1a44:
    // 0x2f1a44: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f1a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a4c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1A4Cu;
    SET_GPR_U32(ctx, 31, 0x2F1A54u);
    ctx->pc = 0x2F1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A4Cu;
    // 0x2f1a50: 0x24a511a8  addiu       $a1, $a1, 0x11A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1A4Cu, 0x2F1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A54u;
label_2f1a54:
    // 0x2f1a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1A58u;
    {
        const bool branch_taken_0x2f1a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A58u;
        // 0x2f1a5c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a58) {
            ctx->pc = 0x2F1A6Cu;
            goto label_2f1a6c;
        }
    }
    ctx->pc = 0x2F1A60u;
    // 0x2f1a60: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f1a64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1a68: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f1a6c:
    // 0x2f1a6c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f1a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a74: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1A74u;
    SET_GPR_U32(ctx, 31, 0x2F1A7Cu);
    ctx->pc = 0x2F1A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A74u;
    // 0x2f1a78: 0x24a511b8  addiu       $a1, $a1, 0x11B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1A74u, 0x2F1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A7Cu;
label_2f1a7c:
    // 0x2f1a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1A80u;
    {
        const bool branch_taken_0x2f1a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A80u;
        // 0x2f1a84: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a80) {
            ctx->pc = 0x2F1A94u;
            goto label_2f1a94;
        }
    }
    ctx->pc = 0x2F1A88u;
    // 0x2f1a88: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f1a8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1a90: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f1a94:
    // 0x2f1a94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f1a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a9c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1A9Cu;
    SET_GPR_U32(ctx, 31, 0x2F1AA4u);
    ctx->pc = 0x2F1AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A9Cu;
    // 0x2f1aa0: 0x24a511d0  addiu       $a1, $a1, 0x11D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1A9Cu, 0x2F1AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1AA4u;
label_2f1aa4:
    // 0x2f1aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1aa8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1AA8u;
    {
        const bool branch_taken_0x2f1aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AA8u;
        // 0x2f1aac: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1aa8) {
            ctx->pc = 0x2F1ABCu;
            goto label_2f1abc;
        }
    }
    ctx->pc = 0x2F1AB0u;
    // 0x2f1ab0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f1ab4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1ab8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f1abc:
    // 0x2f1abc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f1ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ac4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1AC4u;
    SET_GPR_U32(ctx, 31, 0x2F1ACCu);
    ctx->pc = 0x2F1AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AC4u;
    // 0x2f1ac8: 0x24a511e8  addiu       $a1, $a1, 0x11E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1AC4u, 0x2F1ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1ACCu;
label_2f1acc:
    // 0x2f1acc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ad0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1AD0u;
    {
        const bool branch_taken_0x2f1ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AD0u;
        // 0x2f1ad4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ad0) {
            ctx->pc = 0x2F1AE4u;
            goto label_2f1ae4;
        }
    }
    ctx->pc = 0x2F1AD8u;
    // 0x2f1ad8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f1adc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1ae0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f1ae4:
    // 0x2f1ae4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f1ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1aec: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1AECu;
    SET_GPR_U32(ctx, 31, 0x2F1AF4u);
    ctx->pc = 0x2F1AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AECu;
    // 0x2f1af0: 0x24a51200  addiu       $a1, $a1, 0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1AECu, 0x2F1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1AF4u;
label_2f1af4:
    // 0x2f1af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1af8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1AF8u;
    {
        const bool branch_taken_0x2f1af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AF8u;
        // 0x2f1afc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1af8) {
            ctx->pc = 0x2F1B0Cu;
            goto label_2f1b0c;
        }
    }
    ctx->pc = 0x2F1B00u;
    // 0x2f1b00: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f1b04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1b08: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f1b0c:
    // 0x2f1b0c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f1b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2f1b10:
    // 0x2f1b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b14: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1B14u;
    SET_GPR_U32(ctx, 31, 0x2F1B1Cu);
    ctx->pc = 0x2F1B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B14u;
    // 0x2f1b18: 0x24a51218  addiu       $a1, $a1, 0x1218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1B14u, 0x2F1B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B1Cu;
label_2f1b1c:
    // 0x2f1b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1B20u;
    {
        const bool branch_taken_0x2f1b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B20u;
        // 0x2f1b24: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1b20) {
            ctx->pc = 0x2F1B34u;
            goto label_2f1b34;
        }
    }
    ctx->pc = 0x2F1B28u;
    // 0x2f1b28: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f1b2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f1b30: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f1b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f1b34:
    // 0x2f1b34: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f1b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1b38: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f1b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f1b3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f1b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1b40: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2f1b40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f1b44: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f1b44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1b48: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2f1b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f1b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B4Cu;
        // 0x2f1b50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1B54u;
    // 0x2f1b54: 0x0  nop
    ctx->pc = 0x2f1b54u;
    // NOP
    ctx->pc = 0x2f1b58u;
}
