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

// Function: sub_0025F1C8
// Address: 0x25f1c8 - 0x25f348
void sub_0025F1C8_0x25f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F1C8_0x25f1c8");
#endif

    switch (ctx->pc) {
        case 0x25f24cu: goto label_25f24c;
        case 0x25f25cu: goto label_25f25c;
        case 0x25f270u: goto label_25f270;
        case 0x25f2f0u: goto label_25f2f0;
        case 0x25f318u: goto label_25f318;
        case 0x25f320u: goto label_25f320;
        default: break;
    }

    ctx->pc = 0x25f1c8u;

    // 0x25f1c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25f1cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25f1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f1d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25f1d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25f1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25f1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25f1dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25f1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25f1e0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x25f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x25f1e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25f1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25f1e8: 0x26320030  addiu       $s2, $s1, 0x30
    ctx->pc = 0x25f1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25f1ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25f1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25f1f0: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x25f1f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25f1f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f1f8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x25f1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x25f1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x25f200: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25f200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f204: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x25f204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x25f208: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x25f208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25f20c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x25f20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x25f210: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x25f210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x25f214: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x25f214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x25f218: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x25f218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x25f21c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x25f21cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x25f220: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25f224: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25f224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25f228: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25f228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25f22c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x25f22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x25f230: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x25f230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x25f234: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25f234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25f238: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x25f238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x25f23c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x25f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x25f240: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x25f240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x25f244: 0xc097ace  jal         func_25EB38
    ctx->pc = 0x25F244u;
    SET_GPR_U32(ctx, 31, 0x25F24Cu);
    ctx->pc = 0x25F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F244u;
    // 0x25f248: 0xa623004c  sh          $v1, 0x4C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB38u, 0x25F244u, 0x25F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F24Cu;
label_25f24c:
    // 0x25f24c: 0x56000035  bnel        $s0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x25F24Cu;
    {
        const bool branch_taken_0x25f24c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f24c) {
            ctx->pc = 0x25F250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F24Cu;
            // 0x25f250: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F324u;
            goto label_25f324;
        }
    }
    ctx->pc = 0x25F254u;
    // 0x25f254: 0xc097b24  jal         func_25EC90
    ctx->pc = 0x25F254u;
    SET_GPR_U32(ctx, 31, 0x25F25Cu);
    ctx->pc = 0x25F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F254u;
    // 0x25f258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EC90u, 0x25F254u, 0x25F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F25Cu;
label_25f25c:
    // 0x25f25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25f25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f260: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25f260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f264: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25f264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f268: 0xc084774  jal         func_211DD0
    ctx->pc = 0x25F268u;
    SET_GPR_U32(ctx, 31, 0x25F270u);
    ctx->pc = 0x25F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F268u;
    // 0x25f26c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x25F268u, 0x25F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F270u;
label_25f270:
    // 0x25f270: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25f274: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25f274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25f278: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25F278u;
    {
        const bool branch_taken_0x25f278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f278) {
            ctx->pc = 0x25F27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F278u;
            // 0x25f27c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F2B8u;
            goto label_25f2b8;
        }
    }
    ctx->pc = 0x25F280u;
    // 0x25f280: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x25f280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25f284: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F284u;
    {
        const bool branch_taken_0x25f284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F284u;
        // 0x25f288: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f284) {
            ctx->pc = 0x25F2A0u;
            goto label_25f2a0;
        }
    }
    ctx->pc = 0x25F28Cu;
    // 0x25f28c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f290: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25F290u;
    {
        const bool branch_taken_0x25f290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25f290) {
            ctx->pc = 0x25F2E0u;
            goto label_25f2e0;
        }
    }
    ctx->pc = 0x25F298u;
    // 0x25f298: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x25F298u;
    {
        const bool branch_taken_0x25f298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f298) {
            ctx->pc = 0x25F318u;
            goto label_25f318;
        }
    }
    ctx->pc = 0x25F2A0u;
label_25f2a0:
    // 0x25f2a0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F2A0u;
    {
        const bool branch_taken_0x25f2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2A0u;
        // 0x25f2a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2a0) {
            ctx->pc = 0x25F2C8u;
            goto label_25f2c8;
        }
    }
    ctx->pc = 0x25F2A8u;
    // 0x25f2a8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25F2A8u;
    {
        const bool branch_taken_0x25f2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2A8u;
        // 0x25f2ac: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2a8) {
            ctx->pc = 0x25F2F8u;
            goto label_25f2f8;
        }
    }
    ctx->pc = 0x25F2B0u;
    // 0x25f2b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25F2B0u;
    {
        const bool branch_taken_0x25f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f2b0) {
            ctx->pc = 0x25F318u;
            goto label_25f318;
        }
    }
    ctx->pc = 0x25F2B8u;
label_25f2b8:
    // 0x25f2b8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x25f2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x25f2bc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x25f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x25f2c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25F2C0u;
    {
        const bool branch_taken_0x25f2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2C0u;
        // 0x25f2c4: 0x28420095  slti        $v0, $v0, 0x95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)149) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2c0) {
            ctx->pc = 0x25F2D8u;
            goto label_25f2d8;
        }
    }
    ctx->pc = 0x25F2C8u;
label_25f2c8:
    // 0x25f2c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x25f2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25f2cc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x25f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x25f2d0: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x25f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x25f2d4: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x25f2d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_25f2d8:
    // 0x25f2d8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25F2D8u;
    {
        const bool branch_taken_0x25f2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f2d8) {
            ctx->pc = 0x25F318u;
            goto label_25f318;
        }
    }
    ctx->pc = 0x25F2E0u;
label_25f2e0:
    // 0x25f2e0: 0xc78d8bb4  lwc1        $f13, -0x744C($gp)
    ctx->pc = 0x25f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25f2e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25f2e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25f2e8: 0xc097c38  jal         func_25F0E0
    ctx->pc = 0x25F2E8u;
    SET_GPR_U32(ctx, 31, 0x25F2F0u);
    ctx->pc = 0x25F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2E8u;
    // 0x25f2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F0E0u, 0x25F2E8u, 0x25F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2F0u;
label_25f2f0:
    // 0x25f2f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25F2F0u;
    {
        const bool branch_taken_0x25f2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f2f0) {
            ctx->pc = 0x25F318u;
            goto label_25f318;
        }
    }
    ctx->pc = 0x25F2F8u;
label_25f2f8:
    // 0x25f2f8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x25f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x25f2fc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x25f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x25f300: 0x28420095  slti        $v0, $v0, 0x95
    ctx->pc = 0x25f300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)149) ? 1 : 0);
    // 0x25f304: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F304u;
    {
        const bool branch_taken_0x25f304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F304u;
        // 0x25f308: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f304) {
            ctx->pc = 0x25F318u;
            goto label_25f318;
        }
    }
    ctx->pc = 0x25F30Cu;
    // 0x25f30c: 0xc78d8bb8  lwc1        $f13, -0x7448($gp)
    ctx->pc = 0x25f30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25f310: 0xc097c38  jal         func_25F0E0
    ctx->pc = 0x25F310u;
    SET_GPR_U32(ctx, 31, 0x25F318u);
    ctx->pc = 0x25F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F310u;
    // 0x25f314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F0E0u, 0x25F310u, 0x25F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F318u;
label_25f318:
    // 0x25f318: 0xc097b76  jal         func_25EDD8
    ctx->pc = 0x25F318u;
    SET_GPR_U32(ctx, 31, 0x25F320u);
    ctx->pc = 0x25F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F318u;
    // 0x25f31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EDD8u, 0x25F318u, 0x25F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F320u;
label_25f320:
    // 0x25f320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f324:
    // 0x25f324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25f324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25f328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25f328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f32c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25f32cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25f330: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x25f330u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f334: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x25f334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25f338: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25f338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25f33c: 0x3e00008  jr          $ra
    ctx->pc = 0x25F33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F33Cu;
        // 0x25f340: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F344u;
    // 0x25f344: 0x0  nop
    ctx->pc = 0x25f344u;
    // NOP
    ctx->pc = 0x25f348u;
}
