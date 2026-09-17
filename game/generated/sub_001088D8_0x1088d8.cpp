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

// Function: sub_001088D8
// Address: 0x1088d8 - 0x108b48
void sub_001088D8_0x1088d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001088D8_0x1088d8");
#endif

    switch (ctx->pc) {
        case 0x10896cu: goto label_10896c;
        case 0x108998u: goto label_108998;
        case 0x1089a8u: goto label_1089a8;
        case 0x108a88u: goto label_108a88;
        case 0x108a98u: goto label_108a98;
        default: break;
    }

    ctx->pc = 0x1088d8u;

    // 0x1088d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1088d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1088dc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1088dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1088e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1088e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1088e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1088e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1088e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1088e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1088ec: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1088ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1088f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1088f4: 0x8c820820  lw          $v0, 0x820($a0)
    ctx->pc = 0x1088f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2080)));
    // 0x1088f8: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x1088f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1088fc: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x1088fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x108900: 0xac4906dc  sw          $t1, 0x6DC($v0)
    ctx->pc = 0x108900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 9));
    // 0x108904: 0xac8901c0  sw          $t1, 0x1C0($a0)
    ctx->pc = 0x108904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 9));
    // 0x108908: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x108908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x10890c: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10890Cu;
    {
        const bool branch_taken_0x10890c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x10890c) {
            ctx->pc = 0x108910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10890Cu;
            // 0x108910: 0x8c830184  lw          $v1, 0x184($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108928u;
            goto label_108928;
        }
    }
    ctx->pc = 0x108914u;
    // 0x108914: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x108914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x108918: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x108918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x10891c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x10891cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x108920: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x108920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x108924: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x108924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
label_108928:
    // 0x108928: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10892c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10892Cu;
    {
        const bool branch_taken_0x10892c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10892c) {
            ctx->pc = 0x108930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10892Cu;
            // 0x108930: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10893Cu;
            goto label_10893c;
        }
    }
    ctx->pc = 0x108934u;
    // 0x108934: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x108934u;
    {
        const bool branch_taken_0x108934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108934u;
        // 0x108938: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108934) {
            ctx->pc = 0x108950u;
            goto label_108950;
        }
    }
    ctx->pc = 0x10893Cu;
label_10893c:
    // 0x10893c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x10893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x108940: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x108940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x108944: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x108944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x108948: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x108948u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x10894c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x10894cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_108950:
    // 0x108950: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x108950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x108954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108958: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108958u;
    {
        const bool branch_taken_0x108958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108958) {
            ctx->pc = 0x10895Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108958u;
            // 0x10895c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108974u;
            goto label_108974;
        }
    }
    ctx->pc = 0x108960u;
    // 0x108960: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x108960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x108964: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x108964u;
    SET_GPR_U32(ctx, 31, 0x10896Cu);
    ctx->pc = 0x108968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108964u;
    // 0x108968: 0x24a5da60  addiu       $a1, $a1, -0x25A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x108964u, 0x10896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10896Cu;
label_10896c:
    // 0x10896c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10896cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108970: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x108970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_108974:
    // 0x108974: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x108974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x108978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10897c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x10897cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108980: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x108980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x108984: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x108984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x108988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10898c: 0x3e00008  jr          $ra
    ctx->pc = 0x10898Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10898Cu;
        // 0x108990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10898Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108994u;
    // 0x108994: 0x0  nop
    ctx->pc = 0x108994u;
    // NOP
label_108998:
    // 0x108998: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x108998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10899c: 0x3c0a0011  lui         $t2, 0x11
    ctx->pc = 0x10899cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17 << 16));
    // 0x1089a0: 0x254a8b30  addiu       $t2, $t2, -0x74D0
    ctx->pc = 0x1089a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937392));
    // 0x1089a4: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x1089a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x108B30u));
label_1089a8:
    // 0x1089a8: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x1089a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1089ac: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x1089acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x1089b0: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x1089b0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1089b4: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x1089b4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1089b8: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x1089b8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1089bc: 0x78cc0040  lq          $t4, 0x40($a2)
    ctx->pc = 0x1089bcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1089c0: 0x78cd0050  lq          $t5, 0x50($a2)
    ctx->pc = 0x1089c0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x1089c4: 0x78ce0060  lq          $t6, 0x60($a2)
    ctx->pc = 0x1089c4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1089c8: 0x78cf0070  lq          $t7, 0x70($a2)
    ctx->pc = 0x1089c8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1089cc: 0x78b90000  lq          $t9, 0x0($a1)
    ctx->pc = 0x1089ccu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1089d0: 0x71194108  paddh       $t0, $t0, $t9
    ctx->pc = 0x1089d0u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x1089d4: 0x78b90010  lq          $t9, 0x10($a1)
    ctx->pc = 0x1089d4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1089d8: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x1089d8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x1089dc: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x1089dcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1089e0: 0x71394908  paddh       $t1, $t1, $t9
    ctx->pc = 0x1089e0u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x1089e4: 0x78b90020  lq          $t9, 0x20($a1)
    ctx->pc = 0x1089e4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1089e8: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x1089e8u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x1089ec: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x1089ecu;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1089f0: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x1089f0u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1089f4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x1089f4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x1089f8: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x1089f8u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x1089fc: 0x78b90030  lq          $t9, 0x30($a1)
    ctx->pc = 0x1089fcu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x108a00: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x108a00u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108a04: 0x71795908  paddh       $t3, $t3, $t9
    ctx->pc = 0x108a04u;
    SET_GPR_VEC(ctx, 11, PS2_PADDH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 25)));
    // 0x108a08: 0x78b90040  lq          $t9, 0x40($a1)
    ctx->pc = 0x108a08u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x108a0c: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x108a0cu;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x108a10: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x108a10u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x108a14: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x108a14u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x108a18: 0x71996108  paddh       $t4, $t4, $t9
    ctx->pc = 0x108a18u;
    SET_GPR_VEC(ctx, 12, PS2_PADDH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 25)));
    // 0x108a1c: 0x78b90050  lq          $t9, 0x50($a1)
    ctx->pc = 0x108a1cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x108a20: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x108a20u;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x108a24: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x108a24u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x108a28: 0x71b96908  paddh       $t5, $t5, $t9
    ctx->pc = 0x108a28u;
    SET_GPR_VEC(ctx, 13, PS2_PADDH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 25)));
    // 0x108a2c: 0x78b90060  lq          $t9, 0x60($a1)
    ctx->pc = 0x108a2cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x108a30: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x108a30u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x108a34: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x108a34u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x108a38: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x108a38u;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x108a3c: 0x71d97108  paddh       $t6, $t6, $t9
    ctx->pc = 0x108a3cu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 25)));
    // 0x108a40: 0x78b90070  lq          $t9, 0x70($a1)
    ctx->pc = 0x108a40u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x108a44: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x108a44u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x108a48: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x108a48u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x108a4c: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x108a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x108a50: 0x71f97908  paddh       $t7, $t7, $t9
    ctx->pc = 0x108a50u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x108a54: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x108a54u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x108a58: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x108a58u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x108a5c: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x108a5cu;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x108a60: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x108a60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x108a64: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x108a64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x108a68: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x108a68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x108a6c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108a70: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x108a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x108a74: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x108A74u;
    {
        const bool branch_taken_0x108a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A74u;
        // 0x108a78: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a74) {
            ctx->pc = 0x1089A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1089a8;
        }
    }
    ctx->pc = 0x108A7Cu;
    // 0x108a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x108A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108A84u;
    // 0x108a84: 0x0  nop
    ctx->pc = 0x108a84u;
    // NOP
label_108a88:
    // 0x108a88: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x108a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x108a8c: 0x3c0a0011  lui         $t2, 0x11
    ctx->pc = 0x108a8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17 << 16));
    // 0x108a90: 0x254a8b30  addiu       $t2, $t2, -0x74D0
    ctx->pc = 0x108a90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937392));
    // 0x108a94: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x108a94u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x108B30u));
label_108a98:
    // 0x108a98: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x108a98u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108a9c: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x108a9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x108aa0: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x108aa0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108aa4: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108aa8: 0x7b290010  lq          $t1, 0x10($t9)
    ctx->pc = 0x108aa8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x108aac: 0x7b2a0020  lq          $t2, 0x20($t9)
    ctx->pc = 0x108aacu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x108ab0: 0x7b2b0030  lq          $t3, 0x30($t9)
    ctx->pc = 0x108ab0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x108ab4: 0x7b2c0040  lq          $t4, 0x40($t9)
    ctx->pc = 0x108ab4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x108ab8: 0x7b2d0050  lq          $t5, 0x50($t9)
    ctx->pc = 0x108ab8u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x108abc: 0x7b2e0060  lq          $t6, 0x60($t9)
    ctx->pc = 0x108abcu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 25), 96)));
    // 0x108ac0: 0x7b2f0070  lq          $t7, 0x70($t9)
    ctx->pc = 0x108ac0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 25), 112)));
    // 0x108ac4: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x108ac4u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x108ac8: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x108ac8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x108acc: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x108accu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x108ad0: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x108ad0u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x108ad4: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x108ad4u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108ad8: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x108ad8u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x108adc: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x108adcu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108ae0: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x108ae0u;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x108ae4: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x108ae4u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x108ae8: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x108ae8u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x108aec: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x108aecu;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x108af0: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x108af0u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x108af4: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x108af4u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x108af8: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x108af8u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x108afc: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x108afcu;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x108b00: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x108b00u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x108b04: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x108b04u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x108b08: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x108b08u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x108b0c: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x108b0cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x108b10: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x108b10u;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x108b14: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x108b14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x108b18: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x108b18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x108b1c: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x108b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x108b20: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x108b20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x108b24: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x108B24u;
    {
        const bool branch_taken_0x108b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108B24u;
        // 0x108b28: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b24) {
            ctx->pc = 0x108A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108a98;
        }
    }
    ctx->pc = 0x108B2Cu;
    // 0x108b2c: 0x0  nop
    ctx->pc = 0x108b2cu;
    // NOP
    // 0x108b30: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x108b30u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x108b34: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x108b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x108b38: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x108b38u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x108b3c: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x108b3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x108b40: 0x3e00008  jr          $ra
    ctx->pc = 0x108B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108B48u;
}
