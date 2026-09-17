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

// Function: sub_00358188
// Address: 0x358188 - 0x358290
void sub_00358188_0x358188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358188_0x358188");
#endif

    switch (ctx->pc) {
        case 0x3581e0u: goto label_3581e0;
        case 0x3581f0u: goto label_3581f0;
        default: break;
    }

    ctx->pc = 0x358188u;

    // 0x358188: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x358188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35818c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x35818cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x358190: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x358190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x358194: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x358194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35819c: 0x48c03  sra         $s1, $a0, 16
    ctx->pc = 0x35819cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3581a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3581a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3581a4: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x3581a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3581a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3581a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3581ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3581acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3581b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3581b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3581b4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x3581b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3581b8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3581b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3581bc: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3581bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3581c0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3581c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3581c4: 0x2456e780  addiu       $s6, $v0, -0x1880
    ctx->pc = 0x3581c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
    // 0x3581c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3581c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3581cc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3581ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3581d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3581d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3581d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3581d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3581d8: 0xa6400006  sh          $zero, 0x6($s2)
    ctx->pc = 0x3581d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x3581dc: 0x0  nop
    ctx->pc = 0x3581dcu;
    // NOP
label_3581e0:
    // 0x3581e0: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x3581e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x3581e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3581e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3581e8: 0xc0d60da  jal         func_358368
    ctx->pc = 0x3581E8u;
    SET_GPR_U32(ctx, 31, 0x3581F0u);
    ctx->pc = 0x3581ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581E8u;
    // 0x3581ec: 0x568021  addu        $s0, $v0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358368u, 0x3581E8u, 0x3581F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581F0u;
label_3581f0:
    // 0x3581f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3581F0u;
    {
        const bool branch_taken_0x3581f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3581f0) {
            ctx->pc = 0x3581F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3581F0u;
            // 0x3581f4: 0x8602000a  lh          $v0, 0xA($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358208u;
            goto label_358208;
        }
    }
    ctx->pc = 0x3581F8u;
    // 0x3581f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3581f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3581fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3581FCu;
    {
        const bool branch_taken_0x3581fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581FCu;
        // 0x358200: 0x34420007  ori         $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3581fc) {
            ctx->pc = 0x358264u;
            goto label_358264;
        }
    }
    ctx->pc = 0x358204u;
    // 0x358204: 0x0  nop
    ctx->pc = 0x358204u;
    // NOP
label_358208:
    // 0x358208: 0x5055000c  beql        $v0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x358208u;
    {
        const bool branch_taken_0x358208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x358208) {
            ctx->pc = 0x35820Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358208u;
            // 0x35820c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35823Cu;
            goto label_35823c;
        }
    }
    ctx->pc = 0x358210u;
    // 0x358210: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x358210u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x358214: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x358214u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x358218: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x358218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x35821c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35821cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x358220: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x358220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x358224: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x358224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x358228: 0xa0510020  sb          $s1, 0x20($v0)
    ctx->pc = 0x358228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 17));
    // 0x35822c: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x35822cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x358230: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358234: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x358234u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x358238: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x358238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35823c:
    // 0x35823c: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x35823cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x358240: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x358240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358244: 0x84510004  lh          $s1, 0x4($v0)
    ctx->pc = 0x358244u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x358248: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x358248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x35824c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x35824cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x358250: 0x621ffe3  bgez        $s1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x358250u;
    {
        const bool branch_taken_0x358250 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x358254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358250u;
        // 0x358254: 0x2474ffc0  addiu       $s4, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358250) {
            ctx->pc = 0x3581E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3581e0;
        }
    }
    ctx->pc = 0x358258u;
    // 0x358258: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x358258u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x35825c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35825cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358260: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x358260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_358264:
    // 0x358264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358268: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x358268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35826c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35826cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358270: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x358270u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358274: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x358274u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358278: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x358278u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35827c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x35827cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358280: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x358280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x358284: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x358284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x358288: 0x3e00008  jr          $ra
    ctx->pc = 0x358288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358288u;
        // 0x35828c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358290u;
}
