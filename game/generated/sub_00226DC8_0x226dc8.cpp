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

// Function: sub_00226DC8
// Address: 0x226dc8 - 0x2271f0
void sub_00226DC8_0x226dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226DC8_0x226dc8");
#endif

    switch (ctx->pc) {
        case 0x226e00u: goto label_226e00;
        case 0x226e50u: goto label_226e50;
        case 0x226ea8u: goto label_226ea8;
        case 0x226ec0u: goto label_226ec0;
        case 0x226f88u: goto label_226f88;
        case 0x226facu: goto label_226fac;
        case 0x226fc0u: goto label_226fc0;
        case 0x226fd8u: goto label_226fd8;
        case 0x227038u: goto label_227038;
        case 0x227054u: goto label_227054;
        case 0x227070u: goto label_227070;
        case 0x22707cu: goto label_22707c;
        case 0x2270bcu: goto label_2270bc;
        case 0x2270d0u: goto label_2270d0;
        case 0x2270f4u: goto label_2270f4;
        case 0x227120u: goto label_227120;
        case 0x227168u: goto label_227168;
        case 0x227180u: goto label_227180;
        case 0x2271acu: goto label_2271ac;
        default: break;
    }

    ctx->pc = 0x226dc8u;

    // 0x226dc8: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x226dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
    // 0x226dcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226dd0: 0xffb004d0  sd          $s0, 0x4D0($sp)
    ctx->pc = 0x226dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 16));
    // 0x226dd4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x226dd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226dd8: 0xffb104d8  sd          $s1, 0x4D8($sp)
    ctx->pc = 0x226dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1240), GPR_U64(ctx, 17));
    // 0x226ddc: 0xffb204e0  sd          $s2, 0x4E0($sp)
    ctx->pc = 0x226ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 18));
    // 0x226de0: 0xffb304e8  sd          $s3, 0x4E8($sp)
    ctx->pc = 0x226de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1256), GPR_U64(ctx, 19));
    // 0x226de4: 0xffb404f0  sd          $s4, 0x4F0($sp)
    ctx->pc = 0x226de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 20));
    // 0x226de8: 0xffb504f8  sd          $s5, 0x4F8($sp)
    ctx->pc = 0x226de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1272), GPR_U64(ctx, 21));
    // 0x226dec: 0xffb60500  sd          $s6, 0x500($sp)
    ctx->pc = 0x226decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1280), GPR_U64(ctx, 22));
    // 0x226df0: 0xffb70508  sd          $s7, 0x508($sp)
    ctx->pc = 0x226df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1288), GPR_U64(ctx, 23));
    // 0x226df4: 0xffbe0510  sd          $fp, 0x510($sp)
    ctx->pc = 0x226df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1296), GPR_U64(ctx, 30));
    // 0x226df8: 0xffbf0518  sd          $ra, 0x518($sp)
    ctx->pc = 0x226df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1304), GPR_U64(ctx, 31));
    // 0x226dfc: 0x0  nop
    ctx->pc = 0x226dfcu;
    // NOP
label_226e00:
    // 0x226e00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x226e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x226e04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x226e08: 0x28820096  slti        $v0, $a0, 0x96
    ctx->pc = 0x226e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x226e0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x226e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x226e10: 0x0  nop
    ctx->pc = 0x226e10u;
    // NOP
    // 0x226e14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x226E14u;
    {
        const bool branch_taken_0x226e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E14u;
        // 0x226e18: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e14) {
            ctx->pc = 0x226E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226e00;
        }
    }
    ctx->pc = 0x226E1Cu;
    // 0x226e1c: 0x27b504b0  addiu       $s5, $sp, 0x4B0
    ctx->pc = 0x226e1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x226e20: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x226e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x226e24: 0xafbd04b8  sw          $sp, 0x4B8($sp)
    ctx->pc = 0x226e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 29));
    // 0x226e28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x226e28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e2c: 0xafbd04bc  sw          $sp, 0x4BC($sp)
    ctx->pc = 0x226e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1212), GPR_U32(ctx, 29));
    // 0x226e30: 0x24140097  addiu       $s4, $zero, 0x97
    ctx->pc = 0x226e30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x226e34: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x226e34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x226e38: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x226e38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x226e3c: 0xafa004b4  sw          $zero, 0x4B4($sp)
    ctx->pc = 0x226e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 0));
    // 0x226e40: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x226e40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226e44: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x226e44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226e48: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x226e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x226e4c: 0x0  nop
    ctx->pc = 0x226e4cu;
    // NOP
label_226e50:
    // 0x226e50: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x226e54: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x226e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x226e58: 0x246361b0  addiu       $v1, $v1, 0x61B0
    ctx->pc = 0x226e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25008));
    // 0x226e5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x226e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x226e60: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x226e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226e64: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x226e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x226e68: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x226E68u;
    {
        const bool branch_taken_0x226e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x226E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E68u;
        // 0x226e6c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e68) {
            ctx->pc = 0x226E90u;
            goto label_226e90;
        }
    }
    ctx->pc = 0x226E70u;
    // 0x226e70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x226e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x226e74: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x226e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x226e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226e7c: 0x24a561b0  addiu       $a1, $a1, 0x61B0
    ctx->pc = 0x226e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25008));
    // 0x226e80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x226e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x226e84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x226E84u;
    {
        const bool branch_taken_0x226e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E84u;
        // 0x226e88: 0x459021  addu        $s2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e84) {
            ctx->pc = 0x226E94u;
            goto label_226e94;
        }
    }
    ctx->pc = 0x226E8Cu;
    // 0x226e8c: 0x0  nop
    ctx->pc = 0x226e8cu;
    // NOP
label_226e90:
    // 0x226e90: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x226e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226e94:
    // 0x226e94: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x226e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x226e98: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x226E98u;
    {
        const bool branch_taken_0x226e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226e98) {
            ctx->pc = 0x226E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226E98u;
            // 0x226e9c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F18u;
            goto label_226f18;
        }
    }
    ctx->pc = 0x226EA0u;
    // 0x226ea0: 0xc08ff20  jal         func_23FC80
    ctx->pc = 0x226EA0u;
    SET_GPR_U32(ctx, 31, 0x226EA8u);
    ctx->pc = 0x226EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EA0u;
    // 0x226ea4: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FC80u, 0x226EA0u, 0x226EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EA8u;
label_226ea8:
    // 0x226ea8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x226ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x226eac: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x226eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x226eb0: 0x504000a3  beql        $v0, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x226EB0u;
    {
        const bool branch_taken_0x226eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226eb0) {
            ctx->pc = 0x226EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226EB0u;
            // 0x226eb4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227140u;
            goto label_227140;
        }
    }
    ctx->pc = 0x226EB8u;
    // 0x226eb8: 0xc08fef4  jal         func_23FBD0
    ctx->pc = 0x226EB8u;
    SET_GPR_U32(ctx, 31, 0x226EC0u);
    ctx->pc = 0x226EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EB8u;
    // 0x226ebc: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FBD0u, 0x226EB8u, 0x226EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EC0u;
label_226ec0:
    // 0x226ec0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x226ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x226ec4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x226ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x226ec8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x226EC8u;
    {
        const bool branch_taken_0x226ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226ec8) {
            ctx->pc = 0x226ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226EC8u;
            // 0x226ecc: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F08u;
            goto label_226f08;
        }
    }
    ctx->pc = 0x226ED0u;
    // 0x226ed0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x226ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x226ed4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x226ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226ed8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226edc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x226edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x226ee0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x226ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x226ee4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x226ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x226ee8: 0xae17001c  sw          $s7, 0x1C($s0)
    ctx->pc = 0x226ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 23));
    // 0x226eec: 0xae170020  sw          $s7, 0x20($s0)
    ctx->pc = 0x226eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 23));
    // 0x226ef0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x226ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x226ef4: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226EF4u;
    {
        const bool branch_taken_0x226ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x226EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EF4u;
        // 0x226ef8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ef4) {
            ctx->pc = 0x226F0Cu;
            goto label_226f0c;
        }
    }
    ctx->pc = 0x226EFCu;
    // 0x226efc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x226efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x226f00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x226F00u;
    {
        const bool branch_taken_0x226f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F00u;
        // 0x226f04: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f00) {
            ctx->pc = 0x226F0Cu;
            goto label_226f0c;
        }
    }
    ctx->pc = 0x226F08u;
label_226f08:
    // 0x226f08: 0xae170020  sw          $s7, 0x20($s0)
    ctx->pc = 0x226f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 23));
label_226f0c:
    // 0x226f0c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x226F0Cu;
    {
        const bool branch_taken_0x226f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F0Cu;
        // 0x226f10: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f0c) {
            ctx->pc = 0x22713Cu;
            goto label_22713c;
        }
    }
    ctx->pc = 0x226F14u;
    // 0x226f14: 0x0  nop
    ctx->pc = 0x226f14u;
    // NOP
label_226f18:
    // 0x226f18: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x226F18u;
    {
        const bool branch_taken_0x226f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F18u;
        // 0x226f1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f18) {
            ctx->pc = 0x22713Cu;
            goto label_22713c;
        }
    }
    ctx->pc = 0x226F20u;
    // 0x226f20: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x226f20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x226f24: 0x1225003a  beq         $s1, $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x226F24u;
    {
        const bool branch_taken_0x226f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x226F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F24u;
        // 0x226f28: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f24) {
            ctx->pc = 0x227010u;
            goto label_227010;
        }
    }
    ctx->pc = 0x226F2Cu;
    // 0x226f2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226F2Cu;
    {
        const bool branch_taken_0x226f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226f2c) {
            ctx->pc = 0x226F48u;
            goto label_226f48;
        }
    }
    ctx->pc = 0x226F34u;
    // 0x226f34: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x226F34u;
    {
        const bool branch_taken_0x226f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x226f34) {
            ctx->pc = 0x226F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226F34u;
            // 0x226f38: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F58u;
            goto label_226f58;
        }
    }
    ctx->pc = 0x226F3Cu;
    // 0x226f3c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x226F3Cu;
    {
        const bool branch_taken_0x226f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F3Cu;
        // 0x226f40: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f3c) {
            ctx->pc = 0x227140u;
            goto label_227140;
        }
    }
    ctx->pc = 0x226F44u;
    // 0x226f44: 0x0  nop
    ctx->pc = 0x226f44u;
    // NOP
label_226f48:
    // 0x226f48: 0x523e0059  beql        $s1, $fp, . + 4 + (0x59 << 2)
    ctx->pc = 0x226F48u;
    {
        const bool branch_taken_0x226f48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 30));
        if (branch_taken_0x226f48) {
            ctx->pc = 0x226F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226F48u;
            // 0x226f4c: 0xae1e0020  sw          $fp, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2270B0u;
            goto label_2270b0;
        }
    }
    ctx->pc = 0x226F50u;
    // 0x226f50: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x226F50u;
    {
        const bool branch_taken_0x226f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F50u;
        // 0x226f54: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f50) {
            ctx->pc = 0x227140u;
            goto label_227140;
        }
    }
    ctx->pc = 0x226F58u;
label_226f58:
    // 0x226f58: 0x1456000d  bne         $v0, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x226F58u;
    {
        const bool branch_taken_0x226f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x226F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F58u;
        // 0x226f5c: 0x86050002  lh          $a1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f58) {
            ctx->pc = 0x226F90u;
            goto label_226f90;
        }
    }
    ctx->pc = 0x226F60u;
    // 0x226f60: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x226f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x226f64: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x226f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x226f68: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x226F68u;
    {
        const bool branch_taken_0x226f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226f68) {
            ctx->pc = 0x226F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226F68u;
            // 0x226f6c: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F94u;
            goto label_226f94;
        }
    }
    ctx->pc = 0x226F70u;
    // 0x226f70: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x226f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x226f74: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x226f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x226f78: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226F78u;
    {
        const bool branch_taken_0x226f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226f78) {
            ctx->pc = 0x226F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226F78u;
            // 0x226f7c: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F94u;
            goto label_226f94;
        }
    }
    ctx->pc = 0x226F80u;
    // 0x226f80: 0xc08adf2  jal         func_22B7C8
    ctx->pc = 0x226F80u;
    SET_GPR_U32(ctx, 31, 0x226F88u);
    ctx->pc = 0x226F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F80u;
    // 0x226f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B7C8u, 0x226F80u, 0x226F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F88u;
label_226f88:
    // 0x226f88: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x226F88u;
    {
        const bool branch_taken_0x226f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F88u;
        // 0x226f8c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f88) {
            ctx->pc = 0x227138u;
            goto label_227138;
        }
    }
    ctx->pc = 0x226F90u;
label_226f90:
    // 0x226f90: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x226f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_226f94:
    // 0x226f94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x226f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226f98: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x226f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x226f9c: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x226F9Cu;
    {
        const bool branch_taken_0x226f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x226f9c) {
            ctx->pc = 0x226FC8u;
            goto label_226fc8;
        }
    }
    ctx->pc = 0x226FA4u;
    // 0x226fa4: 0xc08ff20  jal         func_23FC80
    ctx->pc = 0x226FA4u;
    SET_GPR_U32(ctx, 31, 0x226FACu);
    ctx->pc = 0x226FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FA4u;
    // 0x226fa8: 0x8e440034  lw          $a0, 0x34($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FC80u, 0x226FA4u, 0x226FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FACu;
label_226fac:
    // 0x226fac: 0x50510064  beql        $v0, $s1, . + 4 + (0x64 << 2)
    ctx->pc = 0x226FACu;
    {
        const bool branch_taken_0x226fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x226fac) {
            ctx->pc = 0x226FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226FACu;
            // 0x226fb0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227140u;
            goto label_227140;
        }
    }
    ctx->pc = 0x226FB4u;
    // 0x226fb4: 0xae110048  sw          $s1, 0x48($s0)
    ctx->pc = 0x226fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
    // 0x226fb8: 0xc0895f8  jal         func_2257E0
    ctx->pc = 0x226FB8u;
    SET_GPR_U32(ctx, 31, 0x226FC0u);
    ctx->pc = 0x226FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FB8u;
    // 0x226fbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257E0u, 0x226FB8u, 0x226FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FC0u;
label_226fc0:
    // 0x226fc0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x226FC0u;
    {
        const bool branch_taken_0x226fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FC0u;
        // 0x226fc4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fc0) {
            ctx->pc = 0x227140u;
            goto label_227140;
        }
    }
    ctx->pc = 0x226FC8u;
label_226fc8:
    // 0x226fc8: 0x1494000f  bne         $a0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x226FC8u;
    {
        const bool branch_taken_0x226fc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x226FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FC8u;
        // 0x226fcc: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fc8) {
            ctx->pc = 0x227008u;
            goto label_227008;
        }
    }
    ctx->pc = 0x226FD0u;
    // 0x226fd0: 0xc07c26e  jal         func_1F09B8
    ctx->pc = 0x226FD0u;
    SET_GPR_U32(ctx, 31, 0x226FD8u);
    ctx->pc = 0x226FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FD0u;
    // 0x226fd4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F09B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F09B8u, 0x226FD0u, 0x226FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FD8u;
label_226fd8:
    // 0x226fd8: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x226fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x226fdc: 0x26a5000c  addiu       $a1, $s5, 0xC
    ctx->pc = 0x226fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x226fe0: 0x26a60004  addiu       $a2, $s5, 0x4
    ctx->pc = 0x226fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x226fe4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x226fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x226fe8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x226fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x226fec: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x226fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x226ff0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x226ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226ff4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x226ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x226ff8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x226ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x226ffc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x226ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x227000: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x227000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x227004: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x227004u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_227008:
    // 0x227008: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x227008u;
    {
        const bool branch_taken_0x227008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227008u;
        // 0x22700c: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227008) {
            ctx->pc = 0x22713Cu;
            goto label_22713c;
        }
    }
    ctx->pc = 0x227010u;
label_227010:
    // 0x227010: 0x10940007  beq         $a0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x227010u;
    {
        const bool branch_taken_0x227010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x227014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227010u;
        // 0x227014: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227010) {
            ctx->pc = 0x227030u;
            goto label_227030;
        }
    }
    ctx->pc = 0x227018u;
    // 0x227018: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x227018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x22701c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x22701cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x227020: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227020u;
    {
        const bool branch_taken_0x227020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227020) {
            ctx->pc = 0x227044u;
            goto label_227044;
        }
    }
    ctx->pc = 0x227028u;
    // 0x227028: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x227028u;
    {
        const bool branch_taken_0x227028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227028u;
        // 0x22702c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227028) {
            ctx->pc = 0x2270A4u;
            goto label_2270a4;
        }
    }
    ctx->pc = 0x227030u;
label_227030:
    // 0x227030: 0xc08ff20  jal         func_23FC80
    ctx->pc = 0x227030u;
    SET_GPR_U32(ctx, 31, 0x227038u);
    ctx->pc = 0x227034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227030u;
    // 0x227034: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FC80u, 0x227030u, 0x227038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227038u;
label_227038:
    // 0x227038: 0x1051001a  beq         $v0, $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x227038u;
    {
        const bool branch_taken_0x227038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x22703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227038u;
        // 0x22703c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227038) {
            ctx->pc = 0x2270A4u;
            goto label_2270a4;
        }
    }
    ctx->pc = 0x227040u;
    // 0x227040: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x227040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_227044:
    // 0x227044: 0x54740004  bnel        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x227044u;
    {
        const bool branch_taken_0x227044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x227044) {
            ctx->pc = 0x227048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227044u;
            // 0x227048: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227058u;
            goto label_227058;
        }
    }
    ctx->pc = 0x22704Cu;
    // 0x22704c: 0xc08ff2a  jal         func_23FCA8
    ctx->pc = 0x22704Cu;
    SET_GPR_U32(ctx, 31, 0x227054u);
    ctx->pc = 0x227050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22704Cu;
    // 0x227050: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FCA8u, 0x22704Cu, 0x227054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227054u;
label_227054:
    // 0x227054: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x227054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_227058:
    // 0x227058: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x227058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x22705c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x22705cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227060: 0x1474000f  bne         $v1, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x227060u;
    {
        const bool branch_taken_0x227060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x227064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227060u;
        // 0x227064: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227060) {
            ctx->pc = 0x2270A0u;
            goto label_2270a0;
        }
    }
    ctx->pc = 0x227068u;
    // 0x227068: 0xc08ff20  jal         func_23FC80
    ctx->pc = 0x227068u;
    SET_GPR_U32(ctx, 31, 0x227070u);
    ctx->pc = 0x22706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227068u;
    // 0x22706c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FC80u, 0x227068u, 0x227070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227070u;
label_227070:
    // 0x227070: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x227070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x227074: 0xc08fef4  jal         func_23FBD0
    ctx->pc = 0x227074u;
    SET_GPR_U32(ctx, 31, 0x22707Cu);
    ctx->pc = 0x227078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227074u;
    // 0x227078: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FBD0u, 0x227074u, 0x22707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22707Cu;
label_22707c:
    // 0x22707c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x22707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x227080: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x227080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x227084: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227084u;
    {
        const bool branch_taken_0x227084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227084) {
            ctx->pc = 0x227088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227084u;
            // 0x227088: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2270A4u;
            goto label_2270a4;
        }
    }
    ctx->pc = 0x22708Cu;
    // 0x22708c: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x22708cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x227090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227094: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227094u;
    {
        const bool branch_taken_0x227094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227094u;
        // 0x227098: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227094) {
            ctx->pc = 0x2270A4u;
            goto label_2270a4;
        }
    }
    ctx->pc = 0x22709Cu;
    // 0x22709c: 0x0  nop
    ctx->pc = 0x22709cu;
    // NOP
label_2270a0:
    // 0x2270a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2270a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2270a4:
    // 0x2270a4: 0x54600026  bnel        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2270A4u;
    {
        const bool branch_taken_0x2270a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2270a4) {
            ctx->pc = 0x2270A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2270A4u;
            // 0x2270a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227140u;
            goto label_227140;
        }
    }
    ctx->pc = 0x2270ACu;
    // 0x2270ac: 0xae1e0020  sw          $fp, 0x20($s0)
    ctx->pc = 0x2270acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 30));
label_2270b0:
    // 0x2270b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2270b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270b4: 0xc089714  jal         func_225C50
    ctx->pc = 0x2270B4u;
    SET_GPR_U32(ctx, 31, 0x2270BCu);
    ctx->pc = 0x2270B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270B4u;
    // 0x2270b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C50u, 0x2270B4u, 0x2270BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270BCu;
label_2270bc:
    // 0x2270bc: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2270BCu;
    {
        const bool branch_taken_0x2270bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2270bc) {
            ctx->pc = 0x2270C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2270BCu;
            // 0x2270c0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227140u;
            goto label_227140;
        }
    }
    ctx->pc = 0x2270C4u;
    // 0x2270c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2270c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270c8: 0xc08b87a  jal         func_22E1E8
    ctx->pc = 0x2270C8u;
    SET_GPR_U32(ctx, 31, 0x2270D0u);
    ctx->pc = 0x2270CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270C8u;
    // 0x2270cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E1E8u, 0x2270C8u, 0x2270D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270D0u;
label_2270d0:
    // 0x2270d0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2270d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2270d4: 0x5474000a  bnel        $v1, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2270D4u;
    {
        const bool branch_taken_0x2270d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x2270d4) {
            ctx->pc = 0x2270D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2270D4u;
            // 0x2270d8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227100u;
            goto label_227100;
        }
    }
    ctx->pc = 0x2270DCu;
    // 0x2270dc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2270dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2270e0: 0x54570007  bnel        $v0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2270E0u;
    {
        const bool branch_taken_0x2270e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x2270e0) {
            ctx->pc = 0x2270E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2270E0u;
            // 0x2270e4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227100u;
            goto label_227100;
        }
    }
    ctx->pc = 0x2270E8u;
    // 0x2270e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2270e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270ec: 0xc08b87a  jal         func_22E1E8
    ctx->pc = 0x2270ECu;
    SET_GPR_U32(ctx, 31, 0x2270F4u);
    ctx->pc = 0x2270F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270ECu;
    // 0x2270f0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E1E8u, 0x2270ECu, 0x2270F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270F4u;
label_2270f4:
    // 0x2270f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2270F4u;
    {
        const bool branch_taken_0x2270f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2270F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270F4u;
        // 0x2270f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270f4) {
            ctx->pc = 0x227140u;
            goto label_227140;
        }
    }
    ctx->pc = 0x2270FCu;
    // 0x2270fc: 0x0  nop
    ctx->pc = 0x2270fcu;
    // NOP
label_227100:
    // 0x227100: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227100u;
    {
        const bool branch_taken_0x227100 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x227100) {
            ctx->pc = 0x227118u;
            goto label_227118;
        }
    }
    ctx->pc = 0x227108u;
    // 0x227108: 0x10740003  beq         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x227108u;
    {
        const bool branch_taken_0x227108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x227108) {
            ctx->pc = 0x227118u;
            goto label_227118;
        }
    }
    ctx->pc = 0x227110u;
    // 0x227110: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x227110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x227114: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x227114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_227118:
    // 0x227118: 0xc08adca  jal         func_22B728
    ctx->pc = 0x227118u;
    SET_GPR_U32(ctx, 31, 0x227120u);
    ctx->pc = 0x22711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227118u;
    // 0x22711c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B728u, 0x227118u, 0x227120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227120u;
label_227120:
    // 0x227120: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x227120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x227124: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x227124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x227128: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x227128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x22712c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x22712cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x227130: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x227130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x227134: 0xae160020  sw          $s6, 0x20($s0)
    ctx->pc = 0x227134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
label_227138:
    // 0x227138: 0xae16001c  sw          $s6, 0x1C($s0)
    ctx->pc = 0x227138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 22));
label_22713c:
    // 0x22713c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22713cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_227140:
    // 0x227140: 0x2a620096  slti        $v0, $s3, 0x96
    ctx->pc = 0x227140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x227144: 0x5440ff42  bnel        $v0, $zero, . + 4 + (-0xBE << 2)
    ctx->pc = 0x227144u;
    {
        const bool branch_taken_0x227144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227144) {
            ctx->pc = 0x227148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227144u;
            // 0x227148: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226e50;
        }
    }
    ctx->pc = 0x22714Cu;
    // 0x22714c: 0x8fa504b4  lw          $a1, 0x4B4($sp)
    ctx->pc = 0x22714cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x227150: 0x18a0001b  blez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x227150u;
    {
        const bool branch_taken_0x227150 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x227154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227150u;
        // 0x227154: 0xdfb004d0  ld          $s0, 0x4D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227150) {
            ctx->pc = 0x2271C0u;
            goto label_2271c0;
        }
    }
    ctx->pc = 0x227158u;
    // 0x227158: 0x8fa404b8  lw          $a0, 0x4B8($sp)
    ctx->pc = 0x227158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x22715c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22715cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227160: 0xc0935d8  jal         func_24D760
    ctx->pc = 0x227160u;
    SET_GPR_U32(ctx, 31, 0x227168u);
    ctx->pc = 0x227164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227160u;
    // 0x227164: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D760u, 0x227160u, 0x227168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227168u;
label_227168:
    // 0x227168: 0x8fb204b4  lw          $s2, 0x4B4($sp)
    ctx->pc = 0x227168u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x22716c: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x22716Cu;
    {
        const bool branch_taken_0x22716c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x227170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22716Cu;
        // 0x227170: 0x8fb104b8  lw          $s1, 0x4B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22716c) {
            ctx->pc = 0x2271BCu;
            goto label_2271bc;
        }
    }
    ctx->pc = 0x227174u;
    // 0x227174: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x227174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x227178: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x227178u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22717c: 0x245461b0  addiu       $s4, $v0, 0x61B0
    ctx->pc = 0x22717cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 25008));
label_227180:
    // 0x227180: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x227180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x227184: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x227184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x227188: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x227188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22718c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x22718cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227190: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x227190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x227194: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x227194u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x227198: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x227198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x22719c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x22719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2271a0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2271a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2271a4: 0xc07c298  jal         func_1F0A60
    ctx->pc = 0x2271A4u;
    SET_GPR_U32(ctx, 31, 0x2271ACu);
    ctx->pc = 0x2271A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271A4u;
    // 0x2271a8: 0x86060002  lh          $a2, 0x2($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0A60u, 0x2271A4u, 0x2271ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271ACu;
label_2271ac:
    // 0x2271ac: 0xae150020  sw          $s5, 0x20($s0)
    ctx->pc = 0x2271acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 21));
    // 0x2271b0: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x2271b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2271b4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2271B4u;
    {
        const bool branch_taken_0x2271b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2271B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271B4u;
        // 0x2271b8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271b4) {
            ctx->pc = 0x227180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227180;
        }
    }
    ctx->pc = 0x2271BCu;
label_2271bc:
    // 0x2271bc: 0xdfb004d0  ld          $s0, 0x4D0($sp)
    ctx->pc = 0x2271bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
label_2271c0:
    // 0x2271c0: 0xdfb104d8  ld          $s1, 0x4D8($sp)
    ctx->pc = 0x2271c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1240)));
    // 0x2271c4: 0xdfb204e0  ld          $s2, 0x4E0($sp)
    ctx->pc = 0x2271c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x2271c8: 0xdfb304e8  ld          $s3, 0x4E8($sp)
    ctx->pc = 0x2271c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1256)));
    // 0x2271cc: 0xdfb404f0  ld          $s4, 0x4F0($sp)
    ctx->pc = 0x2271ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x2271d0: 0xdfb504f8  ld          $s5, 0x4F8($sp)
    ctx->pc = 0x2271d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1272)));
    // 0x2271d4: 0xdfb60500  ld          $s6, 0x500($sp)
    ctx->pc = 0x2271d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x2271d8: 0xdfb70508  ld          $s7, 0x508($sp)
    ctx->pc = 0x2271d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x2271dc: 0xdfbe0510  ld          $fp, 0x510($sp)
    ctx->pc = 0x2271dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x2271e0: 0xdfbf0518  ld          $ra, 0x518($sp)
    ctx->pc = 0x2271e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1304)));
    // 0x2271e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2271E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2271E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271E4u;
        // 0x2271e8: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2271E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2271ECu;
    // 0x2271ec: 0x0  nop
    ctx->pc = 0x2271ecu;
    // NOP
    ctx->pc = 0x2271f0u;
}
