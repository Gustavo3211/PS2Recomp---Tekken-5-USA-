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

// Function: sub_00125CB0
// Address: 0x125cb0 - 0x1261c0
void sub_00125CB0_0x125cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125CB0_0x125cb0");
#endif

    switch (ctx->pc) {
        case 0x125cf4u: goto label_125cf4;
        case 0x125d30u: goto label_125d30;
        case 0x125dacu: goto label_125dac;
        case 0x125decu: goto label_125dec;
        case 0x125e30u: goto label_125e30;
        case 0x125e74u: goto label_125e74;
        case 0x125eb8u: goto label_125eb8;
        case 0x125ec8u: goto label_125ec8;
        case 0x125ed4u: goto label_125ed4;
        case 0x125f0cu: goto label_125f0c;
        case 0x125f48u: goto label_125f48;
        case 0x125fc4u: goto label_125fc4;
        case 0x126004u: goto label_126004;
        case 0x126030u: goto label_126030;
        case 0x12605cu: goto label_12605c;
        case 0x126098u: goto label_126098;
        case 0x1260f8u: goto label_1260f8;
        case 0x12612cu: goto label_12612c;
        case 0x12615cu: goto label_12615c;
        default: break;
    }

    ctx->pc = 0x125cb0u;

    // 0x125cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x125cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x125cb4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x125cb8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x125cb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125cbc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x125cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x125cc0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x125cc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125cc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x125cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ccc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125cd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125cd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x125cd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x125cdc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x125cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x125ce0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x125ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x125ce4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x125ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x125ce8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x125ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x125cec: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x125CECu;
    SET_GPR_U32(ctx, 31, 0x125CF4u);
    ctx->pc = 0x125CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CECu;
    // 0x125cf0: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125CECu, 0x125CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CF4u;
label_125cf4:
    // 0x125cf4: 0x14400125  bnez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x125CF4u;
    {
        const bool branch_taken_0x125cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CF4u;
        // 0x125cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cf4) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x125CFCu;
    // 0x125cfc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x125CFCu;
    {
        const bool branch_taken_0x125cfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CFCu;
        // 0x125d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cfc) {
            ctx->pc = 0x125D30u;
            goto label_125d30;
        }
    }
    ctx->pc = 0x125D04u;
    // 0x125d04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x125d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x125d08: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x125d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x125d0c: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x125d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x125d10: 0x24a50368  addiu       $a1, $a1, 0x368
    ctx->pc = 0x125d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 872));
    // 0x125d14: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x125d14u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125d18: 0x25080150  addiu       $t0, $t0, 0x150
    ctx->pc = 0x125d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x125d1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x125d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x125d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d24: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x125d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x125d28: 0xc0498e2  jal         func_126388
    ctx->pc = 0x125D28u;
    SET_GPR_U32(ctx, 31, 0x125D30u);
    ctx->pc = 0x125D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D28u;
    // 0x125d2c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x125D28u, 0x125D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D30u;
label_125d30:
    // 0x125d30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x125D30u;
    {
        const bool branch_taken_0x125d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D30u;
        // 0x125d34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d30) {
            ctx->pc = 0x125D78u;
            goto label_125d78;
        }
    }
    ctx->pc = 0x125D38u;
    // 0x125d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125d3c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x125d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125d40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125d44: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x125d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x125d48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125d54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125d58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125d58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125d5c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x125d5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125d60: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x125d60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x125d64: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x125d64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125d68: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x125d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d6c: 0x80493da  j           func_124F68
    ctx->pc = 0x125D6Cu;
    ctx->pc = 0x125D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D6Cu;
    // 0x125d70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F68u;
    sub_00124F68_0x124f68(rdram, ctx, runtime); return;
    ctx->pc = 0x125D74u;
    // 0x125d74: 0x0  nop
    ctx->pc = 0x125d74u;
    // NOP
label_125d78:
    // 0x125d78: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x125D78u;
    {
        const bool branch_taken_0x125d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D78u;
        // 0x125d7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d78) {
            ctx->pc = 0x125DB0u;
            goto label_125db0;
        }
    }
    ctx->pc = 0x125D80u;
    // 0x125d80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x125d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x125d84: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x125d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x125d88: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x125d88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x125d8c: 0x24a50698  addiu       $a1, $a1, 0x698
    ctx->pc = 0x125d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
    // 0x125d90: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x125d90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125d94: 0x25080150  addiu       $t0, $t0, 0x150
    ctx->pc = 0x125d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x125d98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x125d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x125d9c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x125d9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125da0: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x125da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x125da4: 0xc0498e2  jal         func_126388
    ctx->pc = 0x125DA4u;
    SET_GPR_U32(ctx, 31, 0x125DACu);
    ctx->pc = 0x125DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125DA4u;
    // 0x125da8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x125DA4u, 0x125DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125DACu;
label_125dac:
    // 0x125dac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x125dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125db0:
    // 0x125db0: 0x124000f6  beqz        $s2, . + 4 + (0xF6 << 2)
    ctx->pc = 0x125DB0u;
    {
        const bool branch_taken_0x125db0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DB0u;
        // 0x125db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125db0) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x125DB8u;
    // 0x125db8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x125DB8u;
    {
        const bool branch_taken_0x125db8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DB8u;
        // 0x125dbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125db8) {
            ctx->pc = 0x125DF0u;
            goto label_125df0;
        }
    }
    ctx->pc = 0x125DC0u;
    // 0x125dc0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x125dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x125dc4: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x125dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x125dc8: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x125dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x125dcc: 0x24a50698  addiu       $a1, $a1, 0x698
    ctx->pc = 0x125dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
    // 0x125dd0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x125dd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125dd4: 0x25080150  addiu       $t0, $t0, 0x150
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x125dd8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x125dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x125ddc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x125ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125de0: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x125de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x125de4: 0xc0498e2  jal         func_126388
    ctx->pc = 0x125DE4u;
    SET_GPR_U32(ctx, 31, 0x125DECu);
    ctx->pc = 0x125DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125DE4u;
    // 0x125de8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x125DE4u, 0x125DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125DECu;
label_125dec:
    // 0x125dec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125df0:
    // 0x125df0: 0x108000e6  beqz        $a0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x125DF0u;
    {
        const bool branch_taken_0x125df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DF0u;
        // 0x125df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125df0) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x125DF8u;
    // 0x125df8: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x125df8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x125dfc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x125DFCu;
    {
        const bool branch_taken_0x125dfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DFCu;
        // 0x125e00: 0x8c910008  lw          $s1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125dfc) {
            ctx->pc = 0x125E30u;
            goto label_125e30;
        }
    }
    ctx->pc = 0x125E04u;
    // 0x125e04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x125e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x125e08: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x125e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x125e0c: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x125e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x125e10: 0x24a50750  addiu       $a1, $a1, 0x750
    ctx->pc = 0x125e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
    // 0x125e14: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x125e14u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125e18: 0x25080150  addiu       $t0, $t0, 0x150
    ctx->pc = 0x125e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x125e1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x125e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x125e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e24: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x125e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x125e28: 0xc0498e2  jal         func_126388
    ctx->pc = 0x125E28u;
    SET_GPR_U32(ctx, 31, 0x125E30u);
    ctx->pc = 0x125E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E28u;
    // 0x125e2c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x125E28u, 0x125E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E30u;
label_125e30:
    // 0x125e30: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x125E30u;
    {
        const bool branch_taken_0x125e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e30) {
            ctx->pc = 0x125E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125E30u;
            // 0x125e34: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125E40u;
            goto label_125e40;
        }
    }
    ctx->pc = 0x125E38u;
    // 0x125e38: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x125e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x125e3c: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x125e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_125e40:
    // 0x125e40: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x125E40u;
    {
        const bool branch_taken_0x125e40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E40u;
        // 0x125e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e40) {
            ctx->pc = 0x125E74u;
            goto label_125e74;
        }
    }
    ctx->pc = 0x125E48u;
    // 0x125e48: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x125e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x125e4c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x125e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x125e50: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x125e50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x125e54: 0x24a50750  addiu       $a1, $a1, 0x750
    ctx->pc = 0x125e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
    // 0x125e58: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x125e58u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125e5c: 0x25080150  addiu       $t0, $t0, 0x150
    ctx->pc = 0x125e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x125e60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x125e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x125e64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e68: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x125e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x125e6c: 0xc0498e2  jal         func_126388
    ctx->pc = 0x125E6Cu;
    SET_GPR_U32(ctx, 31, 0x125E74u);
    ctx->pc = 0x125E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E6Cu;
    // 0x125e70: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x125E6Cu, 0x125E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E74u;
label_125e74:
    // 0x125e74: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x125E74u;
    {
        const bool branch_taken_0x125e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e74) {
            ctx->pc = 0x125E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125E74u;
            // 0x125e78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125E84u;
            goto label_125e84;
        }
    }
    ctx->pc = 0x125E7Cu;
    // 0x125e7c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x125e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x125e80: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x125e80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_125e84:
    // 0x125e84: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x125e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x125e88: 0x32560001  andi        $s6, $s2, 0x1
    ctx->pc = 0x125e88u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x125e8c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x125e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x125e90: 0x144000be  bnez        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x125E90u;
    {
        const bool branch_taken_0x125e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E90u;
        // 0x125e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e90) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x125E98u;
    // 0x125e98: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x125e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x125e9c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x125e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x125ea0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x125ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x125ea4: 0x544000b9  bnel        $v0, $zero, . + 4 + (0xB9 << 2)
    ctx->pc = 0x125EA4u;
    {
        const bool branch_taken_0x125ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125ea4) {
            ctx->pc = 0x125EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125EA4u;
            // 0x125ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x125EACu;
    // 0x125eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125eb0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x125EB0u;
    SET_GPR_U32(ctx, 31, 0x125EB8u);
    ctx->pc = 0x125EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125EB0u;
    // 0x125eb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125EB0u, 0x125EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125EB8u;
label_125eb8:
    // 0x125eb8: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x125EB8u;
    {
        const bool branch_taken_0x125eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EB8u;
        // 0x125ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125eb8) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x125EC0u;
    // 0x125ec0: 0xc049906  jal         func_126418
    ctx->pc = 0x125EC0u;
    SET_GPR_U32(ctx, 31, 0x125EC8u);
    ctx->pc = 0x126418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126418u, 0x125EC0u, 0x125EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125EC8u;
label_125ec8:
    // 0x125ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ecc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x125ECCu;
    SET_GPR_U32(ctx, 31, 0x125ED4u);
    ctx->pc = 0x125ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125ECCu;
    // 0x125ed0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125ECCu, 0x125ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125ED4u;
label_125ed4:
    // 0x125ed4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x125ED4u;
    {
        const bool branch_taken_0x125ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ed4) {
            ctx->pc = 0x125F14u;
            goto label_125f14;
        }
    }
    ctx->pc = 0x125EDCu;
    // 0x125edc: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x125EDCu;
    {
        const bool branch_taken_0x125edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EDCu;
        // 0x125ee0: 0x3c050013  lui         $a1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125edc) {
            ctx->pc = 0x126018u;
            goto label_126018;
        }
    }
    ctx->pc = 0x125EE4u;
    // 0x125ee4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x125ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x125ee8: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x125ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x125eec: 0x24a508c0  addiu       $a1, $a1, 0x8C0
    ctx->pc = 0x125eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2240));
    // 0x125ef0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x125ef0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125ef4: 0x25080150  addiu       $t0, $t0, 0x150
    ctx->pc = 0x125ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x125ef8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x125ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x125efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f00: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x125f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x125f04: 0xc0498e2  jal         func_126388
    ctx->pc = 0x125F04u;
    SET_GPR_U32(ctx, 31, 0x125F0Cu);
    ctx->pc = 0x125F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F04u;
    // 0x125f08: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x125F04u, 0x125F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F0Cu;
label_125f0c:
    // 0x125f0c: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x125F0Cu;
    {
        const bool branch_taken_0x125f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F0Cu;
        // 0x125f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f0c) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x125F14u;
label_125f14:
    // 0x125f14: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x125F14u;
    {
        const bool branch_taken_0x125f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F14u;
        // 0x125f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f14) {
            ctx->pc = 0x125F48u;
            goto label_125f48;
        }
    }
    ctx->pc = 0x125F1Cu;
    // 0x125f1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x125f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x125f20: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x125f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x125f24: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x125f24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x125f28: 0x24a50368  addiu       $a1, $a1, 0x368
    ctx->pc = 0x125f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 872));
    // 0x125f2c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x125f2cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125f30: 0x25080150  addiu       $t0, $t0, 0x150
    ctx->pc = 0x125f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x125f34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x125f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x125f38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f3c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x125f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x125f40: 0xc0498e2  jal         func_126388
    ctx->pc = 0x125F40u;
    SET_GPR_U32(ctx, 31, 0x125F48u);
    ctx->pc = 0x125F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F40u;
    // 0x125f44: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x125F40u, 0x125F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125F48u;
label_125f48:
    // 0x125f48: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x125F48u;
    {
        const bool branch_taken_0x125f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F48u;
        // 0x125f4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f48) {
            ctx->pc = 0x125F90u;
            goto label_125f90;
        }
    }
    ctx->pc = 0x125F50u;
    // 0x125f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125f54: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x125f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125f58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125f5c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x125f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x125f60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125f70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125f70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125f74: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x125f74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125f78: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x125f78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x125f7c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x125f7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125f80: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x125f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125f84: 0x80493da  j           func_124F68
    ctx->pc = 0x125F84u;
    ctx->pc = 0x125F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125F84u;
    // 0x125f88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F68u;
    sub_00124F68_0x124f68(rdram, ctx, runtime); return;
    ctx->pc = 0x125F8Cu;
    // 0x125f8c: 0x0  nop
    ctx->pc = 0x125f8cu;
    // NOP
label_125f90:
    // 0x125f90: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x125F90u;
    {
        const bool branch_taken_0x125f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F90u;
        // 0x125f94: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f90) {
            ctx->pc = 0x125FC8u;
            goto label_125fc8;
        }
    }
    ctx->pc = 0x125F98u;
    // 0x125f98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x125f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x125f9c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x125f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x125fa0: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x125fa4: 0x24a50698  addiu       $a1, $a1, 0x698
    ctx->pc = 0x125fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
    // 0x125fa8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x125fa8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125fac: 0x25080150  addiu       $t0, $t0, 0x150
    ctx->pc = 0x125facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x125fb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x125fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x125fb4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x125fb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fb8: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x125fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x125fbc: 0xc0498e2  jal         func_126388
    ctx->pc = 0x125FBCu;
    SET_GPR_U32(ctx, 31, 0x125FC4u);
    ctx->pc = 0x125FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FBCu;
    // 0x125fc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x125FBCu, 0x125FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FC4u;
label_125fc4:
    // 0x125fc4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x125fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125fc8:
    // 0x125fc8: 0x12800070  beqz        $s4, . + 4 + (0x70 << 2)
    ctx->pc = 0x125FC8u;
    {
        const bool branch_taken_0x125fc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x125FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FC8u;
        // 0x125fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fc8) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x125FD0u;
    // 0x125fd0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x125FD0u;
    {
        const bool branch_taken_0x125fd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125FD0u;
        // 0x125fd4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fd0) {
            ctx->pc = 0x126008u;
            goto label_126008;
        }
    }
    ctx->pc = 0x125FD8u;
    // 0x125fd8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x125fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x125fdc: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x125fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x125fe0: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x125fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x125fe4: 0x24a50698  addiu       $a1, $a1, 0x698
    ctx->pc = 0x125fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
    // 0x125fe8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x125fe8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125fec: 0x25080150  addiu       $t0, $t0, 0x150
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x125ff0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x125ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x125ff4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x125ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ff8: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x125ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x125ffc: 0xc0498e2  jal         func_126388
    ctx->pc = 0x125FFCu;
    SET_GPR_U32(ctx, 31, 0x126004u);
    ctx->pc = 0x126000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125FFCu;
    // 0x126000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x125FFCu, 0x126004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126004u;
label_126004:
    // 0x126004: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x126004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126008:
    // 0x126008: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x126008u;
    {
        const bool branch_taken_0x126008 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x126008) {
            ctx->pc = 0x12600Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126008u;
            // 0x12600c: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126020u;
            goto label_126020;
        }
    }
    ctx->pc = 0x126010u;
    // 0x126010: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x126010u;
    {
        const bool branch_taken_0x126010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126010u;
        // 0x126014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126010) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x126018u;
label_126018:
    // 0x126018: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x126018u;
    {
        const bool branch_taken_0x126018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126018u;
        // 0x12601c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126018) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x126020u;
label_126020:
    // 0x126020: 0x3c1e0013  lui         $fp, 0x13
    ctx->pc = 0x126020u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)19 << 16));
    // 0x126024: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x126024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x126028: 0x3c150013  lui         $s5, 0x13
    ctx->pc = 0x126028u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)19 << 16));
    // 0x12602c: 0x3c170013  lui         $s7, 0x13
    ctx->pc = 0x12602cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)19 << 16));
label_126030:
    // 0x126030: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x126030u;
    {
        const bool branch_taken_0x126030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126030u;
        // 0x126034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126030) {
            ctx->pc = 0x12605Cu;
            goto label_12605c;
        }
    }
    ctx->pc = 0x126038u;
    // 0x126038: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x126038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12603c: 0x27c50750  addiu       $a1, $fp, 0x750
    ctx->pc = 0x12603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1872));
    // 0x126040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126044: 0x26a80150  addiu       $t0, $s5, 0x150
    ctx->pc = 0x126044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x126048: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x126048u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12604c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x12604cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126050: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x126050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x126054: 0xc0498e2  jal         func_126388
    ctx->pc = 0x126054u;
    SET_GPR_U32(ctx, 31, 0x12605Cu);
    ctx->pc = 0x126058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126054u;
    // 0x126058: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x126054u, 0x12605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12605Cu;
label_12605c:
    // 0x12605c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12605Cu;
    {
        const bool branch_taken_0x12605c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12605c) {
            ctx->pc = 0x126060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12605Cu;
            // 0x126060: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12606Cu;
            goto label_12606c;
        }
    }
    ctx->pc = 0x126064u;
    // 0x126064: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x126064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x126068: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x126068u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_12606c:
    // 0x12606c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12606Cu;
    {
        const bool branch_taken_0x12606c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x126070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12606Cu;
        // 0x126070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12606c) {
            ctx->pc = 0x126098u;
            goto label_126098;
        }
    }
    ctx->pc = 0x126074u;
    // 0x126074: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x126074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x126078: 0x27c50750  addiu       $a1, $fp, 0x750
    ctx->pc = 0x126078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1872));
    // 0x12607c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12607cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126080: 0x26a80150  addiu       $t0, $s5, 0x150
    ctx->pc = 0x126080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x126084: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x126084u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126088: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x126088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12608c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x126090: 0xc0498e2  jal         func_126388
    ctx->pc = 0x126090u;
    SET_GPR_U32(ctx, 31, 0x126098u);
    ctx->pc = 0x126094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126090u;
    // 0x126094: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x126090u, 0x126098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126098u;
label_126098:
    // 0x126098: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x126098u;
    {
        const bool branch_taken_0x126098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126098) {
            ctx->pc = 0x12609Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126098u;
            // 0x12609c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1260A8u;
            goto label_1260a8;
        }
    }
    ctx->pc = 0x1260A0u;
    // 0x1260a0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1260a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1260a4: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x1260a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1260a8:
    // 0x1260a8: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x1260a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1260ac: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x1260acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1260b0: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1260b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1260b4: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1260B4u;
    {
        const bool branch_taken_0x1260b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1260B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260B4u;
        // 0x1260b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260b4) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x1260BCu;
    // 0x1260bc: 0x32640002  andi        $a0, $s3, 0x2
    ctx->pc = 0x1260bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x1260c0: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x1260c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x1260c4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1260c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1260c8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1260C8u;
    {
        const bool branch_taken_0x1260c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1260CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260C8u;
        // 0x1260cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260c8) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x1260D0u;
    // 0x1260d0: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1260D0u;
    {
        const bool branch_taken_0x1260d0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1260d0) {
            ctx->pc = 0x1260D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1260D0u;
            // 0x1260d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1260F0u;
            goto label_1260f0;
        }
    }
    ctx->pc = 0x1260D8u;
    // 0x1260d8: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1260d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1260dc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1260DCu;
    {
        const bool branch_taken_0x1260dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1260E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260DCu;
        // 0x1260e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260dc) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x1260E4u;
    // 0x1260e4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1260e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1260e8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1260E8u;
    {
        const bool branch_taken_0x1260e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1260ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260E8u;
        // 0x1260ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260e8) {
            ctx->pc = 0x126188u;
            goto label_126188;
        }
    }
    ctx->pc = 0x1260F0u;
label_1260f0:
    // 0x1260f0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1260F0u;
    SET_GPR_U32(ctx, 31, 0x1260F8u);
    ctx->pc = 0x1260F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1260F0u;
    // 0x1260f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1260F0u, 0x1260F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1260F8u;
label_1260f8:
    // 0x1260f8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1260F8u;
    {
        const bool branch_taken_0x1260f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1260FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260F8u;
        // 0x1260fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260f8) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x126100u;
    // 0x126100: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x126100u;
    {
        const bool branch_taken_0x126100 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x126104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126100u;
        // 0x126104: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126100) {
            ctx->pc = 0x126130u;
            goto label_126130;
        }
    }
    ctx->pc = 0x126108u;
    // 0x126108: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x126108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12610c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x12610cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126110: 0x26e50698  addiu       $a1, $s7, 0x698
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1688));
    // 0x126114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126118: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x126118u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12611c: 0x26a80150  addiu       $t0, $s5, 0x150
    ctx->pc = 0x12611cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x126120: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x126124: 0xc0498e2  jal         func_126388
    ctx->pc = 0x126124u;
    SET_GPR_U32(ctx, 31, 0x12612Cu);
    ctx->pc = 0x126128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126124u;
    // 0x126128: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x126124u, 0x12612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12612Cu;
label_12612c:
    // 0x12612c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12612cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126130:
    // 0x126130: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x126130u;
    {
        const bool branch_taken_0x126130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126130u;
        // 0x126134: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126130) {
            ctx->pc = 0x126160u;
            goto label_126160;
        }
    }
    ctx->pc = 0x126138u;
    // 0x126138: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x126138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12613c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x12613cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126140: 0x26e50698  addiu       $a1, $s7, 0x698
    ctx->pc = 0x126140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1688));
    // 0x126144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126148: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x126148u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12614c: 0x26a80150  addiu       $t0, $s5, 0x150
    ctx->pc = 0x12614cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x126150: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x126150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x126154: 0xc0498e2  jal         func_126388
    ctx->pc = 0x126154u;
    SET_GPR_U32(ctx, 31, 0x12615Cu);
    ctx->pc = 0x126158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126154u;
    // 0x126158: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x126154u, 0x12615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12615Cu;
label_12615c:
    // 0x12615c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12615cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126160:
    // 0x126160: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x126160u;
    {
        const bool branch_taken_0x126160 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x126164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126160u;
        // 0x126164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126160) {
            ctx->pc = 0x12618Cu;
            goto label_12618c;
        }
    }
    ctx->pc = 0x126168u;
    // 0x126168: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x126168u;
    {
        const bool branch_taken_0x126168 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126168u;
        // 0x12616c: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126168) {
            ctx->pc = 0x126188u;
            goto label_126188;
        }
    }
    ctx->pc = 0x126170u;
    // 0x126170: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x126170u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x126174: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x126174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x126178: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x126178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12617c: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x12617Cu;
    {
        const bool branch_taken_0x12617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12617Cu;
        // 0x126180: 0x2b00b  movn        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12617c) {
            ctx->pc = 0x126030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126030;
        }
    }
    ctx->pc = 0x126184u;
    // 0x126184: 0x0  nop
    ctx->pc = 0x126184u;
    // NOP
label_126188:
    // 0x126188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12618c:
    // 0x12618c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12618cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126194: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126198: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12619c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12619cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1261a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1261a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1261a4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1261a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1261a8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1261a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1261ac: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1261acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1261b0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1261b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1261b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1261B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1261B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261B4u;
        // 0x1261b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1261B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1261BCu;
    // 0x1261bc: 0x0  nop
    ctx->pc = 0x1261bcu;
    // NOP
    ctx->pc = 0x1261c0u;
}
