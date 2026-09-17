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

// Function: sub_004CD270
// Address: 0x4cd270 - 0x4ce080
void sub_004CD270_0x4cd270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD270_0x4cd270");
#endif

    switch (ctx->pc) {
        case 0x4cd274u: goto label_4cd274;
        case 0x4cd288u: goto label_4cd288;
        case 0x4cd2b8u: goto label_4cd2b8;
        case 0x4cd2c8u: goto label_4cd2c8;
        case 0x4cd310u: goto label_4cd310;
        case 0x4cd474u: goto label_4cd474;
        case 0x4cd5f4u: goto label_4cd5f4;
        case 0x4cd640u: goto label_4cd640;
        case 0x4cd764u: goto label_4cd764;
        case 0x4cd7b8u: goto label_4cd7b8;
        case 0x4cd7f0u: goto label_4cd7f0;
        case 0x4cd8d8u: goto label_4cd8d8;
        case 0x4cd928u: goto label_4cd928;
        case 0x4cd960u: goto label_4cd960;
        case 0x4cd9a4u: goto label_4cd9a4;
        case 0x4cd9dcu: goto label_4cd9dc;
        case 0x4cda54u: goto label_4cda54;
        case 0x4cda5cu: goto label_4cda5c;
        case 0x4cda64u: goto label_4cda64;
        case 0x4cdb34u: goto label_4cdb34;
        case 0x4cdb3cu: goto label_4cdb3c;
        case 0x4cdb44u: goto label_4cdb44;
        case 0x4cdb6cu: goto label_4cdb6c;
        case 0x4cdc70u: goto label_4cdc70;
        case 0x4cdca0u: goto label_4cdca0;
        case 0x4cdddcu: goto label_4cdddc;
        case 0x4cdeb0u: goto label_4cdeb0;
        case 0x4cdec8u: goto label_4cdec8;
        case 0x4cdf24u: goto label_4cdf24;
        case 0x4cdf4cu: goto label_4cdf4c;
        case 0x4cdfb8u: goto label_4cdfb8;
        case 0x4cdff4u: goto label_4cdff4;
        case 0x4ce030u: goto label_4ce030;
        case 0x4ce044u: goto label_4ce044;
        case 0x4ce058u: goto label_4ce058;
        case 0x4ce06cu: goto label_4ce06c;
        default: break;
    }

    ctx->pc = 0x4cd270u;

    // 0x4cd270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cd274:
    // 0x4cd274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cd278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd27c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD27Cu;
        // 0x4cd280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CD284u;
    // 0x4cd284: 0x0  nop
    ctx->pc = 0x4cd284u;
    // NOP
label_4cd288:
    // 0x4cd288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cd288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cd28c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cd28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cd290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cd290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cd294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cd294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd298: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4cd298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4cd29c: 0x24420f88  addiu       $v0, $v0, 0xF88
    ctx->pc = 0x4cd29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3976));
    // 0x4cd2a0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4cd2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd2a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4cd2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F88u));
    // 0x4cd2a8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4cd2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4cd2ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4cd2acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4cd2b0: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4CD2B0u;
    SET_GPR_U32(ctx, 31, 0x4CD2B8u);
    ctx->pc = 0x4CD2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD2B0u;
    // 0x4cd2b4: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4CD2B0u, 0x4CD2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD2B8u;
label_4cd2b8:
    // 0x4cd2b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CD2B8u;
    {
        const bool branch_taken_0x4cd2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD2B8u;
        // 0x4cd2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd2b8) {
            ctx->pc = 0x4CD300u;
            goto label_4cd300;
        }
    }
    ctx->pc = 0x4CD2C0u;
    // 0x4cd2c0: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4CD2C0u;
    SET_GPR_U32(ctx, 31, 0x4CD2C8u);
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4CD2C0u, 0x4CD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD2C8u;
label_4cd2c8:
    // 0x4cd2c8: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x4cd2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x4cd2cc: 0x24040494  addiu       $a0, $zero, 0x494
    ctx->pc = 0x4cd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1172));
    // 0x4cd2d0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4cd2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cd2d4: 0xa444015e  sh          $a0, 0x15E($v0)
    ctx->pc = 0x4cd2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 4));
    // 0x4cd2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cd2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd2dc: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4cd2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4cd2e0: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4cd2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4cd2e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cd2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd2e8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cd2e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cd2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd2f0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cd2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cd2f4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cd2f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd2f8: 0x81334c4  j           func_4CD310
    ctx->pc = 0x4CD2F8u;
    ctx->pc = 0x4CD2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD2F8u;
    // 0x4cd2fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD310u;
    goto label_4cd310;
    ctx->pc = 0x4CD300u;
label_4cd300:
    // 0x4cd300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd304: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cd304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd308: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD308u;
        // 0x4cd30c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CD310u;
label_4cd310:
    // 0x4cd310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cd310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4cd314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cd314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cd318: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4cd318u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd31c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cd31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cd320: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4cd320u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4cd324: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cd324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cd328: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x4cd328u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x4cd32c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cd32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cd330: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4cd330u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4cd334: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cd334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cd338: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4cd338u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd33c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cd33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4cd340: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4cd340u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4cd344: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cd344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4cd348: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4cd348u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4cd34c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4cd34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4cd350: 0x26b50f94  addiu       $s5, $s5, 0xF94
    ctx->pc = 0x4cd350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3988));
    // 0x4cd354: 0x26730f98  addiu       $s3, $s3, 0xF98
    ctx->pc = 0x4cd354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3992));
    // 0x4cd358: 0x26d60f9c  addiu       $s6, $s6, 0xF9C
    ctx->pc = 0x4cd358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3996));
    // 0x4cd35c: 0x86820012  lh          $v0, 0x12($s4)
    ctx->pc = 0x4cd35cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x4cd360: 0x26310fa8  addiu       $s1, $s1, 0xFA8
    ctx->pc = 0x4cd360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4008));
    // 0x4cd364: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4cd364u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F94u));
    // 0x4cd368: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4cd368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd36c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cd36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cd370: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4cd370u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0F98u));
    // 0x4cd374: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cd374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cd378: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4cd378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd37c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cd37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cd380: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4cd380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4cd384: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4cd384u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4cd388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cd388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cd38c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4cd38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd390: 0x2652d680  addiu       $s2, $s2, -0x2980
    ctx->pc = 0x4cd390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4cd394: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x4cd394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4cd398: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x4cd398u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cd39c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4cd39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4cd3a0: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4cd3a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cd3a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cd3a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cd3a8: 0x86ab0000  lh          $t3, 0x0($s5)
    ctx->pc = 0x4cd3a8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cd3ac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cd3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cd3b0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cd3b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cd3b4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4cd3b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4cd3b8: 0x258d000c  addiu       $t5, $t4, 0xC
    ctx->pc = 0x4cd3b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x4cd3bc: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4cd3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4cd3c0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4cd3c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4cd3c4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x4cd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x4cd3c8: 0x866a0000  lh          $t2, 0x0($s3)
    ctx->pc = 0x4cd3c8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cd3cc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4cd3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4cd3d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cd3d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cd3d4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cd3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cd3d8: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4cd3d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4cd3dc: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4cd3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
    // 0x4cd3e0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cd3e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cd3e4: 0x8d820050  lw          $v0, 0x50($t4)
    ctx->pc = 0x4cd3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x4cd3e8: 0x86c90000  lh          $t1, 0x0($s6)
    ctx->pc = 0x4cd3e8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cd3ec: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4cd3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4cd3f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cd3f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cd3f4: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4cd3f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4cd3f8: 0x1705825  or          $t3, $t3, $s0
    ctx->pc = 0x4cd3f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 16));
    // 0x4cd3fc: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x4cd3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x4cd400: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4cd400u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4cd404: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x4cd404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x4cd408: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4cd408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4cd40c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cd40cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cd410: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4cd410u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4cd414: 0x1505025  or          $t2, $t2, $s0
    ctx->pc = 0x4cd414u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 16));
    // 0x4cd418: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x4cd418u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x4cd41c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4cd41cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4cd420: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x4cd420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x4cd424: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4cd424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4cd428: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cd428u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cd42c: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4cd42cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4cd430: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x4cd430u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x4cd434: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4cd434u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4cd438: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4cd438u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
    // 0x4cd43c: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4cd43cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cd440: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4cd440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4cd444: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4cd444u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd448: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4cd448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cd44c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4cd44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4cd450: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cd450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cd454: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4cd454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4cd458: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cd458u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd45c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4cd45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cd460: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x4cd460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x4cd464: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4cd464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cd468: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4cd468u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4cd46c: 0xc12a878  jal         func_4AA1E0
    ctx->pc = 0x4CD46Cu;
    SET_GPR_U32(ctx, 31, 0x4CD474u);
    ctx->pc = 0x4CD470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD46Cu;
    // 0x4cd470: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA1E0u, 0x4CD46Cu, 0x4CD474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD474u;
label_4cd474:
    // 0x4cd474: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4cd474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cd478: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cd478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cd47c: 0x24c60f88  addiu       $a2, $a2, 0xF88
    ctx->pc = 0x4cd47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3976));
    // 0x4cd480: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4cd480u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4cd484: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x4cd484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x4cd488: 0x25290f90  addiu       $t1, $t1, 0xF90
    ctx->pc = 0x4cd488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3984));
    // 0x4cd48c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cd48cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cd490: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4cd490u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4cd494: 0x25080f8c  addiu       $t0, $t0, 0xF8C
    ctx->pc = 0x4cd494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3980));
    // 0x4cd498: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4cd498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd49c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4cd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4cd4a0: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x4cd4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x4cd4a4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cd4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd4a8: 0x264c2494  addiu       $t4, $s2, 0x2494
    ctx->pc = 0x4cd4a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 9364));
    // 0x4cd4ac: 0x264d2498  addiu       $t5, $s2, 0x2498
    ctx->pc = 0x4cd4acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 9368));
    // 0x4cd4b0: 0x264b249c  addiu       $t3, $s2, 0x249C
    ctx->pc = 0x4cd4b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 9372));
    // 0x4cd4b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4cd4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cd4b8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4cd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4cd4bc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4cd4bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cd4c0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4cd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4cd4c4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4cd4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd4c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4cd4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cd4cc: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x4cd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x4cd4d0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cd4d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cd4d4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4cd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4cd4d8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cd4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd4dc: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x4cd4dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cd4e0: 0xa6840130  sh          $a0, 0x130($s4)
    ctx->pc = 0x4cd4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 304), (uint16_t)GPR_U32(ctx, 4));
    // 0x4cd4e4: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4cd4e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cd4e8: 0xa6820132  sh          $v0, 0x132($s4)
    ctx->pc = 0x4cd4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd4ec: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4cd4ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cd4f0: 0xa6830134  sh          $v1, 0x134($s4)
    ctx->pc = 0x4cd4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 308), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cd4f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4cd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cd4f8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4cd4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cd4fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cd4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cd500: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4cd500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cd504: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4cd504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4cd508: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cd508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cd50c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4cd50cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4cd510: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4cd510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4cd514: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cd514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cd518: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4cd518u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cd51c: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x4cd51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x4cd520: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4cd520u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4cd524: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4cd524u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4cd528: 0xa685011a  sh          $a1, 0x11A($s4)
    ctx->pc = 0x4cd528u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 282), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cd52c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4cd52cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cd530: 0xa682011e  sh          $v0, 0x11E($s4)
    ctx->pc = 0x4cd530u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd534: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4cd534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cd538: 0xa6830122  sh          $v1, 0x122($s4)
    ctx->pc = 0x4cd538u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cd53c: 0x866a0000  lh          $t2, 0x0($s3)
    ctx->pc = 0x4cd53cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cd540: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4cd540u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cd544: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4cd544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cd548: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4cd548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cd54c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4cd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cd550: 0x8a2023  subu        $a0, $a0, $t2
    ctx->pc = 0x4cd550u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4cd554: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4cd554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cd558: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4cd558u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4cd55c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4cd55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4cd560: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4cd560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4cd564: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cd564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cd568: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cd568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cd56c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4cd56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4cd570: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4cd570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4cd574: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4cd574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4cd578: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4cd578u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4cd57c: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x4cd57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cd580: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4cd580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cd584: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4cd584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cd588: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4cd588u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4cd58c: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x4cd58cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cd590: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cd590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cd594: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cd594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cd598: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cd598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cd59c: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4cd59cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cd5a0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4cd5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4cd5a4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4cd5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4cd5a8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4cd5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4cd5ac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4cd5acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4cd5b0: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4cd5b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cd5b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cd5b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cd5b8: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4cd5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4cd5bc: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x4cd5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cd5c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cd5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cd5c4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4cd5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cd5c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cd5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cd5cc: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4cd5ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4cd5d0: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4cd5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4cd5d4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4cd5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4cd5d8: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4cd5d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4cd5dc: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4cd5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4cd5e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cd5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cd5e4: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4cd5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4cd5e8: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x4cd5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x4cd5ec: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4CD5ECu;
    SET_GPR_U32(ctx, 31, 0x4CD5F4u);
    ctx->pc = 0x4CD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD5ECu;
    // 0x4cd5f0: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4CD5ECu, 0x4CD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD5F4u;
label_4cd5f4:
    // 0x4cd5f4: 0x964224a0  lhu         $v0, 0x24A0($s2)
    ctx->pc = 0x4cd5f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 9376)));
    // 0x4cd5f8: 0x268501bc  addiu       $a1, $s4, 0x1BC
    ctx->pc = 0x4cd5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
    // 0x4cd5fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4cd5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd600: 0xa6820160  sh          $v0, 0x160($s4)
    ctx->pc = 0x4cd600u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd608: 0x964324a2  lhu         $v1, 0x24A2($s2)
    ctx->pc = 0x4cd608u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 9378)));
    // 0x4cd60c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd60cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd610: 0xa6830162  sh          $v1, 0x162($s4)
    ctx->pc = 0x4cd610u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cd614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cd614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd618: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4cd618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cd61c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cd61cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cd620: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cd620u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cd624: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cd624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cd628: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cd628u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cd62c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cd62cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cd630: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4cd630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cd634: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4cd634u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd638: 0x8133590  j           func_4CD640
    ctx->pc = 0x4CD638u;
    ctx->pc = 0x4CD63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD638u;
    // 0x4cd63c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD640u;
    goto label_4cd640;
    ctx->pc = 0x4CD640u;
label_4cd640:
    // 0x4cd640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cd640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4cd644: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4cd644u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4cd648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cd648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cd64c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4cd64cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4cd650: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cd650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cd654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cd654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cd658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4cd65c: 0x25ef0f94  addiu       $t7, $t7, 0xF94
    ctx->pc = 0x4cd65cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3988));
    // 0x4cd660: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x4cd660u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd664: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4cd664u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4cd668: 0x8622011a  lh          $v0, 0x11A($s1)
    ctx->pc = 0x4cd668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 282)));
    // 0x4cd66c: 0x25ce0f98  addiu       $t6, $t6, 0xF98
    ctx->pc = 0x4cd66cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3992));
    // 0x4cd670: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x4cd670u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F94u));
    // 0x4cd674: 0x26100f9c  addiu       $s0, $s0, 0xF9C
    ctx->pc = 0x4cd674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3996));
    // 0x4cd678: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4cd678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4cd67c: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4cd67cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0F98u));
    // 0x4cd680: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cd680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cd684: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4cd684u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4cd688: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cd688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cd68c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cd68cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cd690: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x4cd690u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
    // 0x4cd694: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cd694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cd698: 0x256b0f8c  addiu       $t3, $t3, 0xF8C
    ctx->pc = 0x4cd698u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3980));
    // 0x4cd69c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4cd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd6a0: 0x8622011e  lh          $v0, 0x11E($s1)
    ctx->pc = 0x4cd6a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 286)));
    // 0x4cd6a4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4cd6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x4cd6a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4cd6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cd6ac: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4cd6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4cd6b0: 0x85ea0000  lh          $t2, 0x0($t7)
    ctx->pc = 0x4cd6b0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4cd6b4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4cd6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4cd6b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cd6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cd6bc: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4cd6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4cd6c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cd6c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cd6c4: 0x86220122  lh          $v0, 0x122($s1)
    ctx->pc = 0x4cd6c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 290)));
    // 0x4cd6c8: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x4cd6c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cd6cc: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4cd6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4cd6d0: 0x85c90000  lh          $t1, 0x0($t6)
    ctx->pc = 0x4cd6d0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4cd6d4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cd6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cd6d8: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4cd6d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4cd6dc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4cd6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4cd6e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cd6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cd6e4: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x4cd6e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x4cd6e8: 0x86220130  lh          $v0, 0x130($s1)
    ctx->pc = 0x4cd6e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4cd6ec: 0x3588ffff  ori         $t0, $t4, 0xFFFF
    ctx->pc = 0x4cd6ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4cd6f0: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4cd6f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cd6f4: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4cd6f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4cd6f8: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x4cd6f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x4cd6fc: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4cd6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4cd700: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x4cd700u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
    // 0x4cd704: 0x86220132  lh          $v0, 0x132($s1)
    ctx->pc = 0x4cd704u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4cd708: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4cd708u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4cd70c: 0x12d4825  or          $t1, $t1, $t5
    ctx->pc = 0x4cd70cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 13));
    // 0x4cd710: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4cd710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4cd714: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4cd714u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4cd718: 0x86230134  lh          $v1, 0x134($s1)
    ctx->pc = 0x4cd718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4cd71c: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x4cd71cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x4cd720: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x4cd720u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4cd724: 0x81620001  lb          $v0, 0x1($t3)
    ctx->pc = 0x4cd724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x4cd728: 0xed3825  or          $a3, $a3, $t5
    ctx->pc = 0x4cd728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x4cd72c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4cd72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4cd730: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4cd730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4cd734: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4cd734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4cd738: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4cd738u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4cd73c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4cd73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd740: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4cd740u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4cd744: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cd744u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cd748: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4cd748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cd74c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4cd74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4cd750: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4cd750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4cd754: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4cd754u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4cd758: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4cd758u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4cd75c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4CD75Cu;
    SET_GPR_U32(ctx, 31, 0x4CD764u);
    ctx->pc = 0x4CD760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD75Cu;
    // 0x4cd760: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4CD75Cu, 0x4CD764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD764u;
label_4cd764:
    // 0x4cd764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cd764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd768: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CD768u;
    {
        const bool branch_taken_0x4cd768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD768u;
        // 0x4cd76c: 0x262301bc  addiu       $v1, $s1, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd768) {
            ctx->pc = 0x4CD788u;
            goto label_4cd788;
        }
    }
    ctx->pc = 0x4CD770u;
    // 0x4cd770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cd778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd77c: 0x8133658  j           func_4CD960
    ctx->pc = 0x4CD77Cu;
    ctx->pc = 0x4CD780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD77Cu;
    // 0x4cd780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD960u;
    goto label_4cd960;
    ctx->pc = 0x4CD784u;
    // 0x4cd784: 0x0  nop
    ctx->pc = 0x4cd784u;
    // NOP
label_4cd788:
    // 0x4cd788: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x4cd788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4cd78c: 0xa620015c  sh          $zero, 0x15C($s1)
    ctx->pc = 0x4cd78cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cd790: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4cd790u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cd794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd79c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cd79cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cd7a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd7a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cd7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd7a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cd7ac: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cd7acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd7b0: 0x8133658  j           func_4CD960
    ctx->pc = 0x4CD7B0u;
    ctx->pc = 0x4CD7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD7B0u;
    // 0x4cd7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD960u;
    goto label_4cd960;
    ctx->pc = 0x4CD7B8u;
label_4cd7b8:
    // 0x4cd7b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4cd7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd7bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cd7bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cd7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cd7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cd7c4: 0x244501bc  addiu       $a1, $v0, 0x1BC
    ctx->pc = 0x4cd7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4cd7c8: 0xa440015e  sh          $zero, 0x15E($v0)
    ctx->pc = 0x4cd7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cd7cc: 0xa4400164  sh          $zero, 0x164($v0)
    ctx->pc = 0x4cd7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cd7d0: 0xa4400166  sh          $zero, 0x166($v0)
    ctx->pc = 0x4cd7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cd7d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cd7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd7d8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4cd7d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cd7dc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4cd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4cd7e0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4cd7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cd7e4: 0x81335fc  j           func_4CD7F0
    ctx->pc = 0x4CD7E4u;
    ctx->pc = 0x4CD7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD7E4u;
    // 0x4cd7e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD7F0u;
    goto label_4cd7f0;
    ctx->pc = 0x4CD7ECu;
    // 0x4cd7ec: 0x0  nop
    ctx->pc = 0x4cd7ecu;
    // NOP
label_4cd7f0:
    // 0x4cd7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cd7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cd7f4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4cd7f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cd7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cd7fc: 0x252a015e  addiu       $t2, $t1, 0x15E
    ctx->pc = 0x4cd7fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 350));
    // 0x4cd800: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4cd800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4cd804: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4cd804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4cd808: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4cd808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4cd80c: 0x246d0f88  addiu       $t5, $v1, 0xF88
    ctx->pc = 0x4cd80cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 3976));
    // 0x4cd810: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4cd810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4cd814: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4cd814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4cd818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4cd818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4cd81c: 0x246c0fac  addiu       $t4, $v1, 0xFAC
    ctx->pc = 0x4cd81cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4012));
    // 0x4cd820: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4cd820u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd824: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cd824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cd828: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cd828u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cd82c: 0x24a572e8  addiu       $a1, $a1, 0x72E8
    ctx->pc = 0x4cd82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29416));
    // 0x4cd830: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4cd830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cd834: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4cd834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4cd838: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4cd838u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4cd83c: 0x25280166  addiu       $t0, $t1, 0x166
    ctx->pc = 0x4cd83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 358));
    // 0x4cd840: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cd840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cd844: 0x252b01bc  addiu       $t3, $t1, 0x1BC
    ctx->pc = 0x4cd844u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 444));
    // 0x4cd848: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cd848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cd84c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4cd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4cd850: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4cd850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cd854: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cd854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cd858: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cd858u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cd85c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cd860: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x4cd860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cd864: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4cd864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cd868: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x4cd868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4cd86c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4cd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4cd870: 0x4600011  bltz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CD870u;
    {
        const bool branch_taken_0x4cd870 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4CD874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD870u;
        // 0x4cd874: 0x94a60000  lhu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd870) {
            ctx->pc = 0x4CD8B8u;
            goto label_4cd8b8;
        }
    }
    ctx->pc = 0x4CD878u;
    // 0x4cd878: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4cd878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4cd87c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x4cd87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4cd880: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4cd880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4cd884: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CD884u;
    {
        const bool branch_taken_0x4cd884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD884u;
        // 0x4cd888: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd884) {
            ctx->pc = 0x4CD8A8u;
            goto label_4cd8a8;
        }
    }
    ctx->pc = 0x4CD88Cu;
    // 0x4cd88c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4cd88cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cd890: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x4cd890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4cd894: 0xa5220164  sh          $v0, 0x164($t1)
    ctx->pc = 0x4cd894u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd898: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4cd898u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4cd89c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4cd89cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cd8a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4cd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4cd8a4: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4cd8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_4cd8a8:
    // 0x4cd8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cd8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd8ac: 0x8133658  j           func_4CD960
    ctx->pc = 0x4CD8ACu;
    ctx->pc = 0x4CD8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD8ACu;
    // 0x4cd8b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD960u;
    goto label_4cd960;
    ctx->pc = 0x4CD8B4u;
    // 0x4cd8b4: 0x0  nop
    ctx->pc = 0x4cd8b4u;
    // NOP
label_4cd8b8:
    // 0x4cd8b8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4cd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4cd8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cd8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd8c0: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4cd8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cd8c4: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4cd8c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cd8c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cd8cc: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4cd8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd8d0: 0x8133658  j           func_4CD960
    ctx->pc = 0x4CD8D0u;
    ctx->pc = 0x4CD8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD8D0u;
    // 0x4cd8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD960u;
    goto label_4cd960;
    ctx->pc = 0x4CD8D8u;
label_4cd8d8:
    // 0x4cd8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cd8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cd8dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4cd8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cd8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cd8e4: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4cd8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4cd8e8: 0x2442015e  addiu       $v0, $v0, 0x15E
    ctx->pc = 0x4cd8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 350));
    // 0x4cd8ec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cd8ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cd8f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4cd8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4cd8f4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4cd8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cd8f8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CD8F8u;
    {
        const bool branch_taken_0x4cd8f8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4CD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD8F8u;
        // 0x4cd8fc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd8f8) {
            ctx->pc = 0x4CD910u;
            goto label_4cd910;
        }
    }
    ctx->pc = 0x4CD900u;
    // 0x4cd900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cd900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd904: 0x8133658  j           func_4CD960
    ctx->pc = 0x4CD904u;
    ctx->pc = 0x4CD908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD904u;
    // 0x4cd908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD960u;
    goto label_4cd960;
    ctx->pc = 0x4CD90Cu;
    // 0x4cd90c: 0x0  nop
    ctx->pc = 0x4cd90cu;
    // NOP
label_4cd910:
    // 0x4cd910: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4cd910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cd914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cd914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd918: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cd918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cd91c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4cd91cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd920: 0x8133658  j           func_4CD960
    ctx->pc = 0x4CD920u;
    ctx->pc = 0x4CD924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD920u;
    // 0x4cd924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD960u;
    goto label_4cd960;
    ctx->pc = 0x4CD928u;
label_4cd928:
    // 0x4cd928: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4cd928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd92c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cd92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cd930: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x4cd930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x4cd934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cd934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cd938: 0xa465015c  sh          $a1, 0x15C($v1)
    ctx->pc = 0x4cd938u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 348), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cd93c: 0x246601bc  addiu       $a2, $v1, 0x1BC
    ctx->pc = 0x4cd93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4cd940: 0xa465015a  sh          $a1, 0x15A($v1)
    ctx->pc = 0x4cd940u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 346), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cd944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cd944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd948: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4cd948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cd94c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cd94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cd950: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4cd950u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd954: 0x8133658  j           func_4CD960
    ctx->pc = 0x4CD954u;
    ctx->pc = 0x4CD958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD954u;
    // 0x4cd958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD960u;
    goto label_4cd960;
    ctx->pc = 0x4CD95Cu;
    // 0x4cd95c: 0x0  nop
    ctx->pc = 0x4cd95cu;
    // NOP
label_4cd960:
    // 0x4cd960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4cd960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4cd964: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4cd964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4cd968: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4cd968u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd96c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4cd96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4cd970: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4cd970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4cd974: 0x26d10132  addiu       $s1, $s6, 0x132
    ctx->pc = 0x4cd974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 306));
    // 0x4cd978: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4cd978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4cd97c: 0x26d20134  addiu       $s2, $s6, 0x134
    ctx->pc = 0x4cd97cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 308));
    // 0x4cd980: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4cd980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4cd984: 0x26d30130  addiu       $s3, $s6, 0x130
    ctx->pc = 0x4cd984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 304));
    // 0x4cd988: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4cd988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4cd98c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4cd98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4cd990: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4cd990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4cd994: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4cd994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4cd998: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4cd998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4cd99c: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4CD99Cu;
    SET_GPR_U32(ctx, 31, 0x4CD9A4u);
    ctx->pc = 0x4CD9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD99Cu;
    // 0x4cd9a0: 0x3c15ffff  lui         $s5, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4CD99Cu, 0x4CD9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD9A4u;
label_4cd9a4:
    // 0x4cd9a4: 0x96c30160  lhu         $v1, 0x160($s6)
    ctx->pc = 0x4cd9a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 352)));
    // 0x4cd9a8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4cd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4cd9ac: 0x2442fb20  addiu       $v0, $v0, -0x4E0
    ctx->pc = 0x4cd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966048));
    // 0x4cd9b0: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4cd9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4cd9b4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4cd9b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72FB20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB20u, _value); } while (0);
    // 0x4cd9b8: 0x26c30010  addiu       $v1, $s6, 0x10
    ctx->pc = 0x4cd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x4cd9bc: 0x26c50014  addiu       $a1, $s6, 0x14
    ctx->pc = 0x4cd9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x4cd9c0: 0x24c6fb22  addiu       $a2, $a2, -0x4DE
    ctx->pc = 0x4cd9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966050));
    // 0x4cd9c4: 0x96c20162  lhu         $v0, 0x162($s6)
    ctx->pc = 0x4cd9c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 354)));
    // 0x4cd9c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cd9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd9cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4cd9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4cd9d0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4cd9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4cd9d4: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4CD9D4u;
    SET_GPR_U32(ctx, 31, 0x4CD9DCu);
    ctx->pc = 0x4CD9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD9D4u;
    // 0x4cd9d8: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4CD9D4u, 0x4CD9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD9DCu;
label_4cd9dc:
    // 0x4cd9dc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cd9e0: 0x245e0f94  addiu       $fp, $v0, 0xF94
    ctx->pc = 0x4cd9e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 3988));
    // 0x4cd9e4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4cd9e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cd9e8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4cd9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F94u));
    // 0x4cd9ec: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4cd9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4cd9f0: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cd9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cd9f4: 0x24970f98  addiu       $s7, $a0, 0xF98
    ctx->pc = 0x4cd9f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 3992));
    // 0x4cd9f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cd9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cd9fc: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4cd9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F98u));
    // 0x4cda00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cda00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cda04: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cda04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cda08: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4cda08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4cda0c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cda0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cda10: 0x24d00f9c  addiu       $s0, $a2, 0xF9C
    ctx->pc = 0x4cda10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3996));
    // 0x4cda14: 0x26c60164  addiu       $a2, $s6, 0x164
    ctx->pc = 0x4cda14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 356));
    // 0x4cda18: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4cda18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cda1c: 0x26c70018  addiu       $a3, $s6, 0x18
    ctx->pc = 0x4cda1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x4cda20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cda20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F9Cu));
    // 0x4cda24: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4cda24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cda28: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cda28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cda2c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4cda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4cda30: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cda30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cda34: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x4cda34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x4cda38: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4cda38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4cda3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cda3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cda40: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4cda40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cda44: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cda44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cda48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cda48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cda4c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CDA4Cu;
    SET_GPR_U32(ctx, 31, 0x4CDA54u);
    ctx->pc = 0x4CDA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDA4Cu;
    // 0x4cda50: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CDA4Cu, 0x4CDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDA54u;
label_4cda54:
    // 0x4cda54: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CDA54u;
    SET_GPR_U32(ctx, 31, 0x4CDA5Cu);
    ctx->pc = 0x4CDA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDA54u;
    // 0x4cda58: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CDA54u, 0x4CDA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDA5Cu;
label_4cda5c:
    // 0x4cda5c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CDA5Cu;
    SET_GPR_U32(ctx, 31, 0x4CDA64u);
    ctx->pc = 0x4CDA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDA5Cu;
    // 0x4cda60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CDA5Cu, 0x4CDA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDA64u;
label_4cda64:
    // 0x4cda64: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4cda64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cda68: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4cda68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cda6c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4cda6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cda70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cda70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cda74: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4cda74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cda78: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cda78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cda7c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4cda7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cda80: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cda80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cda84: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cda84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cda88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cda88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cda8c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cda8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cda90: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4cda90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4cda94: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4cda94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cda98: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cda98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cda9c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cda9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdaa0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cdaa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cdaa4: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4cdaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4cdaa8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4cdaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cdaac: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cdaacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cdab0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cdab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdab4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4cdab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4cdab8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4cdab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4cdabc: 0x8ec20124  lw          $v0, 0x124($s6)
    ctx->pc = 0x4cdabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 292)));
    // 0x4cdac0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cdac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cdac4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4cdac4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4cdac8: 0x8ec20128  lw          $v0, 0x128($s6)
    ctx->pc = 0x4cdac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 296)));
    // 0x4cdacc: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4cdaccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cdad0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4cdad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4cdad4: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4cdad4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4cdad8: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cdad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cdadc: 0x8ec2012c  lw          $v0, 0x12C($s6)
    ctx->pc = 0x4cdadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
    // 0x4cdae0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cdae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cdae4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4cdae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4cdae8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4cdae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cdaec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cdaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cdaf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cdaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cdaf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cdaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cdaf8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4cdaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4cdafc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4cdafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cdb00: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4cdb00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cdb04: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cdb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cdb08: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cdb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdb0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cdb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cdb10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cdb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cdb14: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cdb14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cdb18: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4cdb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cdb1c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4cdb1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cdb20: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cdb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cdb24: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cdb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdb28: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cdb28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cdb2c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CDB2Cu;
    SET_GPR_U32(ctx, 31, 0x4CDB34u);
    ctx->pc = 0x4CDB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDB2Cu;
    // 0x4cdb30: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CDB2Cu, 0x4CDB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDB34u;
label_4cdb34:
    // 0x4cdb34: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CDB34u;
    SET_GPR_U32(ctx, 31, 0x4CDB3Cu);
    ctx->pc = 0x4CDB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDB34u;
    // 0x4cdb38: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CDB34u, 0x4CDB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDB3Cu;
label_4cdb3c:
    // 0x4cdb3c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CDB3Cu;
    SET_GPR_U32(ctx, 31, 0x4CDB44u);
    ctx->pc = 0x4CDB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDB3Cu;
    // 0x4cdb40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CDB3Cu, 0x4CDB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDB44u;
label_4cdb44:
    // 0x4cdb44: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4cdb44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cdb48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4cdb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdb4c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4cdb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdb50: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4cdb50u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cdb54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4cdb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdb58: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x4cdb58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cdb5c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4cdb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cdb60: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4cdb60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cdb64: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4CDB64u;
    SET_GPR_U32(ctx, 31, 0x4CDB6Cu);
    ctx->pc = 0x4CDB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDB64u;
    // 0x4cdb68: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4CDB64u, 0x4CDB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDB6Cu;
label_4cdb6c:
    // 0x4cdb6c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x4cdb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cdb70: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cdb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cdb74: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4cdb74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cdb78: 0x8c4c0fa8  lw          $t4, 0xFA8($v0)
    ctx->pc = 0x4cdb78u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x7F0FA8u));
    // 0x4cdb7c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cdb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cdb80: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cdb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cdb84: 0x86ea0000  lh          $t2, 0x0($s7)
    ctx->pc = 0x4cdb84u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cdb88: 0x8d820050  lw          $v0, 0x50($t4)
    ctx->pc = 0x4cdb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x4cdb8c: 0x24b40f88  addiu       $s4, $a1, 0xF88
    ctx->pc = 0x4cdb8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 3976));
    // 0x4cdb90: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4cdb90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cdb94: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4cdb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdb98: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4cdb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4cdb9c: 0x860b0000  lh          $t3, 0x0($s0)
    ctx->pc = 0x4cdb9cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cdba0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cdba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cdba4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4cdba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cdba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cdba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cdbac: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4cdbacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4cdbb0: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cdbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cdbb4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cdbb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cdbb8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4cdbb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4cdbbc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4cdbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdbc0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x4cdbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x4cdbc4: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4cdbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4cdbc8: 0x25080f8c  addiu       $t0, $t0, 0xF8C
    ctx->pc = 0x4cdbc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3980));
    // 0x4cdbcc: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x4cdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x4cdbd0: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x4cdbd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cdbd4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4cdbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4cdbd8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cdbd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cdbdc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cdbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cdbe0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x4cdbe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4cdbe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cdbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cdbe8: 0x1555025  or          $t2, $t2, $s5
    ctx->pc = 0x4cdbe8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 21));
    // 0x4cdbec: 0x12a4824  and         $t1, $t1, $t2
    ctx->pc = 0x4cdbecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x4cdbf0: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x4cdbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
    // 0x4cdbf4: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x4cdbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x4cdbf8: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4cdbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4cdbfc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cdbfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cdc00: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4cdc00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4cdc04: 0x1755825  or          $t3, $t3, $s5
    ctx->pc = 0x4cdc04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 21));
    // 0x4cdc08: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x4cdc08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x4cdc0c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4cdc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4cdc10: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4cdc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cdc14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cdc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cdc18: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cdc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdc1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cdc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cdc20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cdc20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cdc24: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4cdc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cdc28: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x4cdc28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cdc2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cdc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cdc30: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cdc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cdc34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cdc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cdc38: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cdc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdc3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cdc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cdc40: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4cdc40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4cdc44: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4cdc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cdc48: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4cdc48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cdc4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cdc50: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cdc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cdc54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cdc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cdc58: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cdc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdc5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cdc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cdc60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cdc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cdc64: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x4cdc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cdc68: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4CDC68u;
    SET_GPR_U32(ctx, 31, 0x4CDC70u);
    ctx->pc = 0x4CDC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDC68u;
    // 0x4cdc6c: 0x8ee50000  lw          $a1, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4CDC68u, 0x4CDC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDC70u;
label_4cdc70:
    // 0x4cdc70: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4cdc70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cdc74: 0x26c60120  addiu       $a2, $s6, 0x120
    ctx->pc = 0x4cdc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 288));
    // 0x4cdc78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cdc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdc7c: 0xa6c50118  sh          $a1, 0x118($s6)
    ctx->pc = 0x4cdc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 280), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cdc80: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cdc80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cdc84: 0x24a50f8c  addiu       $a1, $a1, 0xF8C
    ctx->pc = 0x4cdc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3980));
    // 0x4cdc88: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4cdc88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F0F8Cu));
    // 0x4cdc8c: 0xa6c3011c  sh          $v1, 0x11C($s6)
    ctx->pc = 0x4cdc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cdc90: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4cdc90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cdc94: 0x24420444  addiu       $v0, $v0, 0x444
    ctx->pc = 0x4cdc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1092));
    // 0x4cdc98: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4CDC98u;
    SET_GPR_U32(ctx, 31, 0x4CDCA0u);
    ctx->pc = 0x4CDC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDC98u;
    // 0x4cdc9c: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4CDC98u, 0x4CDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDCA0u;
label_4cdca0:
    // 0x4cdca0: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x4cdca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4cdca4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4cdca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cdca8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4CDCA8u;
    {
        const bool branch_taken_0x4cdca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cdca8) {
            ctx->pc = 0x4CDCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CDCA8u;
            // 0x4cdcac: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CDCE8u;
            goto label_4cdce8;
        }
    }
    ctx->pc = 0x4CDCB0u;
    // 0x4cdcb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cdcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdcb4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4cdcb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cdcb8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4cdcb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cdcbc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4cdcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cdcc0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4cdcc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cdcc4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4cdcc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cdcc8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4cdcc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cdccc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4cdcccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cdcd0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4cdcd0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4cdcd4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4cdcd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cdcd8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4cdcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4cdcdc: 0x813380c  j           func_4CE030
    ctx->pc = 0x4CDCDCu;
    ctx->pc = 0x4CDCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDCDCu;
    // 0x4cdce0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE030u;
    goto label_4ce030;
    ctx->pc = 0x4CDCE4u;
    // 0x4cdce4: 0x0  nop
    ctx->pc = 0x4cdce4u;
    // NOP
label_4cdce8:
    // 0x4cdce8: 0x3c0b0054  lui         $t3, 0x54
    ctx->pc = 0x4cdce8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)84 << 16));
    // 0x4cdcec: 0x24590fa0  addiu       $t9, $v0, 0xFA0
    ctx->pc = 0x4cdcecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
    // 0x4cdcf0: 0x256b72d0  addiu       $t3, $t3, 0x72D0
    ctx->pc = 0x4cdcf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 29392));
    // 0x4cdcf4: 0xaf2b0000  sw          $t3, 0x0($t9)
    ctx->pc = 0x4cdcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 11));
    // 0x4cdcf8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x4cdcf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdcfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4cdcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdd00: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x4cdd00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdd04: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x4cdd04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4cdd08: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x4cdd08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdd0c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4cdd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cdd10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cdd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdd14: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cdd14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cdd18: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cdd18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cdd1c: 0x24e70f90  addiu       $a3, $a3, 0xF90
    ctx->pc = 0x4cdd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3984));
    // 0x4cdd20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cdd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cdd24: 0x8fcf0000  lw          $t7, 0x0($fp)
    ctx->pc = 0x4cdd24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cdd28: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cdd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdd2c: 0x8eed0000  lw          $t5, 0x0($s7)
    ctx->pc = 0x4cdd2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cdd30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cdd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cdd34: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x4cdd34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cdd38: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cdd38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4cdd3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cdd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cdd40: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x4cdd40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x4cdd44: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x4cdd44u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x4cdd48: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4cdd48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cdd4c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x4cdd4cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x4cdd50: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cdd50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cdd54: 0x24c60f8c  addiu       $a2, $a2, 0xF8C
    ctx->pc = 0x4cdd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3980));
    // 0x4cdd58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4cdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4cdd5c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cdd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdd60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cdd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cdd64: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cdd64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4cdd68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cdd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cdd6c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4cdd6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cdd70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4cdd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4cdd74: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cdd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdd78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cdd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cdd7c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cdd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4cdd80: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4cdd80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cdd84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cdd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cdd88: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cdd88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cdd8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cdd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cdd90: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4cdd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4cdd94: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x4cdd94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cdd98: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x4cdd98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4cdd9c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4cdd9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cdda0: 0x24530006  addiu       $s3, $v0, 0x6
    ctx->pc = 0x4cdda0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4cdda4: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x4cdda4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cdda8: 0x844c0000  lh          $t4, 0x0($v0)
    ctx->pc = 0x4cdda8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cddac: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cddb0: 0x1755825  or          $t3, $t3, $s5
    ctx->pc = 0x4cddb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 21));
    // 0x4cddb4: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x4cddb4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x4cddb8: 0x1956025  or          $t4, $t4, $s5
    ctx->pc = 0x4cddb8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 21));
    // 0x4cddbc: 0x1cb7024  and         $t6, $t6, $t3
    ctx->pc = 0x4cddbcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x4cddc0: 0x1ec7824  and         $t7, $t7, $t4
    ctx->pc = 0x4cddc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 12));
    // 0x4cddc4: 0xaeed0000  sw          $t5, 0x0($s7)
    ctx->pc = 0x4cddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 13));
    // 0x4cddc8: 0xafcf0000  sw          $t7, 0x0($fp)
    ctx->pc = 0x4cddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 15));
    // 0x4cddcc: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x4cddccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x4cddd0: 0xaf330000  sw          $s3, 0x0($t9)
    ctx->pc = 0x4cddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 19));
    // 0x4cddd4: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4CDDD4u;
    SET_GPR_U32(ctx, 31, 0x4CDDDCu);
    ctx->pc = 0x4CDDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDDD4u;
    // 0x4cddd8: 0x7fb90010  sq          $t9, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4CDDD4u, 0x4CDDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDDDCu;
label_4cdddc:
    // 0x4cdddc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x4cdddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cdde0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4cdde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cdde4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cdde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cdde8: 0x86e60000  lh          $a2, 0x0($s7)
    ctx->pc = 0x4cdde8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cddec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4cddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cddf0: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4cddf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cddf4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4cddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4cddf8: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4cddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cddfc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cddfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cde00: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4cde00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cde04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cde04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cde08: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cde08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cde0c: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cde0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cde10: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4cde10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4cde14: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x4cde14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x4cde18: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4cde18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cde1c: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x4cde1cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cde20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cde24: 0x8f280000  lw          $t0, 0x0($t9)
    ctx->pc = 0x4cde24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4cde28: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4cde28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4cde2c: 0x97c90000  lhu         $t1, 0x0($fp)
    ctx->pc = 0x4cde2cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cde30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cde30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cde34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cde34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cde38: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cde38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cde3c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4cde3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cde40: 0xd53025  or          $a2, $a2, $s5
    ctx->pc = 0x4cde40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    // 0x4cde44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cde44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cde48: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4cde48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4cde4c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4cde4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4cde50: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4cde50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4cde54: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4cde54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4cde58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cde58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cde5c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4cde5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cde60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cde60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cde64: 0x96e50000  lhu         $a1, 0x0($s7)
    ctx->pc = 0x4cde64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cde68: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4cde68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4cde6c: 0xa4c92334  sh          $t1, 0x2334($a2)
    ctx->pc = 0x4cde6cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9012), (uint16_t)GPR_U32(ctx, 9));
    // 0x4cde70: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cde70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cde74: 0xa4c52336  sh          $a1, 0x2336($a2)
    ctx->pc = 0x4cde74u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9014), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cde78: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4cde78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4cde7c: 0xf53825  or          $a3, $a3, $s5
    ctx->pc = 0x4cde7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x4cde80: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4cde80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4cde84: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cde84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cde88: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4cde88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cde8c: 0xa4c22338  sh          $v0, 0x2338($a2)
    ctx->pc = 0x4cde8cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cde90: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4cde90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cde94: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4cde94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4cde98: 0xaf280000  sw          $t0, 0x0($t9)
    ctx->pc = 0x4cde98u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 8));
    // 0x4cde9c: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cde9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cdea0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4cdea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4cdea4: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4cdea4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4cdea8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CDEA8u;
    SET_GPR_U32(ctx, 31, 0x4CDEB0u);
    ctx->pc = 0x4CDEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDEA8u;
    // 0x4cdeac: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CDEA8u, 0x4CDEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDEB0u;
label_4cdeb0:
    // 0x4cdeb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4cdeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdeb4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cdeb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cdeb8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4cdeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4cdebc: 0x24e70f8c  addiu       $a3, $a3, 0xF8C
    ctx->pc = 0x4cdebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3980));
    // 0x4cdec0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CDEC0u;
    SET_GPR_U32(ctx, 31, 0x4CDEC8u);
    ctx->pc = 0x4CDEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDEC0u;
    // 0x4cdec4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CDEC0u, 0x4CDEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDEC8u;
label_4cdec8:
    // 0x4cdec8: 0x8fca0000  lw          $t2, 0x0($fp)
    ctx->pc = 0x4cdec8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cdecc: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4cdeccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cded0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cded0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cded4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x4cded4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cded8: 0x34421777  ori         $v0, $v0, 0x1777
    ctx->pc = 0x4cded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6007);
    // 0x4cdedc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4cdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4cdee0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4cdee0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4cdee4: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x4cdee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x4cdee8: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4cdee8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4cdeec: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4cdeecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4cdef0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cdef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cdef4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cdef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cdef8: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4cdef8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4cdefc: 0x24420f8c  addiu       $v0, $v0, 0xF8C
    ctx->pc = 0x4cdefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3980));
    // 0x4cdf00: 0x1555024  and         $t2, $t2, $s5
    ctx->pc = 0x4cdf00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 21));
    // 0x4cdf04: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4cdf04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cdf08: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4cdf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdf0c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4cdf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cdf10: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4cdf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdf14: 0xafca0000  sw          $t2, 0x0($fp)
    ctx->pc = 0x4cdf14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
    // 0x4cdf18: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x4cdf18u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
    // 0x4cdf1c: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4CDF1Cu;
    SET_GPR_U32(ctx, 31, 0x4CDF24u);
    ctx->pc = 0x4CDF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDF1Cu;
    // 0x4cdf20: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4CDF1Cu, 0x4CDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDF24u;
label_4cdf24:
    // 0x4cdf24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cdf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdf28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4cdf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdf2c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x4cdf2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdf30: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x4cdf30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdf34: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cdf34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cdf38: 0x24c60f8c  addiu       $a2, $a2, 0xF8C
    ctx->pc = 0x4cdf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3980));
    // 0x4cdf3c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cdf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cdf40: 0x24e70f90  addiu       $a3, $a3, 0xF90
    ctx->pc = 0x4cdf40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3984));
    // 0x4cdf44: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4CDF44u;
    SET_GPR_U32(ctx, 31, 0x4CDF4Cu);
    ctx->pc = 0x4CDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDF44u;
    // 0x4cdf48: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4CDF44u, 0x4CDF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDF4Cu;
label_4cdf4c:
    // 0x4cdf4c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4cdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4cdf50: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4cdf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4cdf54: 0x97c70000  lhu         $a3, 0x0($fp)
    ctx->pc = 0x4cdf54u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cdf58: 0x246a2494  addiu       $t2, $v1, 0x2494
    ctx->pc = 0x4cdf58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 9364));
    // 0x4cdf5c: 0x96e60000  lhu         $a2, 0x0($s7)
    ctx->pc = 0x4cdf5cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cdf60: 0x2468249c  addiu       $t0, $v1, 0x249C
    ctx->pc = 0x4cdf60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 9372));
    // 0x4cdf64: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4cdf64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cdf68: 0x24692498  addiu       $t1, $v1, 0x2498
    ctx->pc = 0x4cdf68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 9368));
    // 0x4cdf6c: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4cdf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72FB14u));
    // 0x4cdf70: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4cdf70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72FB18u));
    // 0x4cdf74: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4cdf74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4cdf78: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4cdf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cdf7c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4cdf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4cdf80: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4cdf80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4cdf84: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4cdf84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4cdf88: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cdf88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cdf8c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cdf8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cdf90: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x4cdf90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x4cdf94: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cdf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cdf98: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cdf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cdf9c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4cdf9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4cdfa0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4cdfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4cdfa4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4cdfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4cdfa8: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4cdfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4cdfac: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4cdfacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4cdfb0: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4CDFB0u;
    SET_GPR_U32(ctx, 31, 0x4CDFB8u);
    ctx->pc = 0x4CDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDFB0u;
    // 0x4cdfb4: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4CDFB0u, 0x4CDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDFB8u;
label_4cdfb8:
    // 0x4cdfb8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4cdfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4cdfbc: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4cdfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4cdfc0: 0x2484fb20  addiu       $a0, $a0, -0x4E0
    ctx->pc = 0x4cdfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966048));
    // 0x4cdfc4: 0x24c6fb22  addiu       $a2, $a2, -0x4DE
    ctx->pc = 0x4cdfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966050));
    // 0x4cdfc8: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x4cdfc8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x72FB20u));
    // 0x4cdfcc: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4cdfccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72FB22u));
    // 0x4cdfd0: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4cdfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4cdfd4: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x4cdfd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4cdfd8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4cdfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4cdfdc: 0xa4e22330  sh          $v0, 0x2330($a3)
    ctx->pc = 0x4cdfdcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4cdfe0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cdfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdfe4: 0xa4e5233a  sh          $a1, 0x233A($a3)
    ctx->pc = 0x4cdfe4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9BAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BAu, _value); } while (0);
    // 0x4cdfe8: 0xa4e3233c  sh          $v1, 0x233C($a3)
    ctx->pc = 0x4cdfe8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9BCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BCu, _value); } while (0);
    // 0x4cdfec: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4CDFECu;
    SET_GPR_U32(ctx, 31, 0x4CDFF4u);
    ctx->pc = 0x4CDFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CDFECu;
    // 0x4cdff0: 0xa4e0233e  sh          $zero, 0x233E($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4CDFECu, 0x4CDFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CDFF4u;
label_4cdff4:
    // 0x4cdff4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cdff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cdff8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4cdff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4cdffc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4cdffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ce000: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4ce000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ce004: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4ce004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ce008: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4ce008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ce00c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4ce00cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ce010: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4ce010u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ce014: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4ce014u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ce018: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4ce018u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4ce01c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4ce01cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ce020: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4ce020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ce024: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x4ce024u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ce028: 0x813380c  j           func_4CE030
    ctx->pc = 0x4CE028u;
    ctx->pc = 0x4CE02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE028u;
    // 0x4ce02c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE030u;
    goto label_4ce030;
    ctx->pc = 0x4CE030u;
label_4ce030:
    // 0x4ce030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ce030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ce034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ce034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ce038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ce038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ce03c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4CE03Cu;
    SET_GPR_U32(ctx, 31, 0x4CE044u);
    ctx->pc = 0x4CE040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE03Cu;
    // 0x4ce040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4CE03Cu, 0x4CE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE044u;
label_4ce044:
    // 0x4ce044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ce044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce048: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CE048u;
    {
        const bool branch_taken_0x4ce048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE048u;
        // 0x4ce04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce048) {
            ctx->pc = 0x4CE06Cu;
            goto label_4ce06c;
        }
    }
    ctx->pc = 0x4CE050u;
    // 0x4ce050: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4CE050u;
    SET_GPR_U32(ctx, 31, 0x4CE058u);
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4CE050u, 0x4CE058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE058u;
label_4ce058:
    // 0x4ce058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ce058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ce05c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CE05Cu;
    {
        const bool branch_taken_0x4ce05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4CE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE05Cu;
        // 0x4ce060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce05c) {
            ctx->pc = 0x4CE06Cu;
            goto label_4ce06c;
        }
    }
    ctx->pc = 0x4CE064u;
    // 0x4ce064: 0xc133820  jal         func_4CE080
    ctx->pc = 0x4CE064u;
    SET_GPR_U32(ctx, 31, 0x4CE06Cu);
    ctx->pc = 0x4CE080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE080u, 0x4CE064u, 0x4CE06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE06Cu;
label_4ce06c:
    // 0x4ce06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ce06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ce070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ce074: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE074u;
        // 0x4ce078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE07Cu;
    // 0x4ce07c: 0x0  nop
    ctx->pc = 0x4ce07cu;
    // NOP
    ctx->pc = 0x4ce080u;
}
