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

// Function: sub_0023D868
// Address: 0x23d868 - 0x23d998
void sub_0023D868_0x23d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D868_0x23d868");
#endif

    switch (ctx->pc) {
        case 0x23d894u: goto label_23d894;
        case 0x23d8a8u: goto label_23d8a8;
        case 0x23d8ecu: goto label_23d8ec;
        case 0x23d940u: goto label_23d940;
        case 0x23d984u: goto label_23d984;
        default: break;
    }

    ctx->pc = 0x23d868u;

    // 0x23d868: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23d86c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x23d86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x23d870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d874: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x23d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x23d878: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x23d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x23d87c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x23d87cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x23d880: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23d880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23d884: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23D884u;
    {
        const bool branch_taken_0x23d884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D884u;
        // 0x23d888: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d884) {
            ctx->pc = 0x23D8C0u;
            goto label_23d8c0;
        }
    }
    ctx->pc = 0x23D88Cu;
    // 0x23d88c: 0xc08f5c2  jal         func_23D708
    ctx->pc = 0x23D88Cu;
    SET_GPR_U32(ctx, 31, 0x23D894u);
    ctx->pc = 0x23D708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D708u, 0x23D88Cu, 0x23D894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D894u;
label_23d894:
    // 0x23d894: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x23d894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x23d898: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x23d898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x23d89c: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x23d89cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x23d8a0: 0xc08f60c  jal         func_23D830
    ctx->pc = 0x23D8A0u;
    SET_GPR_U32(ctx, 31, 0x23D8A8u);
    ctx->pc = 0x23D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8A0u;
    // 0x23d8a4: 0x30840001  andi        $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D830u, 0x23D8A0u, 0x23D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8A8u;
label_23d8a8:
    // 0x23d8a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D8A8u;
    {
        const bool branch_taken_0x23d8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8A8u;
        // 0x23d8ac: 0x2403ffdf  addiu       $v1, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8a8) {
            ctx->pc = 0x23D8BCu;
            goto label_23d8bc;
        }
    }
    ctx->pc = 0x23D8B0u;
    // 0x23d8b0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x23d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x23d8b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d8b8: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x23d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_23d8bc:
    // 0x23d8bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_23d8c0:
    // 0x23d8c0: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x23d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936748)));
    // 0x23d8c4: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x23D8C4u;
    {
        const bool branch_taken_0x23d8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d8c4) {
            ctx->pc = 0x23D8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D8C4u;
            // 0x23d8c8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D988u;
            goto label_23d988;
        }
    }
    ctx->pc = 0x23D8CCu;
    // 0x23d8cc: 0x86020064  lh          $v0, 0x64($s0)
    ctx->pc = 0x23d8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x23d8d0: 0x28420016  slti        $v0, $v0, 0x16
    ctx->pc = 0x23d8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x23d8d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D8D4u;
    {
        const bool branch_taken_0x23d8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8D4u;
        // 0x23d8d8: 0x96030064  lhu         $v1, 0x64($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8d4) {
            ctx->pc = 0x23D8F0u;
            goto label_23d8f0;
        }
    }
    ctx->pc = 0x23D8DCu;
    // 0x23d8dc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x23d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x23d8e0: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x23d8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x23d8e4: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x23D8E4u;
    SET_GPR_U32(ctx, 31, 0x23D8ECu);
    ctx->pc = 0x23D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8E4u;
    // 0x23d8e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x23D8E4u, 0x23D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8ECu;
label_23d8ec:
    // 0x23d8ec: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x23d8ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_23d8f0:
    // 0x23d8f0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x23d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23d8f4: 0x86040066  lh          $a0, 0x66($s0)
    ctx->pc = 0x23d8f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x23d8f8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x23d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23d8fc: 0xa6020064  sh          $v0, 0x64($s0)
    ctx->pc = 0x23d8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d900: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23d900u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x23d904: 0x24820015  addiu       $v0, $a0, 0x15
    ctx->pc = 0x23d904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 21));
    // 0x23d908: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23d908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23d90c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D90Cu;
    {
        const bool branch_taken_0x23d90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D90Cu;
        // 0x23d910: 0x64102a  slt         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d90c) {
            ctx->pc = 0x23D928u;
            goto label_23d928;
        }
    }
    ctx->pc = 0x23D914u;
    // 0x23d914: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x23d914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x23d918: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x23d918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x23d91c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23d920: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23D920u;
    {
        const bool branch_taken_0x23d920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D920u;
        // 0x23d924: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d920) {
            ctx->pc = 0x23D984u;
            goto label_23d984;
        }
    }
    ctx->pc = 0x23D928u;
label_23d928:
    // 0x23d928: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D928u;
    {
        const bool branch_taken_0x23d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d928) {
            ctx->pc = 0x23D92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D928u;
            // 0x23d92c: 0xc6050028  lwc1        $f5, 0x28($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D948u;
            goto label_23d948;
        }
    }
    ctx->pc = 0x23D930u;
    // 0x23d930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d934: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23d934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d938: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x23D938u;
    SET_GPR_U32(ctx, 31, 0x23D940u);
    ctx->pc = 0x23D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D938u;
    // 0x23d93c: 0x24860020  addiu       $a2, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x23D938u, 0x23D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D940u;
label_23d940:
    // 0x23d940: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23D940u;
    {
        const bool branch_taken_0x23d940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D940u;
        // 0x23d944: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d940) {
            ctx->pc = 0x23D988u;
            goto label_23d988;
        }
    }
    ctx->pc = 0x23D948u;
label_23d948:
    // 0x23d948: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x23d948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23d94c: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x23d94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23d950: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23d950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d954: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x23d954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23d958: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x23d958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23d95c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x23d95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d960: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x23d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d964: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x23d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d968: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x23d968u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23d96c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x23d96cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23d970: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x23d970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23d974: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x23d974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23d978: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x23d978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23d97c: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x23D97Cu;
    SET_GPR_U32(ctx, 31, 0x23D984u);
    ctx->pc = 0x23D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D97Cu;
    // 0x23d980: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x23D97Cu, 0x23D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D984u;
label_23d984:
    // 0x23d984: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x23d984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23d988:
    // 0x23d988: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x23d988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23d98c: 0x3e00008  jr          $ra
    ctx->pc = 0x23D98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D98Cu;
        // 0x23d990: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D994u;
    // 0x23d994: 0x0  nop
    ctx->pc = 0x23d994u;
    // NOP
    ctx->pc = 0x23d998u;
}
