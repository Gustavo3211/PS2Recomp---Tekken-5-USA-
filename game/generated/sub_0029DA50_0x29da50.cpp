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

// Function: sub_0029DA50
// Address: 0x29da50 - 0x29db80
void sub_0029DA50_0x29da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DA50_0x29da50");
#endif

    switch (ctx->pc) {
        case 0x29da9cu: goto label_29da9c;
        case 0x29dab0u: goto label_29dab0;
        case 0x29dadcu: goto label_29dadc;
        case 0x29daf8u: goto label_29daf8;
        case 0x29db04u: goto label_29db04;
        default: break;
    }

    ctx->pc = 0x29da50u;

    // 0x29da50: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x29da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x29da54: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x29da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x29da58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29da58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da5c: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x29da5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x29da60: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x29da60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x29da64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29da64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da68: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x29da68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x29da6c: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x29da6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x29da70: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x29da70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x29da74: 0x2416efff  addiu       $s6, $zero, -0x1001
    ctx->pc = 0x29da74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29da78: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x29da78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x29da7c: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x29da7cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x29da80: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x29da80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x29da84: 0x3c1e0015  lui         $fp, 0x15
    ctx->pc = 0x29da84u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)21 << 16));
    // 0x29da88: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x29da88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x29da8c: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x29da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x29da90: 0x8e620150  lw          $v0, 0x150($s3)
    ctx->pc = 0x29da90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x29da94: 0xc0a7982  jal         func_29E608
    ctx->pc = 0x29DA94u;
    SET_GPR_U32(ctx, 31, 0x29DA9Cu);
    ctx->pc = 0x29DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DA94u;
    // 0x29da98: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E608u, 0x29DA94u, 0x29DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA9Cu;
label_29da9c:
    // 0x29da9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29da9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29daa0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29daa4: 0x2454c660  addiu       $s4, $v0, -0x39A0
    ctx->pc = 0x29daa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952544));
    // 0x29daa8: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x29daa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29daac: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x29daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_29dab0:
    // 0x29dab0: 0x1222001b  beq         $s1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x29DAB0u;
    {
        const bool branch_taken_0x29dab0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x29DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAB0u;
        // 0x29dab4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dab0) {
            ctx->pc = 0x29DB20u;
            goto label_29db20;
        }
    }
    ctx->pc = 0x29DAB8u;
    // 0x29dab8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DAB8u;
    {
        const bool branch_taken_0x29dab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x29DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAB8u;
        // 0x29dabc: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dab8) {
            ctx->pc = 0x29DAC8u;
            goto label_29dac8;
        }
    }
    ctx->pc = 0x29DAC0u;
    // 0x29dac0: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29DAC0u;
    {
        const bool branch_taken_0x29dac0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x29dac0) {
            ctx->pc = 0x29DAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DAC0u;
            // 0x29dac4: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DAE8u;
            goto label_29dae8;
        }
    }
    ctx->pc = 0x29DAC8u;
label_29dac8:
    // 0x29dac8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x29dac8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29dacc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29daccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dad0: 0x27c53f28  addiu       $a1, $fp, 0x3F28
    ctx->pc = 0x29dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16168));
    // 0x29dad4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29DAD4u;
    SET_GPR_U32(ctx, 31, 0x29DADCu);
    ctx->pc = 0x29DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAD4u;
    // 0x29dad8: 0x2143021  addu        $a2, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29DAD4u, 0x29DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DADCu;
label_29dadc:
    // 0x29dadc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29DADCu;
    {
        const bool branch_taken_0x29dadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DADCu;
        // 0x29dae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dadc) {
            ctx->pc = 0x29DAFCu;
            goto label_29dafc;
        }
    }
    ctx->pc = 0x29DAE4u;
    // 0x29dae4: 0x0  nop
    ctx->pc = 0x29dae4u;
    // NOP
label_29dae8:
    // 0x29dae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29dae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29daec: 0x26e5c3f0  addiu       $a1, $s7, -0x3C10
    ctx->pc = 0x29daecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951920));
    // 0x29daf0: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29DAF0u;
    SET_GPR_U32(ctx, 31, 0x29DAF8u);
    ctx->pc = 0x29DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAF0u;
    // 0x29daf4: 0x2143021  addu        $a2, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29DAF0u, 0x29DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DAF8u;
label_29daf8:
    // 0x29daf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29daf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29dafc:
    // 0x29dafc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29DAFCu;
    SET_GPR_U32(ctx, 31, 0x29DB04u);
    ctx->pc = 0x29DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAFCu;
    // 0x29db00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29DAFCu, 0x29DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB04u;
label_29db04:
    // 0x29db04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29db04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db08: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x29db08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x29db0c: 0x12320004  beq         $s1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29DB0Cu;
    {
        const bool branch_taken_0x29db0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x29DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB0Cu;
        // 0x29db10: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db0c) {
            ctx->pc = 0x29DB20u;
            goto label_29db20;
        }
    }
    ctx->pc = 0x29DB14u;
    // 0x29db14: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29db18: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x29db18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x29db1c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_29db20:
    // 0x29db20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29db20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29db24: 0x2a220021  slti        $v0, $s1, 0x21
    ctx->pc = 0x29db24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x29db28: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x29DB28u;
    {
        const bool branch_taken_0x29db28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB28u;
        // 0x29db2c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db28) {
            ctx->pc = 0x29DAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dab0;
        }
    }
    ctx->pc = 0x29DB30u;
    // 0x29db30: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DB30u;
    {
        const bool branch_taken_0x29db30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x29DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB30u;
        // 0x29db34: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db30) {
            ctx->pc = 0x29DB40u;
            goto label_29db40;
        }
    }
    ctx->pc = 0x29DB38u;
    // 0x29db38: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29DB38u;
    {
        const bool branch_taken_0x29db38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x29DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB38u;
        // 0x29db3c: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db38) {
            ctx->pc = 0x29DB54u;
            goto label_29db54;
        }
    }
    ctx->pc = 0x29DB40u;
label_29db40:
    // 0x29db40: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x29db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x29db44: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29db44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29db48: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29db4c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29db50: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x29db50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_29db54:
    // 0x29db54: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x29db54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x29db58: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x29db58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29db5c: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x29db5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x29db60: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x29db60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29db64: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x29db64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29db68: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x29db68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29db6c: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x29db6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x29db70: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x29db70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29db74: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x29db74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x29db78: 0x3e00008  jr          $ra
    ctx->pc = 0x29DB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB78u;
        // 0x29db7c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DB80u;
}
