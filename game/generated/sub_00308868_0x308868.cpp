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

// Function: sub_00308868
// Address: 0x308868 - 0x3089b8
void sub_00308868_0x308868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308868_0x308868");
#endif

    switch (ctx->pc) {
        case 0x3088a0u: goto label_3088a0;
        case 0x308960u: goto label_308960;
        case 0x3089a4u: goto label_3089a4;
        default: break;
    }

    ctx->pc = 0x308868u;

    // 0x308868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30886c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30886cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x308870: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x308870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30887c: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
    ctx->pc = 0x30887Cu;
    {
        const bool branch_taken_0x30887c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30887Cu;
        // 0x308880: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30887c) {
            ctx->pc = 0x3089A4u;
            goto label_3089a4;
        }
    }
    ctx->pc = 0x308884u;
    // 0x308884: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x308884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x308888: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x308888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x30888c: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x30888Cu;
    {
        const bool branch_taken_0x30888c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x308890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30888Cu;
        // 0x308890: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30888c) {
            ctx->pc = 0x308950u;
            goto label_308950;
        }
    }
    ctx->pc = 0x308894u;
    // 0x308894: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x308894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x308898: 0xc0b7208  jal         func_2DC820
    ctx->pc = 0x308898u;
    SET_GPR_U32(ctx, 31, 0x3088A0u);
    ctx->pc = 0x30889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308898u;
    // 0x30889c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC820u, 0x308898u, 0x3088A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3088A0u;
label_3088a0:
    // 0x3088a0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3088a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3088a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3088a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3088a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088ac: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x3088acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3088b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3088B0u;
    {
        const bool branch_taken_0x3088b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3088B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088B0u;
        // 0x3088b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088b0) {
            ctx->pc = 0x3088D4u;
            goto label_3088d4;
        }
    }
    ctx->pc = 0x3088B8u;
    // 0x3088b8: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x3088b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3088bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3088BCu;
    {
        const bool branch_taken_0x3088bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3088C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088BCu;
        // 0x3088c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088bc) {
            ctx->pc = 0x3088D4u;
            goto label_3088d4;
        }
    }
    ctx->pc = 0x3088C4u;
    // 0x3088c4: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x3088c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3088c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3088c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3088cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3088ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3088d0: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x3088d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3088d4:
    // 0x3088d4: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x3088d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3088d8: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x3088D8u;
    {
        const bool branch_taken_0x3088d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3088d8) {
            ctx->pc = 0x3088DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3088D8u;
            // 0x3088dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3089A8u;
            goto label_3089a8;
        }
    }
    ctx->pc = 0x3088E0u;
    // 0x3088e0: 0x4800030  bltz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3088E0u;
    {
        const bool branch_taken_0x3088e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3088E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088E0u;
        // 0x3088e4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088e0) {
            ctx->pc = 0x3089A4u;
            goto label_3089a4;
        }
    }
    ctx->pc = 0x3088E8u;
    // 0x3088e8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3088e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3088ec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3088ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3088f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3088f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3088f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3088f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3088f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3088F8u;
    {
        const bool branch_taken_0x3088f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3088FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088F8u;
        // 0x3088fc: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088f8) {
            ctx->pc = 0x308908u;
            goto label_308908;
        }
    }
    ctx->pc = 0x308900u;
    // 0x308900: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x308900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x308904: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x308904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_308908:
    // 0x308908: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x308908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x30890c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x30890cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x308910: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x308910u;
    {
        const bool branch_taken_0x308910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308910) {
            ctx->pc = 0x308914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308910u;
            // 0x308914: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308918u;
            goto label_308918;
        }
    }
    ctx->pc = 0x308918u;
label_308918:
    // 0x308918: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x308918u;
    {
        const bool branch_taken_0x308918 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x30891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308918u;
        // 0x30891c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308918) {
            ctx->pc = 0x308930u;
            goto label_308930;
        }
    }
    ctx->pc = 0x308920u;
    // 0x308920: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x308920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x308924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x308924u;
    {
        const bool branch_taken_0x308924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308924u;
        // 0x308928: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308924) {
            ctx->pc = 0x308938u;
            goto label_308938;
        }
    }
    ctx->pc = 0x30892Cu;
    // 0x30892c: 0x0  nop
    ctx->pc = 0x30892cu;
    // NOP
label_308930:
    // 0x308930: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x308930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x308934: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x308934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_308938:
    // 0x308938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30893c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x308940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x308940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x308944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308948: 0x8092940  j           func_24A500
    ctx->pc = 0x308948u;
    ctx->pc = 0x30894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308948u;
    // 0x30894c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x308950u;
label_308950:
    // 0x308950: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x308950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x308954: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x308954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x308958: 0xc0c2130  jal         func_3084C0
    ctx->pc = 0x308958u;
    SET_GPR_U32(ctx, 31, 0x308960u);
    ctx->pc = 0x30895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308958u;
    // 0x30895c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3084C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3084C0u, 0x308958u, 0x308960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308960u;
label_308960:
    // 0x308960: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x308960u;
    {
        const bool branch_taken_0x308960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308960u;
        // 0x308964: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308960) {
            ctx->pc = 0x30897Cu;
            goto label_30897c;
        }
    }
    ctx->pc = 0x308968u;
    // 0x308968: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x308968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30896c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30896Cu;
    {
        const bool branch_taken_0x30896c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x308970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30896Cu;
        // 0x308970: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30896c) {
            ctx->pc = 0x30897Cu;
            goto label_30897c;
        }
    }
    ctx->pc = 0x308974u;
    // 0x308974: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x308974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x308978: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x308978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30897c:
    // 0x30897c: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30897Cu;
    {
        const bool branch_taken_0x30897c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x308980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30897Cu;
        // 0x308980: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30897c) {
            ctx->pc = 0x308994u;
            goto label_308994;
        }
    }
    ctx->pc = 0x308984u;
    // 0x308984: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x308984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308988: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x308988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30898c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x30898cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x308990: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x308990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_308994:
    // 0x308994: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x308994u;
    {
        const bool branch_taken_0x308994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308994) {
            ctx->pc = 0x308998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308994u;
            // 0x308998: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30899Cu;
            goto label_30899c;
        }
    }
    ctx->pc = 0x30899Cu;
label_30899c:
    // 0x30899c: 0xc092940  jal         func_24A500
    ctx->pc = 0x30899Cu;
    SET_GPR_U32(ctx, 31, 0x3089A4u);
    ctx->pc = 0x3089A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30899Cu;
    // 0x3089a0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x30899Cu, 0x3089A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3089A4u;
label_3089a4:
    // 0x3089a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3089a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3089a8:
    // 0x3089a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3089a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3089ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3089acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3089b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3089B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3089B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089B0u;
        // 0x3089b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3089B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3089B8u;
}
