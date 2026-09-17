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

// Function: sub_002BC208
// Address: 0x2bc208 - 0x2bc488
void sub_002BC208_0x2bc208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC208_0x2bc208");
#endif

    switch (ctx->pc) {
        case 0x2bc290u: goto label_2bc290;
        case 0x2bc298u: goto label_2bc298;
        case 0x2bc2c0u: goto label_2bc2c0;
        case 0x2bc2d0u: goto label_2bc2d0;
        case 0x2bc30cu: goto label_2bc30c;
        case 0x2bc324u: goto label_2bc324;
        case 0x2bc338u: goto label_2bc338;
        case 0x2bc348u: goto label_2bc348;
        case 0x2bc35cu: goto label_2bc35c;
        case 0x2bc364u: goto label_2bc364;
        case 0x2bc36cu: goto label_2bc36c;
        case 0x2bc374u: goto label_2bc374;
        case 0x2bc384u: goto label_2bc384;
        case 0x2bc394u: goto label_2bc394;
        case 0x2bc39cu: goto label_2bc39c;
        case 0x2bc3b8u: goto label_2bc3b8;
        case 0x2bc3c0u: goto label_2bc3c0;
        case 0x2bc3c8u: goto label_2bc3c8;
        case 0x2bc3d0u: goto label_2bc3d0;
        case 0x2bc3d8u: goto label_2bc3d8;
        case 0x2bc3e0u: goto label_2bc3e0;
        case 0x2bc414u: goto label_2bc414;
        case 0x2bc454u: goto label_2bc454;
        default: break;
    }

    ctx->pc = 0x2bc208u;

    // 0x2bc208: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bc208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bc20c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2bc20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2bc210: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bc210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc214: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2bc214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2bc218: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x2bc218u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x2bc21c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc220: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bc220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bc224: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2bc224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2bc228: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2bc228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2bc22c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2bc22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2bc230: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2bc230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2bc234: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2bc234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2bc238: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bc238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bc23c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2bc23cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bc240: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BC240u;
    {
        const bool branch_taken_0x2bc240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC240u;
        // 0x2bc244: 0x8fc68858  lw          $a2, -0x77A8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc240) {
            ctx->pc = 0x2BC270u;
            goto label_2bc270;
        }
    }
    ctx->pc = 0x2BC248u;
    // 0x2bc248: 0x9644003c  lhu         $a0, 0x3C($s2)
    ctx->pc = 0x2bc248u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2bc24c: 0x2785bae0  addiu       $a1, $gp, -0x4520
    ctx->pc = 0x2bc24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949600));
    // 0x2bc250: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2bc250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bc254: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x2bc254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2bc258: 0x8c63bae0  lw          $v1, -0x4520($v1)
    ctx->pc = 0x2bc258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949600)));
    // 0x2bc25c: 0x1066007d  beq         $v1, $a2, . + 4 + (0x7D << 2)
    ctx->pc = 0x2BC25Cu;
    {
        const bool branch_taken_0x2bc25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC25Cu;
        // 0x2bc260: 0x26440720  addiu       $a0, $s2, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc25c) {
            ctx->pc = 0x2BC454u;
            goto label_2bc454;
        }
    }
    ctx->pc = 0x2BC264u;
    // 0x2bc264: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC264u;
    {
        const bool branch_taken_0x2bc264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC264u;
        // 0x2bc268: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc264) {
            ctx->pc = 0x2BC284u;
            goto label_2bc284;
        }
    }
    ctx->pc = 0x2BC26Cu;
    // 0x2bc26c: 0x0  nop
    ctx->pc = 0x2bc26cu;
    // NOP
label_2bc270:
    // 0x2bc270: 0x9644003c  lhu         $a0, 0x3C($s2)
    ctx->pc = 0x2bc270u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2bc274: 0x2785bae0  addiu       $a1, $gp, -0x4520
    ctx->pc = 0x2bc274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949600));
    // 0x2bc278: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2bc278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bc27c: 0x26440720  addiu       $a0, $s2, 0x720
    ctx->pc = 0x2bc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1824));
    // 0x2bc280: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2bc280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2bc284:
    // 0x2bc284: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2bc284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2bc288: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2BC288u;
    SET_GPR_U32(ctx, 31, 0x2BC290u);
    ctx->pc = 0x2BC28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC288u;
    // 0x2bc28c: 0x8e570894  lw          $s7, 0x894($s2) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2BC288u, 0x2BC290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC290u;
label_2bc290:
    // 0x2bc290: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2BC290u;
    SET_GPR_U32(ctx, 31, 0x2BC298u);
    ctx->pc = 0x2BC294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC290u;
    // 0x2bc294: 0x26440760  addiu       $a0, $s2, 0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2BC290u, 0x2BC298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC298u;
label_2bc298:
    // 0x2bc298: 0x8ef1001c  lw          $s1, 0x1C($s7)
    ctx->pc = 0x2bc298u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x2bc29c: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x2bc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x2bc2a0: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x2bc2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bc2a4: 0x8c560030  lw          $s6, 0x30($v0)
    ctx->pc = 0x2bc2a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bc2a8: 0x8c530034  lw          $s3, 0x34($v0)
    ctx->pc = 0x2bc2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2bc2ac: 0x1a800024  blez        $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BC2ACu;
    {
        const bool branch_taken_0x2bc2ac = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2BC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2ACu;
        // 0x2bc2b0: 0x8c550024  lw          $s5, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2ac) {
            ctx->pc = 0x2BC340u;
            goto label_2bc340;
        }
    }
    ctx->pc = 0x2BC2B4u;
    // 0x2bc2b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc2b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bc2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bc2bc: 0x0  nop
    ctx->pc = 0x2bc2bcu;
    // NOP
label_2bc2c0:
    // 0x2bc2c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bc2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc2c4: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x2bc2c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x2bc2c8: 0xc096e12  jal         func_25B848
    ctx->pc = 0x2BC2C8u;
    SET_GPR_U32(ctx, 31, 0x2BC2D0u);
    ctx->pc = 0x2BC2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC2C8u;
    // 0x2bc2cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B848u, 0x2BC2C8u, 0x2BC2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC2D0u;
label_2bc2d0:
    // 0x2bc2d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bc2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc2d4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2bc2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc2d8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2bc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2bc2dc: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2bc2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2bc2e0: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2bc2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2bc2e4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2bc2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc2e8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2bc2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2bc2ec: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2bc2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc2f0: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x2bc2f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2bc2f4: 0xe634003c  swc1        $f20, 0x3C($s1)
    ctx->pc = 0x2bc2f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x2bc2f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC2F8u;
    {
        const bool branch_taken_0x2bc2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2F8u;
        // 0x2bc2fc: 0xe6210038  swc1        $f1, 0x38($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2f8) {
            ctx->pc = 0x2BC318u;
            goto label_2bc318;
        }
    }
    ctx->pc = 0x2BC300u;
    // 0x2bc300: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2bc300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2bc304: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BC304u;
    SET_GPR_U32(ctx, 31, 0x2BC30Cu);
    ctx->pc = 0x2BC308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC304u;
    // 0x2bc308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BC304u, 0x2BC30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC30Cu;
label_2bc30c:
    // 0x2bc30c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC30Cu;
    {
        const bool branch_taken_0x2bc30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC30Cu;
        // 0x2bc310: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc30c) {
            ctx->pc = 0x2BC328u;
            goto label_2bc328;
        }
    }
    ctx->pc = 0x2BC314u;
    // 0x2bc314: 0x0  nop
    ctx->pc = 0x2bc314u;
    // NOP
label_2bc318:
    // 0x2bc318: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2bc318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2bc31c: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2BC31Cu;
    SET_GPR_U32(ctx, 31, 0x2BC324u);
    ctx->pc = 0x2BC320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC31Cu;
    // 0x2bc320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2BC31Cu, 0x2BC324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC324u;
label_2bc324:
    // 0x2bc324: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bc324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bc328:
    // 0x2bc328: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x2bc328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x2bc32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bc32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc330: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2BC330u;
    SET_GPR_U32(ctx, 31, 0x2BC338u);
    ctx->pc = 0x2BC334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC330u;
    // 0x2bc334: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2BC330u, 0x2BC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC338u;
label_2bc338:
    // 0x2bc338: 0x1e80ffe1  bgtz        $s4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2BC338u;
    {
        const bool branch_taken_0x2bc338 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x2BC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC338u;
        // 0x2bc33c: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc338) {
            ctx->pc = 0x2BC2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc2c0;
        }
    }
    ctx->pc = 0x2BC340u;
label_2bc340:
    // 0x2bc340: 0xc0af066  jal         func_2BC198
    ctx->pc = 0x2BC340u;
    SET_GPR_U32(ctx, 31, 0x2BC348u);
    ctx->pc = 0x2BC344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC340u;
    // 0x2bc344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC198u, 0x2BC340u, 0x2BC348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC348u;
label_2bc348:
    // 0x2bc348: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2bc348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x2bc34c: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x2bc34cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x2bc350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc354: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2BC354u;
    SET_GPR_U32(ctx, 31, 0x2BC35Cu);
    ctx->pc = 0x2BC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC354u;
    // 0x2bc358: 0xae400038  sw          $zero, 0x38($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA38u, 0x2BC354u, 0x2BC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC35Cu;
label_2bc35c:
    // 0x2bc35c: 0xc097842  jal         func_25E108
    ctx->pc = 0x2BC35Cu;
    SET_GPR_U32(ctx, 31, 0x2BC364u);
    ctx->pc = 0x2BC360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC35Cu;
    // 0x2bc360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E108u, 0x2BC35Cu, 0x2BC364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC364u;
label_2bc364:
    // 0x2bc364: 0xc097994  jal         func_25E650
    ctx->pc = 0x2BC364u;
    SET_GPR_U32(ctx, 31, 0x2BC36Cu);
    ctx->pc = 0x2BC368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC364u;
    // 0x2bc368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E650u, 0x2BC364u, 0x2BC36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC36Cu;
label_2bc36c:
    // 0x2bc36c: 0xc08f356  jal         func_23CD58
    ctx->pc = 0x2BC36Cu;
    SET_GPR_U32(ctx, 31, 0x2BC374u);
    ctx->pc = 0x2BC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC36Cu;
    // 0x2bc370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CD58u, 0x2BC36Cu, 0x2BC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC374u;
label_2bc374:
    // 0x2bc374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc378: 0x8ee6001c  lw          $a2, 0x1C($s7)
    ctx->pc = 0x2bc378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x2bc37c: 0xc0af888  jal         func_2BE220
    ctx->pc = 0x2BC37Cu;
    SET_GPR_U32(ctx, 31, 0x2BC384u);
    ctx->pc = 0x2BC380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC37Cu;
    // 0x2bc380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE220u, 0x2BC37Cu, 0x2BC384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC384u;
label_2bc384:
    // 0x2bc384: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc388: 0x8ee60020  lw          $a2, 0x20($s7)
    ctx->pc = 0x2bc388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x2bc38c: 0xc0af888  jal         func_2BE220
    ctx->pc = 0x2BC38Cu;
    SET_GPR_U32(ctx, 31, 0x2BC394u);
    ctx->pc = 0x2BC390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC38Cu;
    // 0x2bc390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE220u, 0x2BC38Cu, 0x2BC394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC394u;
label_2bc394:
    // 0x2bc394: 0xc09fd76  jal         func_27F5D8
    ctx->pc = 0x2BC394u;
    SET_GPR_U32(ctx, 31, 0x2BC39Cu);
    ctx->pc = 0x2BC398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC394u;
    // 0x2bc398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F5D8u, 0x2BC394u, 0x2BC39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC39Cu;
label_2bc39c:
    // 0x2bc39c: 0xae4006d0  sw          $zero, 0x6D0($s2)
    ctx->pc = 0x2bc39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1744), GPR_U32(ctx, 0));
    // 0x2bc3a0: 0xc64006c0  lwc1        $f0, 0x6C0($s2)
    ctx->pc = 0x2bc3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc3a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc3a8: 0xe64006cc  swc1        $f0, 0x6CC($s2)
    ctx->pc = 0x2bc3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1740), bits); }
    // 0x2bc3ac: 0xe64006c8  swc1        $f0, 0x6C8($s2)
    ctx->pc = 0x2bc3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1736), bits); }
    // 0x2bc3b0: 0xc0af1d4  jal         func_2BC750
    ctx->pc = 0x2BC3B0u;
    SET_GPR_U32(ctx, 31, 0x2BC3B8u);
    ctx->pc = 0x2BC3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3B0u;
    // 0x2bc3b4: 0xe64006c4  swc1        $f0, 0x6C4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1732), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC750u, 0x2BC3B0u, 0x2BC3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3B8u;
label_2bc3b8:
    // 0x2bc3b8: 0xc0967ee  jal         func_259FB8
    ctx->pc = 0x2BC3B8u;
    SET_GPR_U32(ctx, 31, 0x2BC3C0u);
    ctx->pc = 0x2BC3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3B8u;
    // 0x2bc3bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259FB8u, 0x2BC3B8u, 0x2BC3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3C0u;
label_2bc3c0:
    // 0x2bc3c0: 0xc096800  jal         func_25A000
    ctx->pc = 0x2BC3C0u;
    SET_GPR_U32(ctx, 31, 0x2BC3C8u);
    ctx->pc = 0x2BC3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3C0u;
    // 0x2bc3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A000u, 0x2BC3C0u, 0x2BC3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3C8u;
label_2bc3c8:
    // 0x2bc3c8: 0xc0960ce  jal         func_258338
    ctx->pc = 0x2BC3C8u;
    SET_GPR_U32(ctx, 31, 0x2BC3D0u);
    ctx->pc = 0x2BC3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3C8u;
    // 0x2bc3cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258338u, 0x2BC3C8u, 0x2BC3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3D0u;
label_2bc3d0:
    // 0x2bc3d0: 0xc09683c  jal         func_25A0F0
    ctx->pc = 0x2BC3D0u;
    SET_GPR_U32(ctx, 31, 0x2BC3D8u);
    ctx->pc = 0x2BC3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3D0u;
    // 0x2bc3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0F0u, 0x2BC3D0u, 0x2BC3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3D8u;
label_2bc3d8:
    // 0x2bc3d8: 0xc09611e  jal         func_258478
    ctx->pc = 0x2BC3D8u;
    SET_GPR_U32(ctx, 31, 0x2BC3E0u);
    ctx->pc = 0x2BC3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3D8u;
    // 0x2bc3dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258478u, 0x2BC3D8u, 0x2BC3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3E0u;
label_2bc3e0:
    // 0x2bc3e0: 0x27c28858  addiu       $v0, $fp, -0x77A8
    ctx->pc = 0x2bc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936664));
    // 0x2bc3e4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2bc3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2bc3e8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2bc3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bc3ec: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BC3ECu;
    {
        const bool branch_taken_0x2bc3ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3ECu;
        // 0x2bc3f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3ec) {
            ctx->pc = 0x2BC458u;
            goto label_2bc458;
        }
    }
    ctx->pc = 0x2BC3F4u;
    // 0x2bc3f4: 0x86430042  lh          $v1, 0x42($s2)
    ctx->pc = 0x2bc3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x2bc3f8: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x2bc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x2bc3fc: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BC3FCu;
    {
        const bool branch_taken_0x2bc3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bc3fc) {
            ctx->pc = 0x2BC400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC3FCu;
            // 0x2bc400: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC45Cu;
            goto label_2bc45c;
        }
    }
    ctx->pc = 0x2BC404u;
    // 0x2bc404: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2bc404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2bc408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bc408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc40c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2BC40Cu;
    SET_GPR_U32(ctx, 31, 0x2BC414u);
    ctx->pc = 0x2BC410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC40Cu;
    // 0x2bc410: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2BC40Cu, 0x2BC414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC414u;
label_2bc414:
    // 0x2bc414: 0x9643003c  lhu         $v1, 0x3C($s2)
    ctx->pc = 0x2bc414u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2bc418: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bc418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bc41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc420: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x2bc420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2bc424: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2bc424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bc428: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC428u;
    {
        const bool branch_taken_0x2bc428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc428) {
            ctx->pc = 0x2BC42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC428u;
            // 0x2bc42c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC444u;
            goto label_2bc444;
        }
    }
    ctx->pc = 0x2BC430u;
    // 0x2bc430: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2bc430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2bc434: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2bc434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bc438: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC438u;
    {
        const bool branch_taken_0x2bc438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bc438) {
            ctx->pc = 0x2BC44Cu;
            goto label_2bc44c;
        }
    }
    ctx->pc = 0x2BC440u;
    // 0x2bc440: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2bc440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2bc444:
    // 0x2bc444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bc444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc448: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2bc448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2bc44c:
    // 0x2bc44c: 0xc0b8a56  jal         func_2E2958
    ctx->pc = 0x2BC44Cu;
    SET_GPR_U32(ctx, 31, 0x2BC454u);
    ctx->pc = 0x2E2958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2958u, 0x2BC44Cu, 0x2BC454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC454u;
label_2bc454:
    // 0x2bc454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc458:
    // 0x2bc458: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bc458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2bc45c:
    // 0x2bc45c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2bc45cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc460: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2bc460u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc464: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2bc464u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc468: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2bc468u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2bc46c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2bc46cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc470: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2bc470u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2bc474: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2bc474u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc478: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bc478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bc47c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2bc47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bc480: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC480u;
        // 0x2bc484: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC488u;
}
