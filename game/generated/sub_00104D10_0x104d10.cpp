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

// Function: sub_00104D10
// Address: 0x104d10 - 0x104fd0
void sub_00104D10_0x104d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104D10_0x104d10");
#endif

    switch (ctx->pc) {
        case 0x104da8u: goto label_104da8;
        case 0x104f38u: goto label_104f38;
        case 0x104f44u: goto label_104f44;
        case 0x104f70u: goto label_104f70;
        case 0x104f80u: goto label_104f80;
        default: break;
    }

    ctx->pc = 0x104d10u;

    // 0x104d10: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x104d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x104d14: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x104d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x104d18: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x104d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x104d1c: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x104d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x104d20: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x104d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x104d24: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x104d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x104d28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x104d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d2c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x104d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x104d30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x104d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d34: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x104d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x104d38: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x104d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x104d3c: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x104d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x104d40: 0x8e540868  lw          $s4, 0x868($s2)
    ctx->pc = 0x104d40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x104d44: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x104d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x104d48: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x104d48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x104d4c: 0x26960018  addiu       $s6, $s4, 0x18
    ctx->pc = 0x104d4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x104d50: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x104D50u;
    {
        const bool branch_taken_0x104d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D50u;
        // 0x104d54: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d50) {
            ctx->pc = 0x104DE0u;
            goto label_104de0;
        }
    }
    ctx->pc = 0x104D58u;
    // 0x104d58: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x104d58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x104d5c: 0x4630022  bgezl       $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x104D5Cu;
    {
        const bool branch_taken_0x104d5c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x104d5c) {
            ctx->pc = 0x104D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104D5Cu;
            // 0x104d60: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104DE8u;
            goto label_104de8;
        }
    }
    ctx->pc = 0x104D64u;
    // 0x104d64: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x104d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x104d68: 0x442001f  bltzl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x104D68u;
    {
        const bool branch_taken_0x104d68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x104d68) {
            ctx->pc = 0x104D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104D68u;
            // 0x104d6c: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104DE8u;
            goto label_104de8;
        }
    }
    ctx->pc = 0x104D70u;
    // 0x104d70: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x104d70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x104d74: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x104d74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x104d78: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x104d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x104d7c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x104d7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x104d80: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x104d80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x104d84: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x104d84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x104d88: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x104d88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x104d8c: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x104d8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x104d90: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x104d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x104d94: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x104d94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x104d98: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x104d98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x104d9c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x104d9cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x104da0: 0xc047fca  jal         func_11FF28
    ctx->pc = 0x104DA0u;
    SET_GPR_U32(ctx, 31, 0x104DA8u);
    ctx->pc = 0x104DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DA0u;
    // 0x104da4: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF28u, 0x104DA0u, 0x104DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DA8u;
label_104da8:
    // 0x104da8: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x104da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x104dac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x104dacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x104db0: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x104db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x104db4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x104db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x104db8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x104db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x104dbc: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x104dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x104dc0: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x104dc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x104dc4: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x104dc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x104dc8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x104DC8u;
    {
        const bool branch_taken_0x104dc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DC8u;
        // 0x104dcc: 0x8e540868  lw          $s4, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dc8) {
            ctx->pc = 0x104DE8u;
            goto label_104de8;
        }
    }
    ctx->pc = 0x104DD0u;
    // 0x104dd0: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x104dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x104dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x104dd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104DD8u;
    {
        const bool branch_taken_0x104dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DD8u;
        // 0x104ddc: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dd8) {
            ctx->pc = 0x104DE8u;
            goto label_104de8;
        }
    }
    ctx->pc = 0x104DE0u;
label_104de0:
    // 0x104de0: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x104de0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x104de4: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x104de4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_104de8:
    // 0x104de8: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x104de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x104dec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104df0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104DF0u;
    {
        const bool branch_taken_0x104df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104df0) {
            ctx->pc = 0x104DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104DF0u;
            // 0x104df4: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104E18u;
            goto label_104e18;
        }
    }
    ctx->pc = 0x104DF8u;
    // 0x104df8: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x104df8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x104dfc: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104DFCu;
    {
        const bool branch_taken_0x104dfc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x104dfc) {
            ctx->pc = 0x104E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104DFCu;
            // 0x104e00: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104E18u;
            goto label_104e18;
        }
    }
    ctx->pc = 0x104E04u;
    // 0x104e04: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x104e04u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x104e08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x104e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x104e0c: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x104e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x104e10: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x104e10u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x104e14: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x104e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_104e18:
    // 0x104e18: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x104e18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x104e1c: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x104e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x104e20: 0x25080e90  addiu       $t0, $t0, 0xE90
    ctx->pc = 0x104e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3728));
    // 0x104e24: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x104e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x104e28: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x104e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x104e2c: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x104e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x104e30: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x104e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x104e34: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x104e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x104e38: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x104e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x104e3c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x104e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x104e40: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x104e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x104e44: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x104e44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x104e48: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x104e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x104e4c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x104e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x104e50: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x104e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x104e54: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x104e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x104e58: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x104e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x104e5c: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x104e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x104e60: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x104e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x104e64: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x104e64u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x104e68: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x104e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x104e6c: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x104e6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x104e70: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x104e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x104e74: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x104e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x104e78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x104e78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x104e7c: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x104e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x104e80: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x104e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x104e84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x104e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104e88: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x104e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x104e8c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x104e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x104e90: 0x9c440000  lwu         $a0, 0x0($v0)
    ctx->pc = 0x104e90u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104e94: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x104e94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
    // 0x104e98: 0xfe4400a0  sd          $a0, 0xA0($s2)
    ctx->pc = 0x104e98u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 4));
    // 0x104e9c: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x104e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x104ea0: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x104ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x104ea4: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x104ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x104ea8: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x104ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x104eac: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x104eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x104eb0: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x104eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x104eb4: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x104eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x104eb8: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x104eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
    // 0x104ebc: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x104ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x104ec0: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x104ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x104ec4: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x104ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x104ec8: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x104ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
    // 0x104ecc: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x104eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x104ed0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x104ED0u;
    {
        const bool branch_taken_0x104ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x104ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104ED0u;
        // 0x104ed4: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ed0) {
            ctx->pc = 0x104EFCu;
            goto label_104efc;
        }
    }
    ctx->pc = 0x104ED8u;
    // 0x104ed8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x104ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x104edc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x104edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x104ee0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x104ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x104ee4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x104EE4u;
    {
        const bool branch_taken_0x104ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EE4u;
        // 0x104ee8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ee4) {
            ctx->pc = 0x104F14u;
            goto label_104f14;
        }
    }
    ctx->pc = 0x104EECu;
    // 0x104eec: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x104eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x104ef0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x104ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x104ef4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x104EF4u;
    {
        const bool branch_taken_0x104ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EF4u;
        // 0x104ef8: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ef4) {
            ctx->pc = 0x104F14u;
            goto label_104f14;
        }
    }
    ctx->pc = 0x104EFCu;
label_104efc:
    // 0x104efc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x104efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x104f00: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x104f04: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x104f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x104f08: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x104f08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104f0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x104f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x104f10: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x104f10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_104f14:
    // 0x104f14: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x104F14u;
    {
        const bool branch_taken_0x104f14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x104f14) {
            ctx->pc = 0x104F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104F14u;
            // 0x104f18: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104F50u;
            goto label_104f50;
        }
    }
    ctx->pc = 0x104F1Cu;
    // 0x104f1c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x104f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x104f20: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x104f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x104f24: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x104f24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x104f28: 0x24c6d8e8  addiu       $a2, $a2, -0x2718
    ctx->pc = 0x104f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957288));
    // 0x104f2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x104f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f30: 0xc044766  jal         func_111D98
    ctx->pc = 0x104F30u;
    SET_GPR_U32(ctx, 31, 0x104F38u);
    ctx->pc = 0x104F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F30u;
    // 0x104f34: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D98u, 0x104F30u, 0x104F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F38u;
label_104f38:
    // 0x104f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x104f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f3c: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x104F3Cu;
    SET_GPR_U32(ctx, 31, 0x104F44u);
    ctx->pc = 0x104F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F3Cu;
    // 0x104f40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x104F3Cu, 0x104F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F44u;
label_104f44:
    // 0x104f44: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x104F44u;
    {
        const bool branch_taken_0x104f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F44u;
        // 0x104f48: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f44) {
            ctx->pc = 0x104FA8u;
            goto label_104fa8;
        }
    }
    ctx->pc = 0x104F4Cu;
    // 0x104f4c: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x104f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_104f50:
    // 0x104f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104f54: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x104F54u;
    {
        const bool branch_taken_0x104f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x104F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F54u;
        // 0x104f58: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f54) {
            ctx->pc = 0x104FA8u;
            goto label_104fa8;
        }
    }
    ctx->pc = 0x104F5Cu;
    // 0x104f5c: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x104f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x104f60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104F60u;
    {
        const bool branch_taken_0x104f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F60u;
        // 0x104f64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f60) {
            ctx->pc = 0x104F78u;
            goto label_104f78;
        }
    }
    ctx->pc = 0x104F68u;
    // 0x104f68: 0xc0415c0  jal         func_105700
    ctx->pc = 0x104F68u;
    SET_GPR_U32(ctx, 31, 0x104F70u);
    ctx->pc = 0x104F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F68u;
    // 0x104f6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105700u, 0x104F68u, 0x104F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F70u;
label_104f70:
    // 0x104f70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x104F70u;
    {
        const bool branch_taken_0x104f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F70u;
        // 0x104f74: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f70) {
            ctx->pc = 0x104F84u;
            goto label_104f84;
        }
    }
    ctx->pc = 0x104F78u;
label_104f78:
    // 0x104f78: 0xc0412a0  jal         func_104A80
    ctx->pc = 0x104F78u;
    SET_GPR_U32(ctx, 31, 0x104F80u);
    ctx->pc = 0x104F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F78u;
    // 0x104f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A80u, 0x104F78u, 0x104F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F80u;
label_104f80:
    // 0x104f80: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x104f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_104f84:
    // 0x104f84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x104f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104f88: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x104F88u;
    {
        const bool branch_taken_0x104f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x104F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F88u;
        // 0x104f8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f88) {
            ctx->pc = 0x104FA0u;
            goto label_104fa0;
        }
    }
    ctx->pc = 0x104F90u;
    // 0x104f90: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x104f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x104f94: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x104f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x104f98: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x104f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x104f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104fa0:
    // 0x104fa0: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x104fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x104fa4: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x104fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_104fa8:
    // 0x104fa8: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x104fa8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x104fac: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x104facu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x104fb0: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x104fb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x104fb4: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x104fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x104fb8: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x104fb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x104fbc: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x104fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x104fc0: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x104fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x104fc4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x104fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x104fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x104FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FC8u;
        // 0x104fcc: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104FD0u;
}
