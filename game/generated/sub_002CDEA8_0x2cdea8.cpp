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

// Function: sub_002CDEA8
// Address: 0x2cdea8 - 0x2ce0b8
void sub_002CDEA8_0x2cdea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDEA8_0x2cdea8");
#endif

    switch (ctx->pc) {
        case 0x2cdef4u: goto label_2cdef4;
        case 0x2cdf34u: goto label_2cdf34;
        case 0x2cdf74u: goto label_2cdf74;
        case 0x2cdfb4u: goto label_2cdfb4;
        case 0x2cdff4u: goto label_2cdff4;
        case 0x2ce034u: goto label_2ce034;
        case 0x2ce074u: goto label_2ce074;
        default: break;
    }

    ctx->pc = 0x2cdea8u;

    // 0x2cdea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cdea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cdeac: 0x248600a0  addiu       $a2, $a0, 0xA0
    ctx->pc = 0x2cdeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2cdeb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cdeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cdeb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cdeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cdeb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cdeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cdebc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2cdebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cdec0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDEC0u;
    {
        const bool branch_taken_0x2cdec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEC0u;
        // 0x2cdec4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdec0) {
            ctx->pc = 0x2CDED8u;
            goto label_2cded8;
        }
    }
    ctx->pc = 0x2CDEC8u;
    // 0x2cdec8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cdec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cdecc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2cdeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2cded0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDED0u;
    {
        const bool branch_taken_0x2cded0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDED0u;
        // 0x2cded4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cded0) {
            ctx->pc = 0x2CDEE4u;
            goto label_2cdee4;
        }
    }
    ctx->pc = 0x2CDED8u;
label_2cded8:
    // 0x2cded8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2cded8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2cdedc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cdedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdee0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2cdee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2cdee4:
    // 0x2cdee4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cdee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdeec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDEECu;
    SET_GPR_U32(ctx, 31, 0x2CDEF4u);
    ctx->pc = 0x2CDEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDEECu;
    // 0x2cdef0: 0x24a5e938  addiu       $a1, $a1, -0x16C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDEECu, 0x2CDEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDEF4u;
label_2cdef4:
    // 0x2cdef4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDEF4u;
    {
        const bool branch_taken_0x2cdef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdef4) {
            ctx->pc = 0x2CDEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDEF4u;
            // 0x2cdef8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDF28u;
            goto label_2cdf28;
        }
    }
    ctx->pc = 0x2CDEFCu;
    // 0x2cdefc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdf00: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDF00u;
    {
        const bool branch_taken_0x2cdf00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf00) {
            ctx->pc = 0x2CDF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDF00u;
            // 0x2cdf04: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDF28u;
            goto label_2cdf28;
        }
    }
    ctx->pc = 0x2CDF08u;
    // 0x2cdf08: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDF08u;
    {
        const bool branch_taken_0x2cdf08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF08u;
        // 0x2cdf0c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf08) {
            ctx->pc = 0x2CDF18u;
            goto label_2cdf18;
        }
    }
    ctx->pc = 0x2CDF10u;
    // 0x2cdf10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDF10u;
    {
        const bool branch_taken_0x2cdf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF10u;
        // 0x2cdf14: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf10) {
            ctx->pc = 0x2CDF20u;
            goto label_2cdf20;
        }
    }
    ctx->pc = 0x2CDF18u;
label_2cdf18:
    // 0x2cdf18: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdf1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdf20:
    // 0x2cdf20: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdf20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdf24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdf24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdf28:
    // 0x2cdf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf2c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDF2Cu;
    SET_GPR_U32(ctx, 31, 0x2CDF34u);
    ctx->pc = 0x2CDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDF2Cu;
    // 0x2cdf30: 0x24a5e8c0  addiu       $a1, $a1, -0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDF2Cu, 0x2CDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF34u;
label_2cdf34:
    // 0x2cdf34: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDF34u;
    {
        const bool branch_taken_0x2cdf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf34) {
            ctx->pc = 0x2CDF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDF34u;
            // 0x2cdf38: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDF68u;
            goto label_2cdf68;
        }
    }
    ctx->pc = 0x2CDF3Cu;
    // 0x2cdf3c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdf40: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDF40u;
    {
        const bool branch_taken_0x2cdf40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf40) {
            ctx->pc = 0x2CDF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDF40u;
            // 0x2cdf44: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDF68u;
            goto label_2cdf68;
        }
    }
    ctx->pc = 0x2CDF48u;
    // 0x2cdf48: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDF48u;
    {
        const bool branch_taken_0x2cdf48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF48u;
        // 0x2cdf4c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf48) {
            ctx->pc = 0x2CDF58u;
            goto label_2cdf58;
        }
    }
    ctx->pc = 0x2CDF50u;
    // 0x2cdf50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDF50u;
    {
        const bool branch_taken_0x2cdf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF50u;
        // 0x2cdf54: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf50) {
            ctx->pc = 0x2CDF60u;
            goto label_2cdf60;
        }
    }
    ctx->pc = 0x2CDF58u;
label_2cdf58:
    // 0x2cdf58: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdf5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdf60:
    // 0x2cdf60: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdf60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdf64: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdf64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdf68:
    // 0x2cdf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf6c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x2CDF74u);
    ctx->pc = 0x2CDF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDF6Cu;
    // 0x2cdf70: 0x24a5ea58  addiu       $a1, $a1, -0x15A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDF6Cu, 0x2CDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF74u;
label_2cdf74:
    // 0x2cdf74: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDF74u;
    {
        const bool branch_taken_0x2cdf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf74) {
            ctx->pc = 0x2CDF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDF74u;
            // 0x2cdf78: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDFA8u;
            goto label_2cdfa8;
        }
    }
    ctx->pc = 0x2CDF7Cu;
    // 0x2cdf7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdf80: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDF80u;
    {
        const bool branch_taken_0x2cdf80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf80) {
            ctx->pc = 0x2CDF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDF80u;
            // 0x2cdf84: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDFA8u;
            goto label_2cdfa8;
        }
    }
    ctx->pc = 0x2CDF88u;
    // 0x2cdf88: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDF88u;
    {
        const bool branch_taken_0x2cdf88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF88u;
        // 0x2cdf8c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf88) {
            ctx->pc = 0x2CDF98u;
            goto label_2cdf98;
        }
    }
    ctx->pc = 0x2CDF90u;
    // 0x2cdf90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDF90u;
    {
        const bool branch_taken_0x2cdf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF90u;
        // 0x2cdf94: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf90) {
            ctx->pc = 0x2CDFA0u;
            goto label_2cdfa0;
        }
    }
    ctx->pc = 0x2CDF98u;
label_2cdf98:
    // 0x2cdf98: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdf9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdfa0:
    // 0x2cdfa0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdfa4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdfa8:
    // 0x2cdfa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfac: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDFACu;
    SET_GPR_U32(ctx, 31, 0x2CDFB4u);
    ctx->pc = 0x2CDFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDFACu;
    // 0x2cdfb0: 0x24a5e968  addiu       $a1, $a1, -0x1698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDFACu, 0x2CDFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFB4u;
label_2cdfb4:
    // 0x2cdfb4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDFB4u;
    {
        const bool branch_taken_0x2cdfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdfb4) {
            ctx->pc = 0x2CDFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDFB4u;
            // 0x2cdfb8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CDFBCu;
    // 0x2cdfbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cdfc0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDFC0u;
    {
        const bool branch_taken_0x2cdfc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdfc0) {
            ctx->pc = 0x2CDFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDFC0u;
            // 0x2cdfc4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CDFC8u;
    // 0x2cdfc8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDFC8u;
    {
        const bool branch_taken_0x2cdfc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFC8u;
        // 0x2cdfcc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdfc8) {
            ctx->pc = 0x2CDFD8u;
            goto label_2cdfd8;
        }
    }
    ctx->pc = 0x2CDFD0u;
    // 0x2cdfd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDFD0u;
    {
        const bool branch_taken_0x2cdfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFD0u;
        // 0x2cdfd4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdfd0) {
            ctx->pc = 0x2CDFE0u;
            goto label_2cdfe0;
        }
    }
    ctx->pc = 0x2CDFD8u;
label_2cdfd8:
    // 0x2cdfd8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cdfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cdfdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdfe0:
    // 0x2cdfe0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cdfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cdfe4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cdfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cdfe8:
    // 0x2cdfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CDFECu;
    SET_GPR_U32(ctx, 31, 0x2CDFF4u);
    ctx->pc = 0x2CDFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDFECu;
    // 0x2cdff0: 0x24a5e980  addiu       $a1, $a1, -0x1680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CDFECu, 0x2CDFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFF4u;
label_2cdff4:
    // 0x2cdff4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CDFF4u;
    {
        const bool branch_taken_0x2cdff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdff4) {
            ctx->pc = 0x2CDFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDFF4u;
            // 0x2cdff8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE028u;
            goto label_2ce028;
        }
    }
    ctx->pc = 0x2CDFFCu;
    // 0x2cdffc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cdffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ce000: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE000u;
    {
        const bool branch_taken_0x2ce000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce000) {
            ctx->pc = 0x2CE004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE000u;
            // 0x2ce004: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE028u;
            goto label_2ce028;
        }
    }
    ctx->pc = 0x2CE008u;
    // 0x2ce008: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE008u;
    {
        const bool branch_taken_0x2ce008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE008u;
        // 0x2ce00c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce008) {
            ctx->pc = 0x2CE018u;
            goto label_2ce018;
        }
    }
    ctx->pc = 0x2CE010u;
    // 0x2ce010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE010u;
    {
        const bool branch_taken_0x2ce010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE010u;
        // 0x2ce014: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce010) {
            ctx->pc = 0x2CE020u;
            goto label_2ce020;
        }
    }
    ctx->pc = 0x2CE018u;
label_2ce018:
    // 0x2ce018: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2ce018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2ce01c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ce01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ce020:
    // 0x2ce020: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2ce020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2ce024: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ce024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2ce028:
    // 0x2ce028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce02c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CE02Cu;
    SET_GPR_U32(ctx, 31, 0x2CE034u);
    ctx->pc = 0x2CE030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE02Cu;
    // 0x2ce030: 0x24a5e998  addiu       $a1, $a1, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CE02Cu, 0x2CE034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE034u;
label_2ce034:
    // 0x2ce034: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CE034u;
    {
        const bool branch_taken_0x2ce034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce034) {
            ctx->pc = 0x2CE038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE034u;
            // 0x2ce038: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE068u;
            goto label_2ce068;
        }
    }
    ctx->pc = 0x2CE03Cu;
    // 0x2ce03c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ce03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ce040: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE040u;
    {
        const bool branch_taken_0x2ce040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce040) {
            ctx->pc = 0x2CE044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE040u;
            // 0x2ce044: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE068u;
            goto label_2ce068;
        }
    }
    ctx->pc = 0x2CE048u;
    // 0x2ce048: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE048u;
    {
        const bool branch_taken_0x2ce048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE048u;
        // 0x2ce04c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce048) {
            ctx->pc = 0x2CE058u;
            goto label_2ce058;
        }
    }
    ctx->pc = 0x2CE050u;
    // 0x2ce050: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE050u;
    {
        const bool branch_taken_0x2ce050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE050u;
        // 0x2ce054: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce050) {
            ctx->pc = 0x2CE060u;
            goto label_2ce060;
        }
    }
    ctx->pc = 0x2CE058u;
label_2ce058:
    // 0x2ce058: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2ce058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2ce05c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ce05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ce060:
    // 0x2ce060: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2ce060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2ce064: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ce064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2ce068:
    // 0x2ce068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce06c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CE06Cu;
    SET_GPR_U32(ctx, 31, 0x2CE074u);
    ctx->pc = 0x2CE070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE06Cu;
    // 0x2ce070: 0x24a5e9a8  addiu       $a1, $a1, -0x1658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CE06Cu, 0x2CE074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE074u;
label_2ce074:
    // 0x2ce074: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CE074u;
    {
        const bool branch_taken_0x2ce074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE074u;
        // 0x2ce078: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce074) {
            ctx->pc = 0x2CE0A8u;
            goto label_2ce0a8;
        }
    }
    ctx->pc = 0x2CE07Cu;
    // 0x2ce07c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ce07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ce080: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CE080u;
    {
        const bool branch_taken_0x2ce080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce080) {
            ctx->pc = 0x2CE084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE080u;
            // 0x2ce084: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE0ACu;
            goto label_2ce0ac;
        }
    }
    ctx->pc = 0x2CE088u;
    // 0x2ce088: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE088u;
    {
        const bool branch_taken_0x2ce088 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE088u;
        // 0x2ce08c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce088) {
            ctx->pc = 0x2CE098u;
            goto label_2ce098;
        }
    }
    ctx->pc = 0x2CE090u;
    // 0x2ce090: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE090u;
    {
        const bool branch_taken_0x2ce090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE090u;
        // 0x2ce094: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce090) {
            ctx->pc = 0x2CE0A0u;
            goto label_2ce0a0;
        }
    }
    ctx->pc = 0x2CE098u;
label_2ce098:
    // 0x2ce098: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2ce098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2ce09c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ce09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ce0a0:
    // 0x2ce0a0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2ce0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2ce0a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce0a8:
    // 0x2ce0a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ce0ac:
    // 0x2ce0ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0B0u;
        // 0x2ce0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE0B8u;
}
