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

// Function: sub_00224CE0
// Address: 0x224ce0 - 0x225388
void sub_00224CE0_0x224ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224CE0_0x224ce0");
#endif

    switch (ctx->pc) {
        case 0x224d28u: goto label_224d28;
        case 0x224d54u: goto label_224d54;
        case 0x224d68u: goto label_224d68;
        case 0x224d7cu: goto label_224d7c;
        case 0x224e10u: goto label_224e10;
        case 0x224e30u: goto label_224e30;
        case 0x224ea8u: goto label_224ea8;
        case 0x224ec0u: goto label_224ec0;
        case 0x224f40u: goto label_224f40;
        case 0x224f78u: goto label_224f78;
        case 0x225060u: goto label_225060;
        case 0x225070u: goto label_225070;
        case 0x22508cu: goto label_22508c;
        case 0x22509cu: goto label_22509c;
        case 0x2250b0u: goto label_2250b0;
        case 0x2250bcu: goto label_2250bc;
        case 0x2250ccu: goto label_2250cc;
        case 0x2250e0u: goto label_2250e0;
        case 0x2250ecu: goto label_2250ec;
        case 0x225108u: goto label_225108;
        case 0x22512cu: goto label_22512c;
        case 0x225144u: goto label_225144;
        case 0x22515cu: goto label_22515c;
        case 0x225174u: goto label_225174;
        case 0x225190u: goto label_225190;
        case 0x2251bcu: goto label_2251bc;
        case 0x2251d8u: goto label_2251d8;
        case 0x22522cu: goto label_22522c;
        case 0x225238u: goto label_225238;
        case 0x225260u: goto label_225260;
        case 0x225268u: goto label_225268;
        case 0x225278u: goto label_225278;
        case 0x225288u: goto label_225288;
        case 0x2252b0u: goto label_2252b0;
        case 0x2252d8u: goto label_2252d8;
        case 0x225300u: goto label_225300;
        case 0x225308u: goto label_225308;
        case 0x225310u: goto label_225310;
        case 0x225324u: goto label_225324;
        case 0x225338u: goto label_225338;
        default: break;
    }

    ctx->pc = 0x224ce0u;

    // 0x224ce0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x224ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x224ce4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x224ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x224ce8: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x224ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x224cec: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x224cecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x224cf0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x224cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x224cf4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x224cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cf8: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x224cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x224cfc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x224cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d04: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x224d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x224d08: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x224d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x224d0c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x224d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x224d10: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x224d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x224d14: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x224d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x224d18: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x224d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x224d1c: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x224d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x224d20: 0xc04a151  jal         func_128544
    ctx->pc = 0x224D20u;
    SET_GPR_U32(ctx, 31, 0x224D28u);
    ctx->pc = 0x224D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D20u;
    // 0x224d24: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x224D20u, 0x224D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D28u;
label_224d28:
    // 0x224d28: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x224d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x224d2c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x224d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x224d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x224d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d34: 0x24622d48  addiu       $v0, $v1, 0x2D48
    ctx->pc = 0x224d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11592));
    // 0x224d38: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x224d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x224d3c: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x224d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x224d40: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x224d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224d44: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x224d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d4c: 0xc04a151  jal         func_128544
    ctx->pc = 0x224D4Cu;
    SET_GPR_U32(ctx, 31, 0x224D54u);
    ctx->pc = 0x224D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D4Cu;
    // 0x224d50: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x224D4Cu, 0x224D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D54u;
label_224d54:
    // 0x224d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d58: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x224d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x224d5c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x224d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x224d60: 0xc04a151  jal         func_128544
    ctx->pc = 0x224D60u;
    SET_GPR_U32(ctx, 31, 0x224D68u);
    ctx->pc = 0x224D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D60u;
    // 0x224d64: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x224D60u, 0x224D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D68u;
label_224d68:
    // 0x224d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d6c: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x224d6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x224d70: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x224d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x224d74: 0xc04a151  jal         func_128544
    ctx->pc = 0x224D74u;
    SET_GPR_U32(ctx, 31, 0x224D7Cu);
    ctx->pc = 0x224D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D74u;
    // 0x224d78: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x224D74u, 0x224D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D7Cu;
label_224d7c:
    // 0x224d7c: 0x86630042  lh          $v1, 0x42($s3)
    ctx->pc = 0x224d7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
    // 0x224d80: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x224d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x224d84: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x224D84u;
    {
        const bool branch_taken_0x224d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224d84) {
            ctx->pc = 0x224D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224D84u;
            // 0x224d88: 0x86430042  lh          $v1, 0x42($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224DB4u;
            goto label_224db4;
        }
    }
    ctx->pc = 0x224D8Cu;
    // 0x224d8c: 0x86420042  lh          $v0, 0x42($s2)
    ctx->pc = 0x224d8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x224d90: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x224D90u;
    {
        const bool branch_taken_0x224d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x224d90) {
            ctx->pc = 0x224D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224D90u;
            // 0x224d94: 0x9642003e  lhu         $v0, 0x3E($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224DA8u;
            goto label_224da8;
        }
    }
    ctx->pc = 0x224D98u;
    // 0x224d98: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x224d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x224d9c: 0xa642003e  sh          $v0, 0x3E($s2)
    ctx->pc = 0x224d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x224da0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x224DA0u;
    {
        const bool branch_taken_0x224da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DA0u;
        // 0x224da4: 0xa662003e  sh          $v0, 0x3E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224da0) {
            ctx->pc = 0x224DC4u;
            goto label_224dc4;
        }
    }
    ctx->pc = 0x224DA8u;
label_224da8:
    // 0x224da8: 0xa662003e  sh          $v0, 0x3E($s3)
    ctx->pc = 0x224da8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x224dac: 0x86430042  lh          $v1, 0x42($s2)
    ctx->pc = 0x224dacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x224db0: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x224db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_224db4:
    // 0x224db4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x224DB4u;
    {
        const bool branch_taken_0x224db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x224DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DB4u;
        // 0x224db8: 0x3c07003b  lui         $a3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224db4) {
            ctx->pc = 0x224DC8u;
            goto label_224dc8;
        }
    }
    ctx->pc = 0x224DBCu;
    // 0x224dbc: 0x9662003e  lhu         $v0, 0x3E($s3)
    ctx->pc = 0x224dbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 62)));
    // 0x224dc0: 0xa642003e  sh          $v0, 0x3E($s2)
    ctx->pc = 0x224dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 2));
label_224dc4:
    // 0x224dc4: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x224dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
label_224dc8:
    // 0x224dc8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x224dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x224dcc: 0x24e483c0  addiu       $a0, $a3, -0x7C40
    ctx->pc = 0x224dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935488));
    // 0x224dd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x224dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224dd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x224dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x224dd8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x224DD8u;
    {
        const bool branch_taken_0x224dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x224DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DD8u;
        // 0x224ddc: 0xafb20004  sw          $s2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224dd8) {
            ctx->pc = 0x224DF8u;
            goto label_224df8;
        }
    }
    ctx->pc = 0x224DE0u;
    // 0x224de0: 0x9083002d  lbu         $v1, 0x2D($a0)
    ctx->pc = 0x224de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x224de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224de8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x224DE8u;
    {
        const bool branch_taken_0x224de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x224DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DE8u;
        // 0x224dec: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224de8) {
            ctx->pc = 0x224DFCu;
            goto label_224dfc;
        }
    }
    ctx->pc = 0x224DF0u;
    // 0x224df0: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x224df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x224df4: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x224df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
label_224df8:
    // 0x224df8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x224df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_224dfc:
    // 0x224dfc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x224dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x224e00: 0x245183c0  addiu       $s1, $v0, -0x7C40
    ctx->pc = 0x224e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x224e04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x224e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e08: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x224e08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x224e0c: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x224e0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_224e10:
    // 0x224e10: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x224e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x224e14: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x224e14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x224e18: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x224e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x224e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e20: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x224e20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224e24: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x224e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e28: 0xc085318  jal         func_214C60
    ctx->pc = 0x224E28u;
    SET_GPR_U32(ctx, 31, 0x224E30u);
    ctx->pc = 0x224E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E28u;
    // 0x224e2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214C60u, 0x224E28u, 0x224E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E30u;
label_224e30:
    // 0x224e30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x224e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e34: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x224E34u;
    {
        const bool branch_taken_0x224e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E34u;
        // 0x224e38: 0x2a840002  slti        $a0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e34) {
            ctx->pc = 0x224E48u;
            goto label_224e48;
        }
    }
    ctx->pc = 0x224E3Cu;
    // 0x224e3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x224e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x224e40: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x224e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x224e44: 0x2a2180a  movz        $v1, $s5, $v0
    ctx->pc = 0x224e44u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
label_224e48:
    // 0x224e48: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x224e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x224e4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x224e50: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x224e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x224e54: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x224E54u;
    {
        const bool branch_taken_0x224e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E54u;
        // 0x224e58: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e54) {
            ctx->pc = 0x224E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224e10;
        }
    }
    ctx->pc = 0x224E5Cu;
    // 0x224e5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x224e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x224e60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x224E60u;
    {
        const bool branch_taken_0x224e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E60u;
        // 0x224e64: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e60) {
            ctx->pc = 0x224E7Cu;
            goto label_224e7c;
        }
    }
    ctx->pc = 0x224E68u;
    // 0x224e68: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x224e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x224e6c: 0x38420080  xori        $v0, $v0, 0x80
    ctx->pc = 0x224e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)128);
    // 0x224e70: 0x38630080  xori        $v1, $v1, 0x80
    ctx->pc = 0x224e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)128);
    // 0x224e74: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x224e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x224e78: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x224e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_224e7c:
    // 0x224e7c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x224e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x224e80: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x224e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x224e84: 0x244e6154  addiu       $t6, $v0, 0x6154
    ctx->pc = 0x224e84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 24916));
    // 0x224e88: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x224e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x224e8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e90: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x224e90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e94: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x224e94u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e98: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x224e98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224e9c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x224e9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ea0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x224ea0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ea4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x224ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_224ea8:
    // 0x224ea8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x224ea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224eac: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x224eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x224eb0: 0x1a24021  addu        $t0, $t5, $v0
    ctx->pc = 0x224eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x224eb4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x224eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224eb8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x224eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x224ebc: 0x0  nop
    ctx->pc = 0x224ebcu;
    // NOP
label_224ec0:
    // 0x224ec0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x224ec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x224ec4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x224ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x224ec8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x224ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224ecc: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x224eccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x224ed0: 0x8604003e  lh          $a0, 0x3E($s0)
    ctx->pc = 0x224ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x224ed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x224ed8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x224ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x224edc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x224edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224ee0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x224ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x224ee4: 0x14e4000a  bne         $a3, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x224EE4u;
    {
        const bool branch_taken_0x224ee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x224EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EE4u;
        // 0x224ee8: 0x2a850002  slti        $a1, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ee4) {
            ctx->pc = 0x224F10u;
            goto label_224f10;
        }
    }
    ctx->pc = 0x224EECu;
    // 0x224eec: 0xad0c0000  sw          $t4, 0x0($t0)
    ctx->pc = 0x224eecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 12));
    // 0x224ef0: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x224ef0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x224ef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x224ef8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x224ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x224efc: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x224efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x224f00: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x224f00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x224f04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224f08: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x224f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x224f0c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x224f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_224f10:
    // 0x224f10: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x224F10u;
    {
        const bool branch_taken_0x224f10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x224F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F10u;
        // 0x224f14: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f10) {
            ctx->pc = 0x224EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224ec0;
        }
    }
    ctx->pc = 0x224F18u;
    // 0x224f18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x224f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x224f1c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x224f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x224f20: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x224F20u;
    {
        const bool branch_taken_0x224f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F20u;
        // 0x224f24: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f20) {
            ctx->pc = 0x224EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224ea8;
        }
    }
    ctx->pc = 0x224F28u;
    // 0x224f28: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x224f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x224f2c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x224f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x224f30: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x224f30u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f34: 0x244f6154  addiu       $t7, $v0, 0x6154
    ctx->pc = 0x224f34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 24916));
    // 0x224f38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f3c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x224f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_224f40:
    // 0x224f40: 0x1c41021  addu        $v0, $t6, $a0
    ctx->pc = 0x224f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x224f44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x224f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224f48: 0x54600030  bnel        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x224F48u;
    {
        const bool branch_taken_0x224f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224f48) {
            ctx->pc = 0x224F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224F48u;
            // 0x224f4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22500Cu;
            goto label_22500c;
        }
    }
    ctx->pc = 0x224F50u;
    // 0x224f50: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x224f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x224f54: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x224f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x224f58: 0x8f6821  addu        $t5, $a0, $t7
    ctx->pc = 0x224f58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x224f5c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x224f5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f60: 0x2e0602d  daddu       $t4, $s7, $zero
    ctx->pc = 0x224f60u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f64: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x224f64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f68: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x224f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224f6c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x224f6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f70: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x224f70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f74: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x224f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_224f78:
    // 0x224f78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x224f78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x224f7c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x224f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x224f80: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x224f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x224f84: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x224f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x224f88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x224f8c: 0x1622021  addu        $a0, $t3, $v0
    ctx->pc = 0x224f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x224f90: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x224f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x224f94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x224f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224f98: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x224F98u;
    {
        const bool branch_taken_0x224f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F98u;
        // 0x224f9c: 0x2a870002  slti        $a3, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f98) {
            ctx->pc = 0x225000u;
            goto label_225000;
        }
    }
    ctx->pc = 0x224FA0u;
    // 0x224fa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x224fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x224fa4: 0x8602003e  lh          $v0, 0x3E($s0)
    ctx->pc = 0x224fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x224fa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x224fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x224fac: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x224facu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x224fb0: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x224fb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x224fb4: 0x8665003e  lh          $a1, 0x3E($s3)
    ctx->pc = 0x224fb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 62)));
    // 0x224fb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224fbc: 0x8644003e  lh          $a0, 0x3E($s2)
    ctx->pc = 0x224fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x224fc0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x224fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x224fc4: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x224fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x224fc8: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x224fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x224fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x224fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x224fd0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x224fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x224fd4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x224fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x224fd8: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x224fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x224fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x224fe0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x224fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x224fe4: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x224fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x224fe8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x224fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x224fec: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x224fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x224ff0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x224ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x224ff4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x224ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x224ff8: 0x54a40004  bnel        $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x224FF8u;
    {
        const bool branch_taken_0x224ff8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x224ff8) {
            ctx->pc = 0x224FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224FF8u;
            // 0x224ffc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22500Cu;
            goto label_22500c;
        }
    }
    ctx->pc = 0x225000u;
label_225000:
    // 0x225000: 0x14e0ffdd  bnez        $a3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x225000u;
    {
        const bool branch_taken_0x225000 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x225004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225000u;
        // 0x225004: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225000) {
            ctx->pc = 0x224F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224f78;
        }
    }
    ctx->pc = 0x225008u;
    // 0x225008: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x225008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22500c:
    // 0x22500c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x22500cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x225010: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x225010u;
    {
        const bool branch_taken_0x225010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225010u;
        // 0x225014: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225010) {
            ctx->pc = 0x224F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224f40;
        }
    }
    ctx->pc = 0x225018u;
    // 0x225018: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x225018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x22501c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x22501cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x225020: 0x24666150  addiu       $a2, $v1, 0x6150
    ctx->pc = 0x225020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x225024: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x225024u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x156150u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156150u, _value); } while (0);
    // 0x225028: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x225028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x22502c: 0x8663003e  lh          $v1, 0x3E($s3)
    ctx->pc = 0x22502cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 62)));
    // 0x225030: 0x8642003e  lh          $v0, 0x3E($s2)
    ctx->pc = 0x225030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x225034: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x225034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x225038: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x225038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22503c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22503Cu;
    {
        const bool branch_taken_0x22503c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x225040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22503Cu;
        // 0x225040: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22503c) {
            ctx->pc = 0x225058u;
            goto label_225058;
        }
    }
    ctx->pc = 0x225044u;
    // 0x225044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225044u;
    {
        const bool branch_taken_0x225044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225044u;
        // 0x225048: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225044) {
            ctx->pc = 0x225058u;
            goto label_225058;
        }
    }
    ctx->pc = 0x22504Cu;
    // 0x22504c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22504Cu;
    {
        const bool branch_taken_0x22504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22504Cu;
        // 0x225050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22504c) {
            ctx->pc = 0x225058u;
            goto label_225058;
        }
    }
    ctx->pc = 0x225054u;
    // 0x225054: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x225054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_225058:
    // 0x225058: 0xc040510  jal         func_101440
    ctx->pc = 0x225058u;
    SET_GPR_U32(ctx, 31, 0x225060u);
    ctx->pc = 0x101440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101440u, 0x225058u, 0x225060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225060u;
label_225060:
    // 0x225060: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x225060u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x225064: 0x24f06150  addiu       $s0, $a3, 0x6150
    ctx->pc = 0x225064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 24912));
    // 0x225068: 0xc040522  jal         func_101488
    ctx->pc = 0x225068u;
    SET_GPR_U32(ctx, 31, 0x225070u);
    ctx->pc = 0x22506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225068u;
    // 0x22506c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101488u, 0x225068u, 0x225070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225070u;
label_225070:
    // 0x225070: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x225070u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x225074: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x225074u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x225078: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x225078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22507c: 0x26036170  addiu       $v1, $s0, 0x6170
    ctx->pc = 0x22507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24944));
    // 0x225080: 0x3231007f  andi        $s1, $s1, 0x7F
    ctx->pc = 0x225080u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
    // 0x225084: 0xc0404c4  jal         func_101310
    ctx->pc = 0x225084u;
    SET_GPR_U32(ctx, 31, 0x22508Cu);
    ctx->pc = 0x225088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225084u;
    // 0x225088: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101310u, 0x225084u, 0x22508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22508Cu;
label_22508c:
    // 0x22508c: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22508Cu;
    {
        const bool branch_taken_0x22508c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x22508c) {
            ctx->pc = 0x2250A8u;
            goto label_2250a8;
        }
    }
    ctx->pc = 0x225094u;
    // 0x225094: 0xc0404c4  jal         func_101310
    ctx->pc = 0x225094u;
    SET_GPR_U32(ctx, 31, 0x22509Cu);
    ctx->pc = 0x225098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225094u;
    // 0x225098: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101310u, 0x225094u, 0x22509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22509Cu;
label_22509c:
    // 0x22509c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22509Cu;
    {
        const bool branch_taken_0x22509c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22509Cu;
        // 0x2250a0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22509c) {
            ctx->pc = 0x2250B4u;
            goto label_2250b4;
        }
    }
    ctx->pc = 0x2250A4u;
    // 0x2250a4: 0x0  nop
    ctx->pc = 0x2250a4u;
    // NOP
label_2250a8:
    // 0x2250a8: 0xc0404c4  jal         func_101310
    ctx->pc = 0x2250A8u;
    SET_GPR_U32(ctx, 31, 0x2250B0u);
    ctx->pc = 0x2250ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250A8u;
    // 0x2250ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101310u, 0x2250A8u, 0x2250B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250B0u;
label_2250b0:
    // 0x2250b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2250b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2250b4:
    // 0x2250b4: 0xc0404c4  jal         func_101310
    ctx->pc = 0x2250B4u;
    SET_GPR_U32(ctx, 31, 0x2250BCu);
    ctx->pc = 0x2250B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250B4u;
    // 0x2250b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101310u, 0x2250B4u, 0x2250BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250BCu;
label_2250bc:
    // 0x2250bc: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2250BCu;
    {
        const bool branch_taken_0x2250bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2250bc) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x2250C4u;
    // 0x2250c4: 0xc0404c4  jal         func_101310
    ctx->pc = 0x2250C4u;
    SET_GPR_U32(ctx, 31, 0x2250CCu);
    ctx->pc = 0x2250C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250C4u;
    // 0x2250c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101310u, 0x2250C4u, 0x2250CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250CCu;
label_2250cc:
    // 0x2250cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2250CCu;
    {
        const bool branch_taken_0x2250cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2250D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2250CCu;
        // 0x2250d0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250cc) {
            ctx->pc = 0x2250E4u;
            goto label_2250e4;
        }
    }
    ctx->pc = 0x2250D4u;
    // 0x2250d4: 0x0  nop
    ctx->pc = 0x2250d4u;
    // NOP
label_2250d8:
    // 0x2250d8: 0xc0404c4  jal         func_101310
    ctx->pc = 0x2250D8u;
    SET_GPR_U32(ctx, 31, 0x2250E0u);
    ctx->pc = 0x2250DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250D8u;
    // 0x2250dc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101310u, 0x2250D8u, 0x2250E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250E0u;
label_2250e0:
    // 0x2250e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2250e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2250e4:
    // 0x2250e4: 0xc040510  jal         func_101440
    ctx->pc = 0x2250E4u;
    SET_GPR_U32(ctx, 31, 0x2250ECu);
    ctx->pc = 0x2250E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2250E4u;
    // 0x2250e8: 0x26106170  addiu       $s0, $s0, 0x6170 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101440u, 0x2250E4u, 0x2250ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250ECu;
label_2250ec:
    // 0x2250ec: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2250ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2250f0: 0x25116150  addiu       $s1, $t0, 0x6150
    ctx->pc = 0x2250f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 24912));
    // 0x2250f4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2250f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2250f8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2250f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x156160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x156160u, _value); } while (0);
    // 0x2250fc: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x2250fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x225100: 0xc040522  jal         func_101488
    ctx->pc = 0x225100u;
    SET_GPR_U32(ctx, 31, 0x225108u);
    ctx->pc = 0x225104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225100u;
    // 0x225104: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101488u, 0x225100u, 0x225108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225108u;
label_225108:
    // 0x225108: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x225108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22510c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225110: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x225110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x225114: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x225114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x225118: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x225118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22511c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22511cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225120: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x225120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x225124: 0xc0404b2  jal         func_1012C8
    ctx->pc = 0x225124u;
    SET_GPR_U32(ctx, 31, 0x22512Cu);
    ctx->pc = 0x225128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225124u;
    // 0x225128: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012C8u, 0x225124u, 0x22512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22512Cu;
label_22512c:
    // 0x22512c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x225130: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x225130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x225134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x225134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225138: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x225138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22513c: 0xc0404b2  jal         func_1012C8
    ctx->pc = 0x22513Cu;
    SET_GPR_U32(ctx, 31, 0x225144u);
    ctx->pc = 0x225140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22513Cu;
    // 0x225140: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012C8u, 0x22513Cu, 0x225144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225144u;
label_225144:
    // 0x225144: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x225144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225148: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x225148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22514c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22514cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225150: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x225150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x225154: 0xc0404b2  jal         func_1012C8
    ctx->pc = 0x225154u;
    SET_GPR_U32(ctx, 31, 0x22515Cu);
    ctx->pc = 0x225158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225154u;
    // 0x225158: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012C8u, 0x225154u, 0x22515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22515Cu;
label_22515c:
    // 0x22515c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225160: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x225160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x225164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x225164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225168: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x225168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22516c: 0xc0404b2  jal         func_1012C8
    ctx->pc = 0x22516Cu;
    SET_GPR_U32(ctx, 31, 0x225174u);
    ctx->pc = 0x225170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22516Cu;
    // 0x225170: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012C8u, 0x22516Cu, 0x225174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225174u;
label_225174:
    // 0x225174: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x225174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225178: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x225178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x22517c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x22517cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x225180: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x225180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x225184: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x225184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x225188: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x225188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x22518c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x22518cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_225190:
    // 0x225190: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x225190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225194: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x225194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x225198: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x225198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22519c: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x22519cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2251a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2251a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2251a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2251a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2251a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2251a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2251ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2251acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251b0: 0x24530003  addiu       $s3, $v0, 0x3
    ctx->pc = 0x2251b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2251b4: 0xc0404be  jal         func_1012F8
    ctx->pc = 0x2251B4u;
    SET_GPR_U32(ctx, 31, 0x2251BCu);
    ctx->pc = 0x2251B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2251B4u;
    // 0x2251b8: 0x24550004  addiu       $s5, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012F8u, 0x2251B4u, 0x2251BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2251BCu;
label_2251bc:
    // 0x2251bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2251bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251c0: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2251c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2251c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2251c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2251c8: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2251c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2251cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2251ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2251d0: 0xc0404be  jal         func_1012F8
    ctx->pc = 0x2251D0u;
    SET_GPR_U32(ctx, 31, 0x2251D8u);
    ctx->pc = 0x2251D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2251D0u;
    // 0x2251d4: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012F8u, 0x2251D0u, 0x2251D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2251D8u;
label_2251d8:
    // 0x2251d8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2251d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2251dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2251dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251e0: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2251e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2251e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2251e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2251e8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2251e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2251ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2251ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2251f0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2251F0u;
    {
        const bool branch_taken_0x2251f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2251F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251F0u;
        // 0x2251f4: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251f0) {
            ctx->pc = 0x225208u;
            goto label_225208;
        }
    }
    ctx->pc = 0x2251F8u;
    // 0x2251f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2251f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2251fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2251FCu;
    {
        const bool branch_taken_0x2251fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2251FCu;
        // 0x225200: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251fc) {
            ctx->pc = 0x225224u;
            goto label_225224;
        }
    }
    ctx->pc = 0x225204u;
    // 0x225204: 0x0  nop
    ctx->pc = 0x225204u;
    // NOP
label_225208:
    // 0x225208: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225208u;
    {
        const bool branch_taken_0x225208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x225208) {
            ctx->pc = 0x22520Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225208u;
            // 0x22520c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225220u;
            goto label_225220;
        }
    }
    ctx->pc = 0x225210u;
    // 0x225210: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x225210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x225214: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x225214u;
    {
        const bool branch_taken_0x225214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225214u;
        // 0x225218: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225214) {
            ctx->pc = 0x225224u;
            goto label_225224;
        }
    }
    ctx->pc = 0x22521Cu;
    // 0x22521c: 0x0  nop
    ctx->pc = 0x22521cu;
    // NOP
label_225220:
    // 0x225220: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x225220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_225224:
    // 0x225224: 0xc08970c  jal         func_225C30
    ctx->pc = 0x225224u;
    SET_GPR_U32(ctx, 31, 0x22522Cu);
    ctx->pc = 0x225228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225224u;
    // 0x225228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C30u, 0x225224u, 0x22522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22522Cu;
label_22522c:
    // 0x22522c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22522cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225230: 0xc08970c  jal         func_225C30
    ctx->pc = 0x225230u;
    SET_GPR_U32(ctx, 31, 0x225238u);
    ctx->pc = 0x225234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225230u;
    // 0x225234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C30u, 0x225230u, 0x225238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225238u;
label_225238:
    // 0x225238: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x225238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x22523c: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x22523cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x225240: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x225240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225244: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x225244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x225248: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x225248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22524c: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22524Cu;
    {
        const bool branch_taken_0x22524c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22524c) {
            ctx->pc = 0x225250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22524Cu;
            // 0x225250: 0x86030040  lh          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225290u;
            goto label_225290;
        }
    }
    ctx->pc = 0x225254u;
    // 0x225254: 0x9604003c  lhu         $a0, 0x3C($s0)
    ctx->pc = 0x225254u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x225258: 0xc0892e8  jal         func_224BA0
    ctx->pc = 0x225258u;
    SET_GPR_U32(ctx, 31, 0x225260u);
    ctx->pc = 0x22525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225258u;
    // 0x22525c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224BA0u, 0x225258u, 0x225260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225260u;
label_225260:
    // 0x225260: 0xc0990f0  jal         func_2643C0
    ctx->pc = 0x225260u;
    SET_GPR_U32(ctx, 31, 0x225268u);
    ctx->pc = 0x225264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225260u;
    // 0x225264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x225260u, 0x225268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225268u;
label_225268:
    // 0x225268: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x225268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22526c: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x22526cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x225270: 0xc089700  jal         func_225C00
    ctx->pc = 0x225270u;
    SET_GPR_U32(ctx, 31, 0x225278u);
    ctx->pc = 0x225274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225270u;
    // 0x225274: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C00u, 0x225270u, 0x225278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225278u;
label_225278:
    // 0x225278: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x225278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22527c: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x22527cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x225280: 0xc089700  jal         func_225C00
    ctx->pc = 0x225280u;
    SET_GPR_U32(ctx, 31, 0x225288u);
    ctx->pc = 0x225284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225280u;
    // 0x225284: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C00u, 0x225280u, 0x225288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225288u;
label_225288:
    // 0x225288: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x225288u;
    {
        const bool branch_taken_0x225288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225288u;
        // 0x22528c: 0x3c030015  lui         $v1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225288) {
            ctx->pc = 0x22533Cu;
            goto label_22533c;
        }
    }
    ctx->pc = 0x225290u;
label_225290:
    // 0x225290: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x225290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x225294: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225294u;
    {
        const bool branch_taken_0x225294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225294u;
        // 0x225298: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225294) {
            ctx->pc = 0x2252A8u;
            goto label_2252a8;
        }
    }
    ctx->pc = 0x22529Cu;
    // 0x22529c: 0x86050042  lh          $a1, 0x42($s0)
    ctx->pc = 0x22529cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x2252a0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2252A0u;
    {
        const bool branch_taken_0x2252a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2252A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252A0u;
        // 0x2252a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252a0) {
            ctx->pc = 0x2252B4u;
            goto label_2252b4;
        }
    }
    ctx->pc = 0x2252A8u;
label_2252a8:
    // 0x2252a8: 0xc0864d2  jal         func_219348
    ctx->pc = 0x2252A8u;
    SET_GPR_U32(ctx, 31, 0x2252B0u);
    ctx->pc = 0x2252ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2252A8u;
    // 0x2252ac: 0x8604003e  lh          $a0, 0x3E($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219348u, 0x2252A8u, 0x2252B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252B0u;
label_2252b0:
    // 0x2252b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2252b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2252b4:
    // 0x2252b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2252b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2252b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2252b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2252bc: 0x245183c0  addiu       $s1, $v0, -0x7C40
    ctx->pc = 0x2252bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x2252c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2252c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2252c4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2252C4u;
    {
        const bool branch_taken_0x2252c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2252c4) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x2252CCu;
    // 0x2252cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2252ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252d0: 0xc085238  jal         func_2148E0
    ctx->pc = 0x2252D0u;
    SET_GPR_U32(ctx, 31, 0x2252D8u);
    ctx->pc = 0x2252D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2252D0u;
    // 0x2252d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x2252D0u, 0x2252D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252D8u;
label_2252d8:
    // 0x2252d8: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x2252d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2252dc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2252DCu;
    {
        const bool branch_taken_0x2252dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2252dc) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x2252E4u;
    // 0x2252e4: 0x9222002d  lbu         $v0, 0x2D($s1)
    ctx->pc = 0x2252e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    // 0x2252e8: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x2252e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2252ec: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x2252ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2252f0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2252f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2252f4: 0x83900a  movz        $s2, $a0, $v1
    ctx->pc = 0x2252f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_2252f8:
    // 0x2252f8: 0xc089972  jal         func_2265C8
    ctx->pc = 0x2252F8u;
    SET_GPR_U32(ctx, 31, 0x225300u);
    ctx->pc = 0x2252FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2252F8u;
    // 0x2252fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265C8u, 0x2252F8u, 0x225300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225300u;
label_225300:
    // 0x225300: 0xc089972  jal         func_2265C8
    ctx->pc = 0x225300u;
    SET_GPR_U32(ctx, 31, 0x225308u);
    ctx->pc = 0x225304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225300u;
    // 0x225304: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265C8u, 0x225300u, 0x225308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225308u;
label_225308:
    // 0x225308: 0xc040576  jal         func_1015D8
    ctx->pc = 0x225308u;
    SET_GPR_U32(ctx, 31, 0x225310u);
    ctx->pc = 0x22530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225308u;
    // 0x22530c: 0x86040012  lh          $a0, 0x12($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1015D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1015D8u, 0x225308u, 0x225310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225310u;
label_225310:
    // 0x225310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x225310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225314: 0x8606003e  lh          $a2, 0x3E($s0)
    ctx->pc = 0x225314u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x225318: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22531c: 0xc089636  jal         func_2258D8
    ctx->pc = 0x22531Cu;
    SET_GPR_U32(ctx, 31, 0x225324u);
    ctx->pc = 0x225320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22531Cu;
    // 0x225320: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x22531Cu, 0x225324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225324u;
label_225324:
    // 0x225324: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x225324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225328: 0x8606003e  lh          $a2, 0x3E($s0)
    ctx->pc = 0x225328u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x22532c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22532cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225330: 0xc089636  jal         func_2258D8
    ctx->pc = 0x225330u;
    SET_GPR_U32(ctx, 31, 0x225338u);
    ctx->pc = 0x225334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225330u;
    // 0x225334: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x225330u, 0x225338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225338u;
label_225338:
    // 0x225338: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x225338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_22533c:
    // 0x22533c: 0x8c626150  lw          $v0, 0x6150($v1)
    ctx->pc = 0x22533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24912)));
    // 0x225340: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x225340u;
    {
        const bool branch_taken_0x225340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225340u;
        // 0x225344: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225340) {
            ctx->pc = 0x22535Cu;
            goto label_22535c;
        }
    }
    ctx->pc = 0x225348u;
    // 0x225348: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x225348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x22534c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x22534cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x225350: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x225350u;
    {
        const bool branch_taken_0x225350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225350u;
        // 0x225354: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225350) {
            ctx->pc = 0x225190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225190;
        }
    }
    ctx->pc = 0x225358u;
    // 0x225358: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x225358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22535c:
    // 0x22535c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x22535cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x225360: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x225360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x225364: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x225364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x225368: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x225368u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22536c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x22536cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x225370: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x225370u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x225374: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x225374u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x225378: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x225378u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22537c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x22537cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x225380: 0x3e00008  jr          $ra
    ctx->pc = 0x225380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225380u;
        // 0x225384: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225388u;
}
