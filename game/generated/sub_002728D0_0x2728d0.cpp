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

// Function: sub_002728D0
// Address: 0x2728d0 - 0x272f10
void sub_002728D0_0x2728d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002728D0_0x2728d0");
#endif

    switch (ctx->pc) {
        case 0x272914u: goto label_272914;
        case 0x272958u: goto label_272958;
        case 0x272984u: goto label_272984;
        case 0x2729b0u: goto label_2729b0;
        case 0x2729dcu: goto label_2729dc;
        case 0x272accu: goto label_272acc;
        case 0x272b98u: goto label_272b98;
        case 0x272bf4u: goto label_272bf4;
        case 0x272c38u: goto label_272c38;
        case 0x272c8cu: goto label_272c8c;
        case 0x272cc0u: goto label_272cc0;
        case 0x272cecu: goto label_272cec;
        case 0x272d10u: goto label_272d10;
        case 0x272d60u: goto label_272d60;
        case 0x272d68u: goto label_272d68;
        case 0x272e64u: goto label_272e64;
        case 0x272e7cu: goto label_272e7c;
        case 0x272e94u: goto label_272e94;
        case 0x272ee0u: goto label_272ee0;
        default: break;
    }

    ctx->pc = 0x2728d0u;

    // 0x2728d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2728d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2728d4: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x2728d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2728d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2728d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2728dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2728dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2728e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2728e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2728e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2728e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2728e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2728e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2728ec: 0x906201f9  lbu         $v0, 0x1F9($v1)
    ctx->pc = 0x2728ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 505)));
    // 0x2728f0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2728F0u;
    {
        const bool branch_taken_0x2728f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2728F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728F0u;
        // 0x2728f4: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728f0) {
            ctx->pc = 0x27291Cu;
            goto label_27291c;
        }
    }
    ctx->pc = 0x2728F8u;
    // 0x2728f8: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2728f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2728fc: 0x8ca20320  lw          $v0, 0x320($a1)
    ctx->pc = 0x2728fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
    // 0x272900: 0x30420404  andi        $v0, $v0, 0x404
    ctx->pc = 0x272900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1028);
    // 0x272904: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x272904u;
    {
        const bool branch_taken_0x272904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272904) {
            ctx->pc = 0x272908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272904u;
            // 0x272908: 0xaca00040  sw          $zero, 0x40($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272924u;
            goto label_272924;
        }
    }
    ctx->pc = 0x27290Cu;
    // 0x27290c: 0xc099bd2  jal         func_266F48
    ctx->pc = 0x27290Cu;
    SET_GPR_U32(ctx, 31, 0x272914u);
    ctx->pc = 0x266F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266F48u, 0x27290Cu, 0x272914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272914u;
label_272914:
    // 0x272914: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x272914u;
    {
        const bool branch_taken_0x272914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272914u;
        // 0x272918: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272914) {
            ctx->pc = 0x272938u;
            goto label_272938;
        }
    }
    ctx->pc = 0x27291Cu;
label_27291c:
    // 0x27291c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x27291cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272920: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x272920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
label_272924:
    // 0x272924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272928: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27292c: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x27292Cu;
    {
        const bool branch_taken_0x27292c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27292Cu;
        // 0x272930: 0xac600318  sw          $zero, 0x318($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27292c) {
            ctx->pc = 0x272EF4u;
            goto label_272ef4;
        }
    }
    ctx->pc = 0x272934u;
    // 0x272934: 0x0  nop
    ctx->pc = 0x272934u;
    // NOP
label_272938:
    // 0x272938: 0x8c620310  lw          $v0, 0x310($v1)
    ctx->pc = 0x272938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 784)));
    // 0x27293c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27293Cu;
    {
        const bool branch_taken_0x27293c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27293c) {
            ctx->pc = 0x272940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27293Cu;
            // 0x272940: 0xac600314  sw          $zero, 0x314($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 788), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272950u;
            goto label_272950;
        }
    }
    ctx->pc = 0x272944u;
    // 0x272944: 0x8c620314  lw          $v0, 0x314($v1)
    ctx->pc = 0x272944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 788)));
    // 0x272948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x272948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27294c: 0xac620314  sw          $v0, 0x314($v1)
    ctx->pc = 0x27294cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 788), GPR_U32(ctx, 2));
label_272950:
    // 0x272950: 0xc09bb1c  jal         func_26EC70
    ctx->pc = 0x272950u;
    SET_GPR_U32(ctx, 31, 0x272958u);
    ctx->pc = 0x272954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272950u;
    // 0x272954: 0x2404005f  addiu       $a0, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EC70u, 0x272950u, 0x272958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272958u;
label_272958:
    // 0x272958: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272958u;
    {
        const bool branch_taken_0x272958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272958u;
        // 0x27295c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272958) {
            ctx->pc = 0x2729C0u;
            goto label_2729c0;
        }
    }
    ctx->pc = 0x272960u;
    // 0x272960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272964: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x272964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x272968: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x272968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27296c: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x27296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x272970: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x272970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x272974: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x272974u;
    {
        const bool branch_taken_0x272974 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x272978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272974u;
        // 0x272978: 0xac820098  sw          $v0, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272974) {
            ctx->pc = 0x2729B0u;
            goto label_2729b0;
        }
    }
    ctx->pc = 0x27297Cu;
    // 0x27297c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x27297Cu;
    SET_GPR_U32(ctx, 31, 0x272984u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x27297Cu, 0x272984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272984u;
label_272984:
    // 0x272984: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x272984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272988: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x272988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x27298c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x272990: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x272990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x272994: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x272994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x272998: 0x84430334  lh          $v1, 0x334($v0)
    ctx->pc = 0x272998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x27299c: 0xac830098  sw          $v1, 0x98($a0)
    ctx->pc = 0x27299cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 3));
    // 0x2729a0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2729a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2729a4: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x2729A4u;
    {
        const bool branch_taken_0x2729a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729A4u;
        // 0x2729a8: 0xa4450006  sh          $a1, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729a4) {
            ctx->pc = 0x272EF0u;
            goto label_272ef0;
        }
    }
    ctx->pc = 0x2729ACu;
    // 0x2729ac: 0x0  nop
    ctx->pc = 0x2729acu;
    // NOP
label_2729b0:
    // 0x2729b0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2729b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2729b4: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x2729B4u;
    {
        const bool branch_taken_0x2729b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729B4u;
        // 0x2729b8: 0xa4400006  sh          $zero, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729b4) {
            ctx->pc = 0x272EF0u;
            goto label_272ef0;
        }
    }
    ctx->pc = 0x2729BCu;
    // 0x2729bc: 0x0  nop
    ctx->pc = 0x2729bcu;
    // NOP
label_2729c0:
    // 0x2729c0: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x2729c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2729c4: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x2729c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2729c8: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x2729c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2729cc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2729ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2729d0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2729d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2729d4: 0xc09aa6e  jal         func_26A9B8
    ctx->pc = 0x2729D4u;
    SET_GPR_U32(ctx, 31, 0x2729DCu);
    ctx->pc = 0x2729D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2729D4u;
    // 0x2729d8: 0xac6000a8  sw          $zero, 0xA8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A9B8u, 0x2729D4u, 0x2729DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729DCu;
label_2729dc:
    // 0x2729dc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2729dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2729e0: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x2729e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    // 0x2729e4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2729e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2729e8: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2729e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x2729ec: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2729ECu;
    {
        const bool branch_taken_0x2729ec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2729F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729ECu;
        // 0x2729f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729ec) {
            ctx->pc = 0x272A00u;
            goto label_272a00;
        }
    }
    ctx->pc = 0x2729F4u;
    // 0x2729f4: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x2729F4u;
    {
        const bool branch_taken_0x2729f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729F4u;
        // 0x2729f8: 0xa4600006  sh          $zero, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729f4) {
            ctx->pc = 0x272EF4u;
            goto label_272ef4;
        }
    }
    ctx->pc = 0x2729FCu;
    // 0x2729fc: 0x0  nop
    ctx->pc = 0x2729fcu;
    // NOP
label_272a00:
    // 0x272a00: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x272a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x272a04: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x272a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x272a08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x272a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272a0c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x272a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x272a10: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x272a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272a14: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x272a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x272a18: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272a1c: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x272a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x272a20: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x272a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272a24: 0xac440054  sw          $a0, 0x54($v0)
    ctx->pc = 0x272a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 4));
    // 0x272a28: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272a2c: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x272a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x272a30: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x272a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272a34: 0xac4600c4  sw          $a2, 0xC4($v0)
    ctx->pc = 0x272a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
    // 0x272a38: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x272a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272a3c: 0x8c820318  lw          $v0, 0x318($a0)
    ctx->pc = 0x272a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x272a40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x272a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x272a44: 0x284300b4  slti        $v1, $v0, 0xB4
    ctx->pc = 0x272a44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x272a48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272A48u;
    {
        const bool branch_taken_0x272a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A48u;
        // 0x272a4c: 0xac820318  sw          $v0, 0x318($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a48) {
            ctx->pc = 0x272A58u;
            goto label_272a58;
        }
    }
    ctx->pc = 0x272A50u;
    // 0x272a50: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x272A50u;
    {
        const bool branch_taken_0x272a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A50u;
        // 0x272a54: 0x2410003f  addiu       $s0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a50) {
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272A58u;
label_272a58:
    // 0x272a58: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x272a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272a5c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x272a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x272a60: 0x8ca2032c  lw          $v0, 0x32C($a1)
    ctx->pc = 0x272a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 812)));
    // 0x272a64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x272a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x272a68: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x272A68u;
    {
        const bool branch_taken_0x272a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272a68) {
            ctx->pc = 0x272A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272A68u;
            // 0x272a6c: 0x8ca30330  lw          $v1, 0x330($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272A88u;
            goto label_272a88;
        }
    }
    ctx->pc = 0x272A70u;
    // 0x272a70: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x272a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x272a74: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x272a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x272a78: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x272a78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x272a7c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x272A7Cu;
    {
        const bool branch_taken_0x272a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272a7c) {
            ctx->pc = 0x272A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272A7Cu;
            // 0x272a80: 0x84830096  lh          $v1, 0x96($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272AB4u;
            goto label_272ab4;
        }
    }
    ctx->pc = 0x272A84u;
    // 0x272a84: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x272a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
label_272a88:
    // 0x272a88: 0x24020707  addiu       $v0, $zero, 0x707
    ctx->pc = 0x272a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
    // 0x272a8c: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x272A8Cu;
    {
        const bool branch_taken_0x272a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272a8c) {
            ctx->pc = 0x272A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272A8Cu;
            // 0x272a90: 0x8ca6032c  lw          $a2, 0x32C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272AECu;
            goto label_272aec;
        }
    }
    ctx->pc = 0x272A94u;
    // 0x272a94: 0x8ca20328  lw          $v0, 0x328($a1)
    ctx->pc = 0x272a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 808)));
    // 0x272a98: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x272a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x272a9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x272a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x272aa0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x272AA0u;
    {
        const bool branch_taken_0x272aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272aa0) {
            ctx->pc = 0x272AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272AA0u;
            // 0x272aa4: 0x8ca6032c  lw          $a2, 0x32C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272AECu;
            goto label_272aec;
        }
    }
    ctx->pc = 0x272AA8u;
    // 0x272aa8: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x272aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x272aac: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x272aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x272ab0: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x272ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
label_272ab4:
    // 0x272ab4: 0x94440046  lhu         $a0, 0x46($v0)
    ctx->pc = 0x272ab4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x272ab8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x272ab8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x272abc: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x272ABCu;
    {
        const bool branch_taken_0x272abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272abc) {
            ctx->pc = 0x272AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272ABCu;
            // 0x272ac0: 0x8ca6032c  lw          $a2, 0x32C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272AECu;
            goto label_272aec;
        }
    }
    ctx->pc = 0x272AC4u;
    // 0x272ac4: 0xc099c32  jal         func_2670C8
    ctx->pc = 0x272AC4u;
    SET_GPR_U32(ctx, 31, 0x272ACCu);
    ctx->pc = 0x2670C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2670C8u, 0x272AC4u, 0x272ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272ACCu;
label_272acc:
    // 0x272acc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272ACCu;
    {
        const bool branch_taken_0x272acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272ACCu;
        // 0x272ad0: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272acc) {
            ctx->pc = 0x272AE8u;
            goto label_272ae8;
        }
    }
    ctx->pc = 0x272AD4u;
    // 0x272ad4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272adc: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x272ADCu;
    {
        const bool branch_taken_0x272adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272ADCu;
        // 0x272ae0: 0xa4600006  sh          $zero, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272adc) {
            ctx->pc = 0x272EF4u;
            goto label_272ef4;
        }
    }
    ctx->pc = 0x272AE4u;
    // 0x272ae4: 0x0  nop
    ctx->pc = 0x272ae4u;
    // NOP
label_272ae8:
    // 0x272ae8: 0x8ca6032c  lw          $a2, 0x32C($a1)
    ctx->pc = 0x272ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 812)));
label_272aec:
    // 0x272aec: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x272aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x272af0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x272af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x272af4: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x272AF4u;
    {
        const bool branch_taken_0x272af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AF4u;
        // 0x272af8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272af4) {
            ctx->pc = 0x272D2Cu;
            goto label_272d2c;
        }
    }
    ctx->pc = 0x272AFCu;
    // 0x272afc: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x272afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x272b00: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x272b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x272b04: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x272b04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x272b08: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x272B08u;
    {
        const bool branch_taken_0x272b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b08) {
            ctx->pc = 0x272B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272B08u;
            // 0x272b0c: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272C50u;
            goto label_272c50;
        }
    }
    ctx->pc = 0x272B10u;
    // 0x272b10: 0x8ca20298  lw          $v0, 0x298($a1)
    ctx->pc = 0x272b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 664)));
    // 0x272b14: 0x2842000c  slti        $v0, $v0, 0xC
    ctx->pc = 0x272b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x272b18: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x272B18u;
    {
        const bool branch_taken_0x272b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b18) {
            ctx->pc = 0x272B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272B18u;
            // 0x272b1c: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272B38u;
            goto label_272b38;
        }
    }
    ctx->pc = 0x272B20u;
    // 0x272b20: 0x94620046  lhu         $v0, 0x46($v1)
    ctx->pc = 0x272b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x272b24: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x272b24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x272b28: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x272b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x272b2c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x272B2Cu;
    {
        const bool branch_taken_0x272b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b2c) {
            ctx->pc = 0x272B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272B2Cu;
            // 0x272b30: 0x8ca30330  lw          $v1, 0x330($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272B60u;
            goto label_272b60;
        }
    }
    ctx->pc = 0x272B34u;
    // 0x272b34: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x272b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_272b38:
    // 0x272b38: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x272b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x272b3c: 0x5040007a  beql        $v0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x272B3Cu;
    {
        const bool branch_taken_0x272b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b3c) {
            ctx->pc = 0x272B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272B3Cu;
            // 0x272b40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272B44u;
    // 0x272b44: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x272b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x272b48: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x272b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x272b4c: 0x24100038  addiu       $s0, $zero, 0x38
    ctx->pc = 0x272b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x272b50: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x272b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x272b54: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x272B54u;
    {
        const bool branch_taken_0x272b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B54u;
        // 0x272b58: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b54) {
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272B5Cu;
    // 0x272b5c: 0x0  nop
    ctx->pc = 0x272b5cu;
    // NOP
label_272b60:
    // 0x272b60: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x272b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x272b64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272B64u;
    {
        const bool branch_taken_0x272b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x272B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B64u;
        // 0x272b68: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b64) {
            ctx->pc = 0x272B7Cu;
            goto label_272b7c;
        }
    }
    ctx->pc = 0x272B6Cu;
    // 0x272b6c: 0x8ca20328  lw          $v0, 0x328($a1)
    ctx->pc = 0x272b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 808)));
    // 0x272b70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x272b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x272b74: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x272B74u;
    {
        const bool branch_taken_0x272b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272b74) {
            ctx->pc = 0x272B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272B74u;
            // 0x272b78: 0x8ca3001c  lw          $v1, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272C08u;
            goto label_272c08;
        }
    }
    ctx->pc = 0x272B7Cu;
label_272b7c:
    // 0x272b7c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x272b7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x272b80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x272b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272b84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x272b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x272b88: 0x14430067  bne         $v0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x272B88u;
    {
        const bool branch_taken_0x272b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x272B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B88u;
        // 0x272b8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b88) {
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272B90u;
    // 0x272b90: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272B90u;
    SET_GPR_U32(ctx, 31, 0x272B98u);
    ctx->pc = 0x272B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B90u;
    // 0x272b94: 0xaca00040  sw          $zero, 0x40($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272B90u, 0x272B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B98u;
label_272b98:
    // 0x272b98: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x272b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x272b9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272B9Cu;
    {
        const bool branch_taken_0x272b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B9Cu;
        // 0x272ba0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b9c) {
            ctx->pc = 0x272BB4u;
            goto label_272bb4;
        }
    }
    ctx->pc = 0x272BA4u;
    // 0x272ba4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x272ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x272ba8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x272ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x272bac: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x272BACu;
    {
        const bool branch_taken_0x272bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BACu;
        // 0x272bb0: 0x24100038  addiu       $s0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bac) {
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272BB4u;
label_272bb4:
    // 0x272bb4: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x272bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x272bb8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x272bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x272bbc: 0x94640026  lhu         $a0, 0x26($v1)
    ctx->pc = 0x272bbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x272bc0: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x272BC0u;
    {
        const bool branch_taken_0x272bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x272BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BC0u;
        // 0x272bc4: 0x8f83aa7c  lw          $v1, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bc0) {
            ctx->pc = 0x272BECu;
            goto label_272bec;
        }
    }
    ctx->pc = 0x272BC8u;
    // 0x272bc8: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x272bc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x272bcc: 0x28424001  slti        $v0, $v0, 0x4001
    ctx->pc = 0x272bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16385) ? 1 : 0);
    // 0x272bd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272BD0u;
    {
        const bool branch_taken_0x272bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BD0u;
        // 0x272bd4: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bd0) {
            ctx->pc = 0x272BECu;
            goto label_272bec;
        }
    }
    ctx->pc = 0x272BD8u;
    // 0x272bd8: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x272bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x272bdc: 0x8c43032c  lw          $v1, 0x32C($v0)
    ctx->pc = 0x272bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
    // 0x272be0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x272be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x272be4: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x272BE4u;
    {
        const bool branch_taken_0x272be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BE4u;
        // 0x272be8: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272be4) {
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272BECu;
label_272bec:
    // 0x272bec: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272BECu;
    SET_GPR_U32(ctx, 31, 0x272BF4u);
    ctx->pc = 0x272BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272BECu;
    // 0x272bf0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272BECu, 0x272BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BF4u;
label_272bf4:
    // 0x272bf4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x272bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x272bf8: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x272BF8u;
    {
        const bool branch_taken_0x272bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BF8u;
        // 0x272bfc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bf8) {
            ctx->pc = 0x272D2Cu;
            goto label_272d2c;
        }
    }
    ctx->pc = 0x272C00u;
    // 0x272c00: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x272C00u;
    {
        const bool branch_taken_0x272c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C00u;
        // 0x272c04: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c00) {
            ctx->pc = 0x272D2Cu;
            goto label_272d2c;
        }
    }
    ctx->pc = 0x272C08u;
label_272c08:
    // 0x272c08: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x272c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x272c0c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x272C0Cu;
    {
        const bool branch_taken_0x272c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C0Cu;
        // 0x272c10: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c0c) {
            ctx->pc = 0x272C44u;
            goto label_272c44;
        }
    }
    ctx->pc = 0x272C14u;
    // 0x272c14: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x272c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x272c18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272C18u;
    {
        const bool branch_taken_0x272c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272c18) {
            ctx->pc = 0x272C30u;
            goto label_272c30;
        }
    }
    ctx->pc = 0x272C20u;
    // 0x272c20: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x272c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x272c24: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x272c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x272c28: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x272C28u;
    {
        const bool branch_taken_0x272c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c28) {
            ctx->pc = 0x272C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272C28u;
            // 0x272c2c: 0xaca00040  sw          $zero, 0x40($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272C30u;
label_272c30:
    // 0x272c30: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272C30u;
    SET_GPR_U32(ctx, 31, 0x272C38u);
    ctx->pc = 0x272C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C30u;
    // 0x272c34: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272C30u, 0x272C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C38u;
label_272c38:
    // 0x272c38: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x272c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272c3c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x272c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x272c40: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x272c40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_272c44:
    // 0x272c44: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x272C44u;
    {
        const bool branch_taken_0x272c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C44u;
        // 0x272c48: 0xaca00040  sw          $zero, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c44) {
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272C4Cu;
    // 0x272c4c: 0x0  nop
    ctx->pc = 0x272c4cu;
    // NOP
label_272c50:
    // 0x272c50: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x272c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x272c54: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x272C54u;
    {
        const bool branch_taken_0x272c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c54) {
            ctx->pc = 0x272C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272C54u;
            // 0x272c58: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272CD8u;
            goto label_272cd8;
        }
    }
    ctx->pc = 0x272C5Cu;
    // 0x272c5c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x272c5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x272c60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x272c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272c64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x272c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x272c68: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x272C68u;
    {
        const bool branch_taken_0x272c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x272C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C68u;
        // 0x272c6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c68) {
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272C70u;
    // 0x272c70: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x272c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x272c74: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x272c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272c78: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x272c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x272c7c: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x272C7Cu;
    {
        const bool branch_taken_0x272c7c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x272c7c) {
            ctx->pc = 0x272CB8u;
            goto label_272cb8;
        }
    }
    ctx->pc = 0x272C84u;
    // 0x272c84: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272C84u;
    SET_GPR_U32(ctx, 31, 0x272C8Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272C84u, 0x272C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C8Cu;
label_272c8c:
    // 0x272c8c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x272c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x272c90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272C90u;
    {
        const bool branch_taken_0x272c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C90u;
        // 0x272c94: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c90) {
            ctx->pc = 0x272CB8u;
            goto label_272cb8;
        }
    }
    ctx->pc = 0x272C98u;
    // 0x272c98: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x272c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x272c9c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x272c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x272ca0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272CA0u;
    {
        const bool branch_taken_0x272ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272ca0) {
            ctx->pc = 0x272CB8u;
            goto label_272cb8;
        }
    }
    ctx->pc = 0x272CA8u;
    // 0x272ca8: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x272ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x272cac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x272CACu;
    {
        const bool branch_taken_0x272cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CACu;
        // 0x272cb0: 0x24100038  addiu       $s0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272cac) {
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272CB4u;
    // 0x272cb4: 0x0  nop
    ctx->pc = 0x272cb4u;
    // NOP
label_272cb8:
    // 0x272cb8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272CB8u;
    SET_GPR_U32(ctx, 31, 0x272CC0u);
    ctx->pc = 0x272CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CB8u;
    // 0x272cbc: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272CB8u, 0x272CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CC0u;
label_272cc0:
    // 0x272cc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x272cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272cc4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x272cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x272cc8: 0x28420199  slti        $v0, $v0, 0x199
    ctx->pc = 0x272cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
    // 0x272ccc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x272CCCu;
    {
        const bool branch_taken_0x272ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CCCu;
        // 0x272cd0: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ccc) {
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272CD4u;
    // 0x272cd4: 0x0  nop
    ctx->pc = 0x272cd4u;
    // NOP
label_272cd8:
    // 0x272cd8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x272cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x272cdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x272CDCu;
    {
        const bool branch_taken_0x272cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272cdc) {
            ctx->pc = 0x272D08u;
            goto label_272d08;
        }
    }
    ctx->pc = 0x272CE4u;
    // 0x272ce4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272CE4u;
    SET_GPR_U32(ctx, 31, 0x272CECu);
    ctx->pc = 0x272CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CE4u;
    // 0x272ce8: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272CE4u, 0x272CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CECu;
label_272cec:
    // 0x272cec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x272cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272cf0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x272cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x272cf4: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x272cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272cf8: 0x28420199  slti        $v0, $v0, 0x199
    ctx->pc = 0x272cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
    // 0x272cfc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x272cfcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x272d00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x272D00u;
    {
        const bool branch_taken_0x272d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D00u;
        // 0x272d04: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d00) {
            ctx->pc = 0x272D28u;
            goto label_272d28;
        }
    }
    ctx->pc = 0x272D08u;
label_272d08:
    // 0x272d08: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272D08u;
    SET_GPR_U32(ctx, 31, 0x272D10u);
    ctx->pc = 0x272D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D08u;
    // 0x272d0c: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272D08u, 0x272D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D10u;
label_272d10:
    // 0x272d10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x272d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272d14: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272d18: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x272d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x272d1c: 0x28420199  slti        $v0, $v0, 0x199
    ctx->pc = 0x272d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
    // 0x272d20: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x272d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x272d24: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x272d24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_272d28:
    // 0x272d28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x272d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_272d2c:
    // 0x272d2c: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272D2Cu;
    {
        const bool branch_taken_0x272d2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x272d2c) {
            ctx->pc = 0x272D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272D2Cu;
            // 0x272d30: 0x3202003f  andi        $v0, $s0, 0x3F (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D48u;
            goto label_272d48;
        }
    }
    ctx->pc = 0x272D34u;
    // 0x272d34: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272d38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d3c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x272D3Cu;
    {
        const bool branch_taken_0x272d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D3Cu;
        // 0x272d40: 0xa4600006  sh          $zero, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d3c) {
            ctx->pc = 0x272EF4u;
            goto label_272ef4;
        }
    }
    ctx->pc = 0x272D44u;
    // 0x272d44: 0x0  nop
    ctx->pc = 0x272d44u;
    // NOP
label_272d48:
    // 0x272d48: 0x1040ff19  beqz        $v0, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x272D48u;
    {
        const bool branch_taken_0x272d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D48u;
        // 0x272d4c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d48) {
            ctx->pc = 0x2729B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2729b0;
        }
    }
    ctx->pc = 0x272D50u;
    // 0x272d50: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x272d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x272d54: 0x24532c30  addiu       $s3, $v0, 0x2C30
    ctx->pc = 0x272d54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11312));
    // 0x272d58: 0x24718858  addiu       $s1, $v1, -0x77A8
    ctx->pc = 0x272d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x272d5c: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x272d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_272d60:
    // 0x272d60: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272D60u;
    SET_GPR_U32(ctx, 31, 0x272D68u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272D60u, 0x272D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D68u;
label_272d68:
    // 0x272d68: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x272d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x272d6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x272d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x272d70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x272d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x272d74: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x272d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x272d78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x272d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x272d7c: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x272d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x272d80: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x272d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x272d84: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x272d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x272d88: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x272d88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x272d8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x272d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x272d90: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x272d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x272d94: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x272d94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272d98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x272d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x272d9c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x272d9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x272da0: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x272da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x272da4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x272DA4u;
    {
        const bool branch_taken_0x272da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DA4u;
        // 0x272da8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272da4) {
            ctx->pc = 0x272D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272d60;
        }
    }
    ctx->pc = 0x272DACu;
    // 0x272dac: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x272dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x272db0: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x272DB0u;
    {
        const bool branch_taken_0x272db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272db0) {
            ctx->pc = 0x272DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272DB0u;
            // 0x272db4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272E98u;
            goto label_272e98;
        }
    }
    ctx->pc = 0x272DB8u;
    // 0x272db8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x272db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x272dbc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x272dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x272dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x272dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x272dc4: 0x8c632c60  lw          $v1, 0x2C60($v1)
    ctx->pc = 0x272dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11360)));
    // 0x272dc8: 0x600008  jr          $v1
    ctx->pc = 0x272DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x272DD0u: goto label_272dd0;
            case 0x272DE0u: goto label_272de0;
            case 0x272E40u: goto label_272e40;
            case 0x272E58u: goto label_272e58;
            case 0x272E70u: goto label_272e70;
            case 0x272E88u: goto label_272e88;
            case 0x272E94u: goto label_272e94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272DC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x272DD0u;
label_272dd0:
    // 0x272dd0: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x272dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272dd4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x272DD4u;
    {
        const bool branch_taken_0x272dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DD4u;
        // 0x272dd8: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272dd4) {
            ctx->pc = 0x272E48u;
            goto label_272e48;
        }
    }
    ctx->pc = 0x272DDCu;
    // 0x272ddc: 0x0  nop
    ctx->pc = 0x272ddcu;
    // NOP
label_272de0:
    // 0x272de0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272de4: 0x84620420  lh          $v0, 0x420($v1)
    ctx->pc = 0x272de4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1056)));
    // 0x272de8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x272DE8u;
    {
        const bool branch_taken_0x272de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272de8) {
            ctx->pc = 0x272DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272DE8u;
            // 0x272dec: 0x94620004  lhu         $v0, 0x4($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272E28u;
            goto label_272e28;
        }
    }
    ctx->pc = 0x272DF0u;
    // 0x272df0: 0x84640424  lh          $a0, 0x424($v1)
    ctx->pc = 0x272df0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1060)));
    // 0x272df4: 0x84620426  lh          $v0, 0x426($v1)
    ctx->pc = 0x272df4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1062)));
    // 0x272df8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272DF8u;
    {
        const bool branch_taken_0x272df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x272DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DF8u;
        // 0x272dfc: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272df8) {
            ctx->pc = 0x272E18u;
            goto label_272e18;
        }
    }
    ctx->pc = 0x272E00u;
    // 0x272e00: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x272e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x272e04: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x272e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x272e08: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x272E08u;
    {
        const bool branch_taken_0x272e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272e08) {
            ctx->pc = 0x272E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272E08u;
            // 0x272e0c: 0x24024080  addiu       $v0, $zero, 0x4080 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16512));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272ECCu;
            goto label_272ecc;
        }
    }
    ctx->pc = 0x272E10u;
    // 0x272e10: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x272E10u;
    {
        const bool branch_taken_0x272e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E10u;
        // 0x272e14: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e10) {
            ctx->pc = 0x272ECCu;
            goto label_272ecc;
        }
    }
    ctx->pc = 0x272E18u;
label_272e18:
    // 0x272e18: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x272E18u;
    {
        const bool branch_taken_0x272e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272e18) {
            ctx->pc = 0x272E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272E18u;
            // 0x272e1c: 0x24024080  addiu       $v0, $zero, 0x4080 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16512));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272ECCu;
            goto label_272ecc;
        }
    }
    ctx->pc = 0x272E20u;
    // 0x272e20: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x272E20u;
    {
        const bool branch_taken_0x272e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E20u;
        // 0x272e24: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e20) {
            ctx->pc = 0x272ECCu;
            goto label_272ecc;
        }
    }
    ctx->pc = 0x272E28u;
label_272e28:
    // 0x272e28: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x272e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x272e2c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x272E2Cu;
    {
        const bool branch_taken_0x272e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272e2c) {
            ctx->pc = 0x272E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272E2Cu;
            // 0x272e30: 0x24024080  addiu       $v0, $zero, 0x4080 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16512));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272ECCu;
            goto label_272ecc;
        }
    }
    ctx->pc = 0x272E34u;
    // 0x272e34: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x272E34u;
    {
        const bool branch_taken_0x272e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E34u;
        // 0x272e38: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e34) {
            ctx->pc = 0x272ECCu;
            goto label_272ecc;
        }
    }
    ctx->pc = 0x272E3Cu;
    // 0x272e3c: 0x0  nop
    ctx->pc = 0x272e3cu;
    // NOP
label_272e40:
    // 0x272e40: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x272e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272e44: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x272e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_272e48:
    // 0x272e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272e4c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x272E4Cu;
    {
        const bool branch_taken_0x272e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E4Cu;
        // 0x272e50: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e4c) {
            ctx->pc = 0x272EF4u;
            goto label_272ef4;
        }
    }
    ctx->pc = 0x272E54u;
    // 0x272e54: 0x0  nop
    ctx->pc = 0x272e54u;
    // NOP
label_272e58:
    // 0x272e58: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x272e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x272e5c: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x272E5Cu;
    SET_GPR_U32(ctx, 31, 0x272E64u);
    ctx->pc = 0x272E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E5Cu;
    // 0x272e60: 0x2484bd68  addiu       $a0, $a0, -0x4298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x272E5Cu, 0x272E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E64u;
label_272e64:
    // 0x272e64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x272E64u;
    {
        const bool branch_taken_0x272e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E64u;
        // 0x272e68: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e64) {
            ctx->pc = 0x272E98u;
            goto label_272e98;
        }
    }
    ctx->pc = 0x272E6Cu;
    // 0x272e6c: 0x0  nop
    ctx->pc = 0x272e6cu;
    // NOP
label_272e70:
    // 0x272e70: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x272e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x272e74: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x272E74u;
    SET_GPR_U32(ctx, 31, 0x272E7Cu);
    ctx->pc = 0x272E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E74u;
    // 0x272e78: 0x2484bee8  addiu       $a0, $a0, -0x4118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x272E74u, 0x272E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E7Cu;
label_272e7c:
    // 0x272e7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x272E7Cu;
    {
        const bool branch_taken_0x272e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E7Cu;
        // 0x272e80: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e7c) {
            ctx->pc = 0x272E98u;
            goto label_272e98;
        }
    }
    ctx->pc = 0x272E84u;
    // 0x272e84: 0x0  nop
    ctx->pc = 0x272e84u;
    // NOP
label_272e88:
    // 0x272e88: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x272e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x272e8c: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x272E8Cu;
    SET_GPR_U32(ctx, 31, 0x272E94u);
    ctx->pc = 0x272E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E8Cu;
    // 0x272e90: 0x2484c380  addiu       $a0, $a0, -0x3C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x272E8Cu, 0x272E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E94u;
label_272e94:
    // 0x272e94: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_272e98:
    // 0x272e98: 0x8c6200a8  lw          $v0, 0xA8($v1)
    ctx->pc = 0x272e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x272e9c: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x272E9Cu;
    {
        const bool branch_taken_0x272e9c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x272e9c) {
            ctx->pc = 0x272ED8u;
            goto label_272ed8;
        }
    }
    ctx->pc = 0x272EA4u;
    // 0x272ea4: 0x8c620318  lw          $v0, 0x318($v1)
    ctx->pc = 0x272ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 792)));
    // 0x272ea8: 0x284200b4  slti        $v0, $v0, 0xB4
    ctx->pc = 0x272ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x272eac: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x272EACu;
    {
        const bool branch_taken_0x272eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272eac) {
            ctx->pc = 0x272EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272EACu;
            // 0x272eb0: 0xa4600006  sh          $zero, 0x6($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272EF0u;
            goto label_272ef0;
        }
    }
    ctx->pc = 0x272EB4u;
    // 0x272eb4: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x272eb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x272eb8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x272eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x272ebc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x272ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x272ec0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x272EC0u;
    {
        const bool branch_taken_0x272ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272ec0) {
            ctx->pc = 0x272EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272EC0u;
            // 0x272ec4: 0xa4600006  sh          $zero, 0x6($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272EF0u;
            goto label_272ef0;
        }
    }
    ctx->pc = 0x272EC8u;
    // 0x272ec8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x272ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_272ecc:
    // 0x272ecc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x272ECCu;
    {
        const bool branch_taken_0x272ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272ECCu;
        // 0x272ed0: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ecc) {
            ctx->pc = 0x272EF0u;
            goto label_272ef0;
        }
    }
    ctx->pc = 0x272ED4u;
    // 0x272ed4: 0x0  nop
    ctx->pc = 0x272ed4u;
    // NOP
label_272ed8:
    // 0x272ed8: 0xc09b492  jal         func_26D248
    ctx->pc = 0x272ED8u;
    SET_GPR_U32(ctx, 31, 0x272EE0u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x272ED8u, 0x272EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272EE0u;
label_272ee0:
    // 0x272ee0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272EE0u;
    {
        const bool branch_taken_0x272ee0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x272EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EE0u;
        // 0x272ee4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ee0) {
            ctx->pc = 0x272EF0u;
            goto label_272ef0;
        }
    }
    ctx->pc = 0x272EE8u;
    // 0x272ee8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x272ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x272eec: 0xac620310  sw          $v0, 0x310($v1)
    ctx->pc = 0x272eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 784), GPR_U32(ctx, 2));
label_272ef0:
    // 0x272ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272ef4:
    // 0x272ef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x272ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272ef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x272ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x272efc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x272efcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272f00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x272f00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x272f04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x272f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272f08: 0x3e00008  jr          $ra
    ctx->pc = 0x272F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F08u;
        // 0x272f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272F10u;
}
