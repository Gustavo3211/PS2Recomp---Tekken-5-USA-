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

// Function: sub_0032D220
// Address: 0x32d220 - 0x32d438
void sub_0032D220_0x32d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D220_0x32d220");
#endif

    switch (ctx->pc) {
        case 0x32d268u: goto label_32d268;
        case 0x32d290u: goto label_32d290;
        case 0x32d2f4u: goto label_32d2f4;
        case 0x32d314u: goto label_32d314;
        case 0x32d36cu: goto label_32d36c;
        case 0x32d38cu: goto label_32d38c;
        case 0x32d3ccu: goto label_32d3cc;
        case 0x32d3e0u: goto label_32d3e0;
        case 0x32d414u: goto label_32d414;
        case 0x32d428u: goto label_32d428;
        default: break;
    }

    ctx->pc = 0x32d220u;

    // 0x32d220: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32d220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d224: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32d228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32d22c: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d230: 0xe7b90030  swc1        $f25, 0x30($sp)
    ctx->pc = 0x32d230u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x32d234: 0x46008e46  mov.s       $f25, $f17
    ctx->pc = 0x32d234u;
    ctx->f[25] = FPU_MOV_S(ctx->f[17]);
    // 0x32d238: 0xe7b80028  swc1        $f24, 0x28($sp)
    ctx->pc = 0x32d238u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x32d23c: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x32d23cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x32d240: 0xe7b70020  swc1        $f23, 0x20($sp)
    ctx->pc = 0x32d240u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x32d244: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x32d244u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x32d248: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x32d248u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x32d24c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x32d24cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x32d250: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x32d250u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32d254: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x32d254u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x32d258: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x32d258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x32d25c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d260: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D260u;
    SET_GPR_U32(ctx, 31, 0x32D268u);
    ctx->pc = 0x32D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D260u;
    // 0x32d264: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D260u, 0x32D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D268u;
label_32d268:
    // 0x32d268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32d268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d26c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32d26cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x32d270: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x32d270u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x32d274: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x32d274u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x32d278: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x32d278u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x32d27c: 0x4600c406  mov.s       $f16, $f24
    ctx->pc = 0x32d27cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[24]);
    // 0x32d280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D280u;
    {
        const bool branch_taken_0x32d280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D280u;
        // 0x32d284: 0x4600cc46  mov.s       $f17, $f25 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d280) {
            ctx->pc = 0x32D290u;
            goto label_32d290;
        }
    }
    ctx->pc = 0x32D288u;
    // 0x32d288: 0xc0cb6e0  jal         func_32DB80
    ctx->pc = 0x32D288u;
    SET_GPR_U32(ctx, 31, 0x32D290u);
    ctx->pc = 0x32DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DB80u, 0x32D288u, 0x32D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D290u;
label_32d290:
    // 0x32d290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d294: 0xc7b90030  lwc1        $f25, 0x30($sp)
    ctx->pc = 0x32d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x32d298: 0xc7b80028  lwc1        $f24, 0x28($sp)
    ctx->pc = 0x32d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x32d29c: 0xc7b70020  lwc1        $f23, 0x20($sp)
    ctx->pc = 0x32d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x32d2a0: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x32d2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x32d2a4: 0xc7b50010  lwc1        $f21, 0x10($sp)
    ctx->pc = 0x32d2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x32d2a8: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x32d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32d2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x32D2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D2ACu;
        // 0x32d2b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D2B4u;
    // 0x32d2b4: 0x0  nop
    ctx->pc = 0x32d2b4u;
    // NOP
    // 0x32d2b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d2bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d2c0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d2c8: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d2cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d2d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d2d4: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x32d2d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x32d2d8: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x32d2d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x32d2dc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x32d2dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x32d2e0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x32d2e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32d2e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x32d2e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x32d2e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d2ec: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D2ECu;
    SET_GPR_U32(ctx, 31, 0x32D2F4u);
    ctx->pc = 0x32D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D2ECu;
    // 0x32d2f0: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D2ECu, 0x32D2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D2F4u;
label_32d2f4:
    // 0x32d2f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d2f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32d2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d2fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32d2fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x32d300: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x32d300u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x32d304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D304u;
    {
        const bool branch_taken_0x32d304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D304u;
        // 0x32d308: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d304) {
            ctx->pc = 0x32D314u;
            goto label_32d314;
        }
    }
    ctx->pc = 0x32D30Cu;
    // 0x32d30c: 0xc0cb64a  jal         func_32D928
    ctx->pc = 0x32D30Cu;
    SET_GPR_U32(ctx, 31, 0x32D314u);
    ctx->pc = 0x32D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D928u, 0x32D30Cu, 0x32D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D314u;
label_32d314:
    // 0x32d314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d318: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d31c: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x32d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x32d320: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x32d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x32d324: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x32d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32d328: 0x3e00008  jr          $ra
    ctx->pc = 0x32D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D328u;
        // 0x32d32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D330u;
    // 0x32d330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d334: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d338: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d33c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d340: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d344: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d348: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d34c: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x32d34cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x32d350: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x32d350u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x32d354: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x32d354u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x32d358: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x32d358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32d35c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x32d35cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x32d360: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d364: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D364u;
    SET_GPR_U32(ctx, 31, 0x32D36Cu);
    ctx->pc = 0x32D368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D364u;
    // 0x32d368: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D364u, 0x32D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D36Cu;
label_32d36c:
    // 0x32d36c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32d370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d374: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32d374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x32d378: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x32d378u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x32d37c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D37Cu;
    {
        const bool branch_taken_0x32d37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D37Cu;
        // 0x32d380: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d37c) {
            ctx->pc = 0x32D38Cu;
            goto label_32d38c;
        }
    }
    ctx->pc = 0x32D384u;
    // 0x32d384: 0xc0cb694  jal         func_32DA50
    ctx->pc = 0x32D384u;
    SET_GPR_U32(ctx, 31, 0x32D38Cu);
    ctx->pc = 0x32DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DA50u, 0x32D384u, 0x32D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D38Cu;
label_32d38c:
    // 0x32d38c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d38cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d390: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d394: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x32d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x32d398: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x32d398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x32d39c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x32d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32d3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x32D3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3A0u;
        // 0x32d3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D3A8u;
    // 0x32d3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d3ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3b0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d3b8: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d3bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d3c4: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D3C4u;
    SET_GPR_U32(ctx, 31, 0x32D3CCu);
    ctx->pc = 0x32D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D3C4u;
    // 0x32d3c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D3C4u, 0x32D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3CCu;
label_32d3cc:
    // 0x32d3cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D3D0u;
    {
        const bool branch_taken_0x32d3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3D0u;
        // 0x32d3d4: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d3d0) {
            ctx->pc = 0x32D3E0u;
            goto label_32d3e0;
        }
    }
    ctx->pc = 0x32D3D8u;
    // 0x32d3d8: 0xc0caf8c  jal         func_32BE30
    ctx->pc = 0x32D3D8u;
    SET_GPR_U32(ctx, 31, 0x32D3E0u);
    ctx->pc = 0x32BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BE30u, 0x32D3D8u, 0x32D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D3E0u;
label_32d3e0:
    // 0x32d3e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d3e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32D3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3E8u;
        // 0x32d3ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D3F0u;
    // 0x32d3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d3f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d3f8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d3fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d400: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d404: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d408: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d40c: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D40Cu;
    SET_GPR_U32(ctx, 31, 0x32D414u);
    ctx->pc = 0x32D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D40Cu;
    // 0x32d410: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D40Cu, 0x32D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D414u;
label_32d414:
    // 0x32d414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D418u;
    {
        const bool branch_taken_0x32d418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D418u;
        // 0x32d41c: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d418) {
            ctx->pc = 0x32D428u;
            goto label_32d428;
        }
    }
    ctx->pc = 0x32D420u;
    // 0x32d420: 0xc0caf9e  jal         func_32BE78
    ctx->pc = 0x32D420u;
    SET_GPR_U32(ctx, 31, 0x32D428u);
    ctx->pc = 0x32BE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BE78u, 0x32D420u, 0x32D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D428u;
label_32d428:
    // 0x32d428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d42c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d430: 0x3e00008  jr          $ra
    ctx->pc = 0x32D430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D430u;
        // 0x32d434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D438u;
}
