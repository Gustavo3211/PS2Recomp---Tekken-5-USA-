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

// Function: sub_0024B908
// Address: 0x24b908 - 0x24ba50
void sub_0024B908_0x24b908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B908_0x24b908");
#endif

    switch (ctx->pc) {
        case 0x24b96cu: goto label_24b96c;
        case 0x24b978u: goto label_24b978;
        case 0x24b988u: goto label_24b988;
        case 0x24b998u: goto label_24b998;
        case 0x24b9a8u: goto label_24b9a8;
        case 0x24b9dcu: goto label_24b9dc;
        case 0x24b9e4u: goto label_24b9e4;
        case 0x24b9f0u: goto label_24b9f0;
        case 0x24ba00u: goto label_24ba00;
        case 0x24ba0cu: goto label_24ba0c;
        case 0x24ba20u: goto label_24ba20;
        case 0x24ba34u: goto label_24ba34;
        default: break;
    }

    ctx->pc = 0x24b908u;

    // 0x24b908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b918: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24b918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b91c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24b920: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x24b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x24b924: 0x10710016  beq         $v1, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x24B924u;
    {
        const bool branch_taken_0x24b924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x24B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B924u;
        // 0x24b928: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b924) {
            ctx->pc = 0x24B980u;
            goto label_24b980;
        }
    }
    ctx->pc = 0x24B92Cu;
    // 0x24b92c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B92Cu;
    {
        const bool branch_taken_0x24b92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B92Cu;
        // 0x24b930: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b92c) {
            ctx->pc = 0x24B948u;
            goto label_24b948;
        }
    }
    ctx->pc = 0x24B934u;
    // 0x24b934: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x24B934u;
    {
        const bool branch_taken_0x24b934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B934u;
        // 0x24b938: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b934) {
            ctx->pc = 0x24B960u;
            goto label_24b960;
        }
    }
    ctx->pc = 0x24B93Cu;
    // 0x24b93c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x24B93Cu;
    {
        const bool branch_taken_0x24b93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B93Cu;
        // 0x24b940: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b93c) {
            ctx->pc = 0x24BA38u;
            goto label_24ba38;
        }
    }
    ctx->pc = 0x24B944u;
    // 0x24b944: 0x0  nop
    ctx->pc = 0x24b944u;
    // NOP
label_24b948:
    // 0x24b948: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x24B948u;
    {
        const bool branch_taken_0x24b948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B948u;
        // 0x24b94c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b948) {
            ctx->pc = 0x24B9F8u;
            goto label_24b9f8;
        }
    }
    ctx->pc = 0x24B950u;
    // 0x24b950: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x24B950u;
    {
        const bool branch_taken_0x24b950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B950u;
        // 0x24b954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b950) {
            ctx->pc = 0x24BA18u;
            goto label_24ba18;
        }
    }
    ctx->pc = 0x24B958u;
    // 0x24b958: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x24B958u;
    {
        const bool branch_taken_0x24b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B958u;
        // 0x24b95c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b958) {
            ctx->pc = 0x24BA3Cu;
            goto label_24ba3c;
        }
    }
    ctx->pc = 0x24B960u;
label_24b960:
    // 0x24b960: 0x24421838  addiu       $v0, $v0, 0x1838
    ctx->pc = 0x24b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6200));
    // 0x24b964: 0xc092e1a  jal         func_24B868
    ctx->pc = 0x24B964u;
    SET_GPR_U32(ctx, 31, 0x24B96Cu);
    ctx->pc = 0x24B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B964u;
    // 0x24b968: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B868u, 0x24B964u, 0x24B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B96Cu;
label_24b96c:
    // 0x24b96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b970: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x24B970u;
    SET_GPR_U32(ctx, 31, 0x24B978u);
    ctx->pc = 0x24B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B970u;
    // 0x24b974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x24B970u, 0x24B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B978u;
label_24b978:
    // 0x24b978: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x24B978u;
    {
        const bool branch_taken_0x24b978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B978u;
        // 0x24b97c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b978) {
            ctx->pc = 0x24BA38u;
            goto label_24ba38;
        }
    }
    ctx->pc = 0x24B980u;
label_24b980:
    // 0x24b980: 0xc08f31c  jal         func_23CC70
    ctx->pc = 0x24B980u;
    SET_GPR_U32(ctx, 31, 0x24B988u);
    ctx->pc = 0x23CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CC70u, 0x24B980u, 0x24B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B988u;
label_24b988:
    // 0x24b988: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24B988u;
    {
        const bool branch_taken_0x24b988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B988u;
        // 0x24b98c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b988) {
            ctx->pc = 0x24BA34u;
            goto label_24ba34;
        }
    }
    ctx->pc = 0x24B990u;
    // 0x24b990: 0xc0b59c2  jal         func_2D6708
    ctx->pc = 0x24B990u;
    SET_GPR_U32(ctx, 31, 0x24B998u);
    ctx->pc = 0x24B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B990u;
    // 0x24b994: 0x2484e7e0  addiu       $a0, $a0, -0x1820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6708u, 0x24B990u, 0x24B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B998u;
label_24b998:
    // 0x24b998: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x24b998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x24b99c: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x24b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x24b9a0: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x24B9A0u;
    SET_GPR_U32(ctx, 31, 0x24B9A8u);
    ctx->pc = 0x24B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9A0u;
    // 0x24b9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x24B9A0u, 0x24B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9A8u;
label_24b9a8:
    // 0x24b9a8: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x24b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x24b9ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x24b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24b9b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B9B0u;
    {
        const bool branch_taken_0x24b9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b9b0) {
            ctx->pc = 0x24B9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B9B0u;
            // 0x24b9b4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B9CCu;
            goto label_24b9cc;
        }
    }
    ctx->pc = 0x24B9B8u;
    // 0x24b9b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x24b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24b9bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x24b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24b9c0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B9C0u;
    {
        const bool branch_taken_0x24b9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24b9c0) {
            ctx->pc = 0x24B9D4u;
            goto label_24b9d4;
        }
    }
    ctx->pc = 0x24B9C8u;
    // 0x24b9c8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x24b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_24b9cc:
    // 0x24b9cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24b9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x24b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_24b9d4:
    // 0x24b9d4: 0xc0a15fc  jal         func_2857F0
    ctx->pc = 0x24B9D4u;
    SET_GPR_U32(ctx, 31, 0x24B9DCu);
    ctx->pc = 0x2857F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857F0u, 0x24B9D4u, 0x24B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9DCu;
label_24b9dc:
    // 0x24b9dc: 0xc08f34a  jal         func_23CD28
    ctx->pc = 0x24B9DCu;
    SET_GPR_U32(ctx, 31, 0x24B9E4u);
    ctx->pc = 0x23CD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CD28u, 0x24B9DCu, 0x24B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9E4u;
label_24b9e4:
    // 0x24b9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9e8: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x24B9E8u;
    SET_GPR_U32(ctx, 31, 0x24B9F0u);
    ctx->pc = 0x24B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9E8u;
    // 0x24b9ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x24B9E8u, 0x24B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B9F0u;
label_24b9f0:
    // 0x24b9f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24B9F0u;
    {
        const bool branch_taken_0x24b9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9F0u;
        // 0x24b9f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9f0) {
            ctx->pc = 0x24BA38u;
            goto label_24ba38;
        }
    }
    ctx->pc = 0x24B9F8u;
label_24b9f8:
    // 0x24b9f8: 0xc092e38  jal         func_24B8E0
    ctx->pc = 0x24B9F8u;
    SET_GPR_U32(ctx, 31, 0x24BA00u);
    ctx->pc = 0x24B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B8E0u, 0x24B9F8u, 0x24BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA00u;
label_24ba00:
    // 0x24ba00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ba00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba04: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x24BA04u;
    SET_GPR_U32(ctx, 31, 0x24BA0Cu);
    ctx->pc = 0x24BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA04u;
    // 0x24ba08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x24BA04u, 0x24BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA0Cu;
label_24ba0c:
    // 0x24ba0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24BA0Cu;
    {
        const bool branch_taken_0x24ba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA0Cu;
        // 0x24ba10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba0c) {
            ctx->pc = 0x24BA38u;
            goto label_24ba38;
        }
    }
    ctx->pc = 0x24BA14u;
    // 0x24ba14: 0x0  nop
    ctx->pc = 0x24ba14u;
    // NOP
label_24ba18:
    // 0x24ba18: 0xc0b4266  jal         func_2D0998
    ctx->pc = 0x24BA18u;
    SET_GPR_U32(ctx, 31, 0x24BA20u);
    ctx->pc = 0x2D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0998u, 0x24BA18u, 0x24BA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA20u;
label_24ba20:
    // 0x24ba20: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24ba24: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24ba28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ba28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba2c: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x24BA2Cu;
    SET_GPR_U32(ctx, 31, 0x24BA34u);
    ctx->pc = 0x24BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA2Cu;
    // 0x24ba30: 0xac5188b4  sw          $s1, -0x774C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936756), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x24BA2Cu, 0x24BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA34u;
label_24ba34:
    // 0x24ba34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ba34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24ba38:
    // 0x24ba38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24ba38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ba3c:
    // 0x24ba3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24ba3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ba40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24ba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ba44: 0x3e00008  jr          $ra
    ctx->pc = 0x24BA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA44u;
        // 0x24ba48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BA4Cu;
    // 0x24ba4c: 0x0  nop
    ctx->pc = 0x24ba4cu;
    // NOP
    ctx->pc = 0x24ba50u;
}
