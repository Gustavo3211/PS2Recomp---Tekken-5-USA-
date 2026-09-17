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

// Function: sub_0028AA30
// Address: 0x28aa30 - 0x28abc8
void sub_0028AA30_0x28aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AA30_0x28aa30");
#endif

    switch (ctx->pc) {
        case 0x28aa50u: goto label_28aa50;
        case 0x28aa68u: goto label_28aa68;
        case 0x28aa9cu: goto label_28aa9c;
        case 0x28aadcu: goto label_28aadc;
        case 0x28ab08u: goto label_28ab08;
        case 0x28ab3cu: goto label_28ab3c;
        case 0x28ab84u: goto label_28ab84;
        case 0x28aba0u: goto label_28aba0;
        default: break;
    }

    ctx->pc = 0x28aa30u;

    // 0x28aa30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28aa34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28aa38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28aa38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa3c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x28aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x28aa40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28aa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28aa44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28aa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28aa48: 0xc086304  jal         func_218C10
    ctx->pc = 0x28AA48u;
    SET_GPR_U32(ctx, 31, 0x28AA50u);
    ctx->pc = 0x28AA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA48u;
    // 0x28aa4c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x28AA48u, 0x28AA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA50u;
label_28aa50:
    // 0x28aa50: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x28AA50u;
    {
        const bool branch_taken_0x28aa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28aa50) {
            ctx->pc = 0x28AA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AA50u;
            // 0x28aa54: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AA90u;
            goto label_28aa90;
        }
    }
    ctx->pc = 0x28AA58u;
    // 0x28aa58: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28aa58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28aa5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28aa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa60: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28AA60u;
    SET_GPR_U32(ctx, 31, 0x28AA68u);
    ctx->pc = 0x28AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA60u;
    // 0x28aa64: 0x24a599e0  addiu       $a1, $a1, -0x6620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28AA60u, 0x28AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA68u;
label_28aa68:
    // 0x28aa68: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x28AA68u;
    {
        const bool branch_taken_0x28aa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aa68) {
            ctx->pc = 0x28AA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AA68u;
            // 0x28aa6c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AAD0u;
            goto label_28aad0;
        }
    }
    ctx->pc = 0x28AA70u;
    // 0x28aa70: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28aa74: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x28AA74u;
    {
        const bool branch_taken_0x28aa74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aa74) {
            ctx->pc = 0x28AA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AA74u;
            // 0x28aa78: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AAD0u;
            goto label_28aad0;
        }
    }
    ctx->pc = 0x28AA7Cu;
    // 0x28aa7c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28AA7Cu;
    {
        const bool branch_taken_0x28aa7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA7Cu;
        // 0x28aa80: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa7c) {
            ctx->pc = 0x28AAC0u;
            goto label_28aac0;
        }
    }
    ctx->pc = 0x28AA84u;
    // 0x28aa84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28AA84u;
    {
        const bool branch_taken_0x28aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA84u;
        // 0x28aa88: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa84) {
            ctx->pc = 0x28AAC8u;
            goto label_28aac8;
        }
    }
    ctx->pc = 0x28AA8Cu;
    // 0x28aa8c: 0x0  nop
    ctx->pc = 0x28aa8cu;
    // NOP
label_28aa90:
    // 0x28aa90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28aa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa94: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28AA94u;
    SET_GPR_U32(ctx, 31, 0x28AA9Cu);
    ctx->pc = 0x28AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA94u;
    // 0x28aa98: 0x24a59a20  addiu       $a1, $a1, -0x65E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28AA94u, 0x28AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA9Cu;
label_28aa9c:
    // 0x28aa9c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x28AA9Cu;
    {
        const bool branch_taken_0x28aa9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aa9c) {
            ctx->pc = 0x28AAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AA9Cu;
            // 0x28aaa0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AAD0u;
            goto label_28aad0;
        }
    }
    ctx->pc = 0x28AAA4u;
    // 0x28aaa4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28aaa8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28AAA8u;
    {
        const bool branch_taken_0x28aaa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aaa8) {
            ctx->pc = 0x28AAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AAA8u;
            // 0x28aaac: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AAD0u;
            goto label_28aad0;
        }
    }
    ctx->pc = 0x28AAB0u;
    // 0x28aab0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28AAB0u;
    {
        const bool branch_taken_0x28aab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAB0u;
        // 0x28aab4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aab0) {
            ctx->pc = 0x28AAC0u;
            goto label_28aac0;
        }
    }
    ctx->pc = 0x28AAB8u;
    // 0x28aab8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28AAB8u;
    {
        const bool branch_taken_0x28aab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAB8u;
        // 0x28aabc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aab8) {
            ctx->pc = 0x28AAC8u;
            goto label_28aac8;
        }
    }
    ctx->pc = 0x28AAC0u;
label_28aac0:
    // 0x28aac0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x28aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28aac4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_28aac8:
    // 0x28aac8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28aacc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28aad0:
    // 0x28aad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28aad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aad4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28AAD4u;
    SET_GPR_U32(ctx, 31, 0x28AADCu);
    ctx->pc = 0x28AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAD4u;
    // 0x28aad8: 0x24a59a70  addiu       $a1, $a1, -0x6590 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28AAD4u, 0x28AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AADCu;
label_28aadc:
    // 0x28aadc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28AADCu;
    {
        const bool branch_taken_0x28aadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AADCu;
        // 0x28aae0: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aadc) {
            ctx->pc = 0x28AAFCu;
            goto label_28aafc;
        }
    }
    ctx->pc = 0x28AAE4u;
    // 0x28aae4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28aae8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28AAE8u;
    {
        const bool branch_taken_0x28aae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aae8) {
            ctx->pc = 0x28AAFCu;
            goto label_28aafc;
        }
    }
    ctx->pc = 0x28AAF0u;
    // 0x28aaf0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28aaf4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28aaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28aaf8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28aafc:
    // 0x28aafc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28aafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab00: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28AB00u;
    SET_GPR_U32(ctx, 31, 0x28AB08u);
    ctx->pc = 0x28AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB00u;
    // 0x28ab04: 0x24a53c08  addiu       $a1, $a1, 0x3C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28AB00u, 0x28AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB08u;
label_28ab08:
    // 0x28ab08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28AB08u;
    {
        const bool branch_taken_0x28ab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB08u;
        // 0x28ab0c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab08) {
            ctx->pc = 0x28AB2Cu;
            goto label_28ab2c;
        }
    }
    ctx->pc = 0x28AB10u;
    // 0x28ab10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28ab14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AB14u;
    {
        const bool branch_taken_0x28ab14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB14u;
        // 0x28ab18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab14) {
            ctx->pc = 0x28AB30u;
            goto label_28ab30;
        }
    }
    ctx->pc = 0x28AB1Cu;
    // 0x28ab1c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28ab20: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28ab20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28ab24: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x28ab28: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28ab2c:
    // 0x28ab2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ab30:
    // 0x28ab30: 0x24a59a80  addiu       $a1, $a1, -0x6580
    ctx->pc = 0x28ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941312));
    // 0x28ab34: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28AB34u;
    SET_GPR_U32(ctx, 31, 0x28AB3Cu);
    ctx->pc = 0x28AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB34u;
    // 0x28ab38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28AB34u, 0x28AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB3Cu;
label_28ab3c:
    // 0x28ab3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28AB3Cu;
    {
        const bool branch_taken_0x28ab3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB3Cu;
        // 0x28ab40: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab3c) {
            ctx->pc = 0x28AB60u;
            goto label_28ab60;
        }
    }
    ctx->pc = 0x28AB44u;
    // 0x28ab44: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x28ab44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28ab48: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AB48u;
    {
        const bool branch_taken_0x28ab48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB48u;
        // 0x28ab4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab48) {
            ctx->pc = 0x28AB64u;
            goto label_28ab64;
        }
    }
    ctx->pc = 0x28AB50u;
    // 0x28ab50: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x28ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x28ab54: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28ab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28ab58: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x28ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x28ab5c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x28ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_28ab60:
    // 0x28ab60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ab64:
    // 0x28ab64: 0x8c82f4dc  lw          $v0, -0xB24($a0)
    ctx->pc = 0x28ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964444)));
    // 0x28ab68: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x28ab68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ab6c: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28AB6Cu;
    {
        const bool branch_taken_0x28ab6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x28AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB6Cu;
        // 0x28ab70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab6c) {
            ctx->pc = 0x28AB90u;
            goto label_28ab90;
        }
    }
    ctx->pc = 0x28AB74u;
    // 0x28ab74: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x28ab74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x28ab78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28ab78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ab7c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28AB7Cu;
    SET_GPR_U32(ctx, 31, 0x28AB84u);
    ctx->pc = 0x28AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB7Cu;
    // 0x28ab80: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28AB7Cu, 0x28AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB84u;
label_28ab84:
    // 0x28ab84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28AB84u;
    {
        const bool branch_taken_0x28ab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB84u;
        // 0x28ab88: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab84) {
            ctx->pc = 0x28ABA4u;
            goto label_28aba4;
        }
    }
    ctx->pc = 0x28AB8Cu;
    // 0x28ab8c: 0x0  nop
    ctx->pc = 0x28ab8cu;
    // NOP
label_28ab90:
    // 0x28ab90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ab90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28ab94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28ab94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ab98: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x28AB98u;
    SET_GPR_U32(ctx, 31, 0x28ABA0u);
    ctx->pc = 0x28AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB98u;
    // 0x28ab9c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x28AB98u, 0x28ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABA0u;
label_28aba0:
    // 0x28aba0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x28aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_28aba4:
    // 0x28aba4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28aba8: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x28aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x28abac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28abb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28abb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28abb4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x28abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x28abb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28abb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28abbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28abbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28abc0: 0x3e00008  jr          $ra
    ctx->pc = 0x28ABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABC0u;
        // 0x28abc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ABC8u;
}
