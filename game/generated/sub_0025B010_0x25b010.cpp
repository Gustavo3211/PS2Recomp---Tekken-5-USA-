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

// Function: sub_0025B010
// Address: 0x25b010 - 0x25b310
void sub_0025B010_0x25b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B010_0x25b010");
#endif

    switch (ctx->pc) {
        case 0x25b058u: goto label_25b058;
        case 0x25b104u: goto label_25b104;
        case 0x25b118u: goto label_25b118;
        case 0x25b148u: goto label_25b148;
        case 0x25b150u: goto label_25b150;
        case 0x25b16cu: goto label_25b16c;
        case 0x25b17cu: goto label_25b17c;
        case 0x25b18cu: goto label_25b18c;
        case 0x25b1c8u: goto label_25b1c8;
        case 0x25b1ecu: goto label_25b1ec;
        case 0x25b1fcu: goto label_25b1fc;
        case 0x25b214u: goto label_25b214;
        case 0x25b220u: goto label_25b220;
        case 0x25b230u: goto label_25b230;
        case 0x25b244u: goto label_25b244;
        case 0x25b258u: goto label_25b258;
        default: break;
    }

    ctx->pc = 0x25b010u;

    // 0x25b010: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x25b010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x25b014: 0xffb00350  sd          $s0, 0x350($sp)
    ctx->pc = 0x25b014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 16));
    // 0x25b018: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25b018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b01c: 0xffb10358  sd          $s1, 0x358($sp)
    ctx->pc = 0x25b01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 856), GPR_U64(ctx, 17));
    // 0x25b020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25b020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b028: 0xffb30368  sd          $s3, 0x368($sp)
    ctx->pc = 0x25b028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 872), GPR_U64(ctx, 19));
    // 0x25b02c: 0xffb70388  sd          $s7, 0x388($sp)
    ctx->pc = 0x25b02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 904), GPR_U64(ctx, 23));
    // 0x25b030: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x25b030u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b034: 0xe7b40398  swc1        $f20, 0x398($sp)
    ctx->pc = 0x25b034u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
    // 0x25b038: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x25b038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b03c: 0xffb20360  sd          $s2, 0x360($sp)
    ctx->pc = 0x25b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 18));
    // 0x25b040: 0xffb40370  sd          $s4, 0x370($sp)
    ctx->pc = 0x25b040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 20));
    // 0x25b044: 0xffb50378  sd          $s5, 0x378($sp)
    ctx->pc = 0x25b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 888), GPR_U64(ctx, 21));
    // 0x25b048: 0xffb60380  sd          $s6, 0x380($sp)
    ctx->pc = 0x25b048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 22));
    // 0x25b04c: 0xffbf0390  sd          $ra, 0x390($sp)
    ctx->pc = 0x25b04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 31));
    // 0x25b050: 0xc0474ac  jal         func_11D2B0
    ctx->pc = 0x25B050u;
    SET_GPR_U32(ctx, 31, 0x25B058u);
    ctx->pc = 0x25B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B050u;
    // 0x25b054: 0xe7b503a0  swc1        $f21, 0x3A0($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D2B0u, 0x25B050u, 0x25B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B058u;
label_25b058:
    // 0x25b058: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x25b058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x25b05c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x25B05Cu;
    {
        const bool branch_taken_0x25b05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B05Cu;
        // 0x25b060: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b05c) {
            ctx->pc = 0x25B088u;
            goto label_25b088;
        }
    }
    ctx->pc = 0x25B064u;
    // 0x25b064: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x25b064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x25b068: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25B068u;
    {
        const bool branch_taken_0x25b068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B068u;
        // 0x25b06c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b068) {
            ctx->pc = 0x25B08Cu;
            goto label_25b08c;
        }
    }
    ctx->pc = 0x25B070u;
    // 0x25b070: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x25b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x25b074: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B074u;
    {
        const bool branch_taken_0x25b074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25b074) {
            ctx->pc = 0x25B078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B074u;
            // 0x25b078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B08Cu;
            goto label_25b08c;
        }
    }
    ctx->pc = 0x25B07Cu;
    // 0x25b07c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25B07Cu;
    {
        const bool branch_taken_0x25b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B07Cu;
        // 0x25b080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b07c) {
            ctx->pc = 0x25B08Cu;
            goto label_25b08c;
        }
    }
    ctx->pc = 0x25B084u;
    // 0x25b084: 0x0  nop
    ctx->pc = 0x25b084u;
    // NOP
label_25b088:
    // 0x25b088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25b088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b08c:
    // 0x25b08c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25B08Cu;
    {
        const bool branch_taken_0x25b08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B08Cu;
        // 0x25b090: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b08c) {
            ctx->pc = 0x25B0C0u;
            goto label_25b0c0;
        }
    }
    ctx->pc = 0x25B094u;
    // 0x25b094: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x25b094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x25b098: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x25b098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25b09c: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x25b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x25b0a0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B0A0u;
    {
        const bool branch_taken_0x25b0a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0A0u;
        // 0x25b0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0a0) {
            ctx->pc = 0x25B0B4u;
            goto label_25b0b4;
        }
    }
    ctx->pc = 0x25B0A8u;
    // 0x25b0a8: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x25b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x25b0ac: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25B0ACu;
    {
        const bool branch_taken_0x25b0ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x25b0ac) {
            ctx->pc = 0x25B0B8u;
            goto label_25b0b8;
        }
    }
    ctx->pc = 0x25B0B4u;
label_25b0b4:
    // 0x25b0b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b0b8:
    // 0x25b0b8: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x25B0B8u;
    {
        const bool branch_taken_0x25b0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0B8u;
        // 0x25b0bc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0b8) {
            ctx->pc = 0x25B120u;
            goto label_25b120;
        }
    }
    ctx->pc = 0x25B0C0u;
label_25b0c0:
    // 0x25b0c0: 0xc7808af4  lwc1        $f0, -0x750C($gp)
    ctx->pc = 0x25b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b0c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25b0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b0c8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x25B0C8u;
    {
        const bool branch_taken_0x25b0c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0C8u;
        // 0x25b0cc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0c8) {
            ctx->pc = 0x25B120u;
            goto label_25b120;
        }
    }
    ctx->pc = 0x25B0D0u;
    // 0x25b0d0: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x25b0d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b0d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25b0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25b0d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25b0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b0dc: 0x27b401e0  addiu       $s4, $sp, 0x1E0
    ctx->pc = 0x25b0dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x25b0e0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25b0e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x25b0e4: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x25b0e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x25b0e8: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x25b0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x25b0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25b0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0f4: 0x46140d41  sub.s       $f21, $f1, $f20
    ctx->pc = 0x25b0f4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x25b0f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x25b0f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0fc: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x25B0FCu;
    SET_GPR_U32(ctx, 31, 0x25B104u);
    ctx->pc = 0x25B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B0FCu;
    // 0x25b100: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x25B0FCu, 0x25B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B104u;
label_25b104:
    // 0x25b104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b108: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25b108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b10c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x25b10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25b110: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x25B110u;
    SET_GPR_U32(ctx, 31, 0x25B118u);
    ctx->pc = 0x25B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B110u;
    // 0x25b114: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x25B110u, 0x25B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B118u;
label_25b118:
    // 0x25b118: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x25B118u;
    {
        const bool branch_taken_0x25b118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B118u;
        // 0x25b11c: 0x2ac20017  slti        $v0, $s6, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b118) {
            ctx->pc = 0x25B2B8u;
            goto label_25b2b8;
        }
    }
    ctx->pc = 0x25B120u;
label_25b120:
    // 0x25b120: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x25b120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b12c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25b12cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25b130: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x25b130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x25b134: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x25b134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x25b138: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x25b138u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b13c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x25b13cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b140: 0xc0968c4  jal         func_25A310
    ctx->pc = 0x25B140u;
    SET_GPR_U32(ctx, 31, 0x25B148u);
    ctx->pc = 0x25B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B140u;
    // 0x25b144: 0x2412ffbc  addiu       $s2, $zero, -0x44 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A310u, 0x25B140u, 0x25B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B148u;
label_25b148:
    // 0x25b148: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x25b148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b14c: 0x0  nop
    ctx->pc = 0x25b14cu;
    // NOP
label_25b150:
    // 0x25b150: 0x2d41004  sllv        $v0, $s4, $s6
    ctx->pc = 0x25b150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 22) & 0x1F));
    // 0x25b154: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x25b154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x25b158: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25B158u;
    {
        const bool branch_taken_0x25b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B158u;
        // 0x25b15c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b158) {
            ctx->pc = 0x25B198u;
            goto label_25b198;
        }
    }
    ctx->pc = 0x25B160u;
    // 0x25b160: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x25b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b164: 0xc084c9a  jal         func_213268
    ctx->pc = 0x25B164u;
    SET_GPR_U32(ctx, 31, 0x25B16Cu);
    ctx->pc = 0x25B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B164u;
    // 0x25b168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213268u, 0x25B164u, 0x25B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B16Cu;
label_25b16c:
    // 0x25b16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b170: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x25b170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b174: 0xc084a62  jal         func_212988
    ctx->pc = 0x25B174u;
    SET_GPR_U32(ctx, 31, 0x25B17Cu);
    ctx->pc = 0x25B178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B174u;
    // 0x25b178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x25B174u, 0x25B17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B17Cu;
label_25b17c:
    // 0x25b17c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b180: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x25b180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b184: 0xc097066  jal         func_25C198
    ctx->pc = 0x25B184u;
    SET_GPR_U32(ctx, 31, 0x25B18Cu);
    ctx->pc = 0x25B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B184u;
    // 0x25b188: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x25B184u, 0x25B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B18Cu;
label_25b18c:
    // 0x25b18c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25B18Cu;
    {
        const bool branch_taken_0x25b18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B18Cu;
        // 0x25b190: 0x2ac20017  slti        $v0, $s6, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b18c) {
            ctx->pc = 0x25B1B4u;
            goto label_25b1b4;
        }
    }
    ctx->pc = 0x25B194u;
    // 0x25b194: 0x0  nop
    ctx->pc = 0x25b194u;
    // NOP
label_25b198:
    // 0x25b198: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25b198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b19c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x25b19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b1a0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x25b1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25b1a4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x25b1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x25b1a8: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x25b1a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x25b1ac: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x25b1acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x25b1b0: 0x2ac20017  slti        $v0, $s6, 0x17
    ctx->pc = 0x25b1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)23) ? 1 : 0);
label_25b1b4:
    // 0x25b1b4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x25b1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25b1b8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x25B1B8u;
    {
        const bool branch_taken_0x25b1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1B8u;
        // 0x25b1bc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1b8) {
            ctx->pc = 0x25B150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b150;
        }
    }
    ctx->pc = 0x25B1C0u;
    // 0x25b1c0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x25B1C0u;
    {
        const bool branch_taken_0x25b1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1C0u;
        // 0x25b1c4: 0xc6e00008  lwc1        $f0, 0x8($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1c0) {
            ctx->pc = 0x25B2C4u;
            goto label_25b2c4;
        }
    }
    ctx->pc = 0x25B1C8u;
label_25b1c8:
    // 0x25b1c8: 0x2403ffbc  addiu       $v1, $zero, -0x44
    ctx->pc = 0x25b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
    // 0x25b1cc: 0x2c21004  sllv        $v0, $v0, $s6
    ctx->pc = 0x25b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
    // 0x25b1d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25b1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25b1d4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x25B1D4u;
    {
        const bool branch_taken_0x25b1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1D4u;
        // 0x25b1d8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1d4) {
            ctx->pc = 0x25B260u;
            goto label_25b260;
        }
    }
    ctx->pc = 0x25B1DCu;
    // 0x25b1dc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x25b1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b1e0: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x25b1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b1e4: 0xc084c9a  jal         func_213268
    ctx->pc = 0x25B1E4u;
    SET_GPR_U32(ctx, 31, 0x25B1ECu);
    ctx->pc = 0x25B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B1E4u;
    // 0x25b1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213268u, 0x25B1E4u, 0x25B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B1ECu;
label_25b1ec:
    // 0x25b1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b1f0: 0xc6ac0004  lwc1        $f12, 0x4($s5)
    ctx->pc = 0x25b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b1f4: 0xc084a62  jal         func_212988
    ctx->pc = 0x25B1F4u;
    SET_GPR_U32(ctx, 31, 0x25B1FCu);
    ctx->pc = 0x25B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B1F4u;
    // 0x25b1f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x25B1F4u, 0x25B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B1FCu;
label_25b1fc:
    // 0x25b1fc: 0xc6ac0008  lwc1        $f12, 0x8($s5)
    ctx->pc = 0x25b1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b200: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x25b200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25b204: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x25b204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25b208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25b208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b20c: 0xc097066  jal         func_25C198
    ctx->pc = 0x25B20Cu;
    SET_GPR_U32(ctx, 31, 0x25B214u);
    ctx->pc = 0x25B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B20Cu;
    // 0x25b210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x25B20Cu, 0x25B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B214u;
label_25b214:
    // 0x25b214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b218: 0xc084c9a  jal         func_213268
    ctx->pc = 0x25B218u;
    SET_GPR_U32(ctx, 31, 0x25B220u);
    ctx->pc = 0x25B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B218u;
    // 0x25b21c: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x213268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213268u, 0x25B218u, 0x25B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B220u;
label_25b220:
    // 0x25b220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b224: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x25b224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b228: 0xc084a62  jal         func_212988
    ctx->pc = 0x25B228u;
    SET_GPR_U32(ctx, 31, 0x25B230u);
    ctx->pc = 0x25B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B228u;
    // 0x25b22c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x25B228u, 0x25B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B230u;
label_25b230:
    // 0x25b230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25b230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b234: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x25b234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25b238: 0xc68c0008  lwc1        $f12, 0x8($s4)
    ctx->pc = 0x25b238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b23c: 0xc097066  jal         func_25C198
    ctx->pc = 0x25B23Cu;
    SET_GPR_U32(ctx, 31, 0x25B244u);
    ctx->pc = 0x25B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B23Cu;
    // 0x25b240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x25B23Cu, 0x25B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B244u;
label_25b244:
    // 0x25b244: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b248: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25b248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b24c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25b24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b250: 0xc0970a6  jal         func_25C298
    ctx->pc = 0x25B250u;
    SET_GPR_U32(ctx, 31, 0x25B258u);
    ctx->pc = 0x25B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B250u;
    // 0x25b254: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C298u, 0x25B250u, 0x25B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B258u;
label_25b258:
    // 0x25b258: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25B258u;
    {
        const bool branch_taken_0x25b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B258u;
        // 0x25b25c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b258) {
            ctx->pc = 0x25B2ACu;
            goto label_25b2ac;
        }
    }
    ctx->pc = 0x25B260u;
label_25b260:
    // 0x25b260: 0xc6a40000  lwc1        $f4, 0x0($s5)
    ctx->pc = 0x25b260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25b264: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x25b264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25b268: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x25b268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25b26c: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x25b26cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x25b270: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x25b270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25b274: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x25b274u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x25b278: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x25b278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b27c: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x25b27cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x25b280: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x25b280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b284: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x25b284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x25b288: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x25b288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x25b28c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25b28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x25b290: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x25b290u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x25b294: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x25b294u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x25b298: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25b298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25b29c: 0xe6640000  swc1        $f4, 0x0($s3)
    ctx->pc = 0x25b29cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x25b2a0: 0xe6630004  swc1        $f3, 0x4($s3)
    ctx->pc = 0x25b2a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x25b2a4: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x25b2a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x25b2a8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x25b2a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_25b2ac:
    // 0x25b2ac: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x25b2acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x25b2b0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x25b2b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x25b2b4: 0x2ac20017  slti        $v0, $s6, 0x17
    ctx->pc = 0x25b2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)23) ? 1 : 0);
label_25b2b8:
    // 0x25b2b8: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x25B2B8u;
    {
        const bool branch_taken_0x25b2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2B8u;
        // 0x25b2bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2b8) {
            ctx->pc = 0x25B1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b1c8;
        }
    }
    ctx->pc = 0x25B2C0u;
    // 0x25b2c0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x25b2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b2c4:
    // 0x25b2c4: 0xc6e10018  lwc1        $f1, 0x18($s7)
    ctx->pc = 0x25b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b2c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25b2c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25b2cc: 0xdfb00350  ld          $s0, 0x350($sp)
    ctx->pc = 0x25b2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x25b2d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25b2d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x25b2d4: 0xdfb10358  ld          $s1, 0x358($sp)
    ctx->pc = 0x25b2d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x25b2d8: 0xdfb20360  ld          $s2, 0x360($sp)
    ctx->pc = 0x25b2d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x25b2dc: 0xdfb30368  ld          $s3, 0x368($sp)
    ctx->pc = 0x25b2dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x25b2e0: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x25b2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x25b2e4: 0xe6e10018  swc1        $f1, 0x18($s7)
    ctx->pc = 0x25b2e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 24), bits); }
    // 0x25b2e8: 0xdfb40370  ld          $s4, 0x370($sp)
    ctx->pc = 0x25b2e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x25b2ec: 0xdfb50378  ld          $s5, 0x378($sp)
    ctx->pc = 0x25b2ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 888)));
    // 0x25b2f0: 0xdfb60380  ld          $s6, 0x380($sp)
    ctx->pc = 0x25b2f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x25b2f4: 0xdfb70388  ld          $s7, 0x388($sp)
    ctx->pc = 0x25b2f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x25b2f8: 0xdfbf0390  ld          $ra, 0x390($sp)
    ctx->pc = 0x25b2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x25b2fc: 0xc7b503a0  lwc1        $f21, 0x3A0($sp)
    ctx->pc = 0x25b2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25b300: 0xc7b40398  lwc1        $f20, 0x398($sp)
    ctx->pc = 0x25b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b304: 0x3e00008  jr          $ra
    ctx->pc = 0x25B304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B304u;
        // 0x25b308: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B30Cu;
    // 0x25b30c: 0x0  nop
    ctx->pc = 0x25b30cu;
    // NOP
    ctx->pc = 0x25b310u;
}
