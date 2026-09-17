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

// Function: sub_001F51B0
// Address: 0x1f51b0 - 0x1f53a0
void sub_001F51B0_0x1f51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F51B0_0x1f51b0");
#endif

    switch (ctx->pc) {
        case 0x1f51fcu: goto label_1f51fc;
        case 0x1f5254u: goto label_1f5254;
        case 0x1f5268u: goto label_1f5268;
        case 0x1f5358u: goto label_1f5358;
        case 0x1f5364u: goto label_1f5364;
        default: break;
    }

    ctx->pc = 0x1f51b0u;

    // 0x1f51b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f51b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f51b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f51b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f51bc: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f51c0: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x1f51c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x1f51c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f51c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f51c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f51c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f51cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f51d0: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1f51d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1f51d4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f51d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1f51d8: 0x8cc28880  lw          $v0, -0x7780($a2)
    ctx->pc = 0x1f51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8880u));
    // 0x1f51dc: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x1f51dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f51e0: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x1f51e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f51e4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1f51e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f51e8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1f51e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f51ec: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F51ECu;
    {
        const bool branch_taken_0x1f51ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51ECu;
        // 0x1f51f0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51ec) {
            ctx->pc = 0x1F5200u;
            goto label_1f5200;
        }
    }
    ctx->pc = 0x1F51F4u;
    // 0x1f51f4: 0xc083606  jal         func_20D818
    ctx->pc = 0x1F51F4u;
    SET_GPR_U32(ctx, 31, 0x1F51FCu);
    ctx->pc = 0x20D818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D818u, 0x1F51F4u, 0x1F51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F51FCu;
label_1f51fc:
    // 0x1f51fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f51fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5200:
    // 0x1f5200: 0x908201f6  lbu         $v0, 0x1F6($a0)
    ctx->pc = 0x1f5200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 502)));
    // 0x1f5204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5204u;
    {
        const bool branch_taken_0x1f5204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5204u;
        // 0x1f5208: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5204) {
            ctx->pc = 0x1F5218u;
            goto label_1f5218;
        }
    }
    ctx->pc = 0x1F520Cu;
    // 0x1f520c: 0x904301f6  lbu         $v1, 0x1F6($v0)
    ctx->pc = 0x1f520cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 502)));
    // 0x1f5210: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1F5210u;
    {
        const bool branch_taken_0x1f5210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5210u;
        // 0x1f5214: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5210) {
            ctx->pc = 0x1F5334u;
            goto label_1f5334;
        }
    }
    ctx->pc = 0x1F5218u;
label_1f5218:
    // 0x1f5218: 0x908201bb  lbu         $v0, 0x1BB($a0)
    ctx->pc = 0x1f5218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 443)));
    // 0x1f521c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F521Cu;
    {
        const bool branch_taken_0x1f521c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F521Cu;
        // 0x1f5220: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f521c) {
            ctx->pc = 0x1F5234u;
            goto label_1f5234;
        }
    }
    ctx->pc = 0x1F5224u;
    // 0x1f5224: 0x84830180  lh          $v1, 0x180($a0)
    ctx->pc = 0x1f5224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x1f5228: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f5228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f522c: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1F522Cu;
    {
        const bool branch_taken_0x1f522c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F522Cu;
        // 0x1f5230: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f522c) {
            ctx->pc = 0x1F5334u;
            goto label_1f5334;
        }
    }
    ctx->pc = 0x1F5234u;
label_1f5234:
    // 0x1f5234: 0x90a201bb  lbu         $v0, 0x1BB($a1)
    ctx->pc = 0x1f5234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 443)));
    // 0x1f5238: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5238u;
    {
        const bool branch_taken_0x1f5238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5238u;
        // 0x1f523c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5238) {
            ctx->pc = 0x1F524Cu;
            goto label_1f524c;
        }
    }
    ctx->pc = 0x1F5240u;
    // 0x1f5240: 0x84a30180  lh          $v1, 0x180($a1)
    ctx->pc = 0x1f5240u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x1f5244: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1F5244u;
    {
        const bool branch_taken_0x1f5244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5244u;
        // 0x1f5248: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5244) {
            ctx->pc = 0x1F5334u;
            goto label_1f5334;
        }
    }
    ctx->pc = 0x1F524Cu;
label_1f524c:
    // 0x1f524c: 0xc0832e0  jal         func_20CB80
    ctx->pc = 0x1F524Cu;
    SET_GPR_U32(ctx, 31, 0x1F5254u);
    ctx->pc = 0x20CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB80u, 0x1F524Cu, 0x1F5254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5254u;
label_1f5254:
    // 0x1f5254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5258: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f5258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f525c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f525cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5260: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1f5260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f5264: 0x0  nop
    ctx->pc = 0x1f5264u;
    // NOP
label_1f5268:
    // 0x1f5268: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f5268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f526c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1f526cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f5270: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f5270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5274: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f5274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f5278: 0xc4600690  lwc1        $f0, 0x690($v1)
    ctx->pc = 0x1f5278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f527c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1f527cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5280: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5280u;
    {
        const bool branch_taken_0x1f5280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5280u;
        // 0x1f5284: 0x28a60002  slti        $a2, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5280) {
            ctx->pc = 0x1F52A8u;
            goto label_1f52a8;
        }
    }
    ctx->pc = 0x1F5288u;
    // 0x1f5288: 0xc4600694  lwc1        $f0, 0x694($v1)
    ctx->pc = 0x1f5288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f528c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1f528cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5290: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5290u;
    {
        const bool branch_taken_0x1f5290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5290) {
            ctx->pc = 0x1F5294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5290u;
            // 0x1f5294: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F52ACu;
            goto label_1f52ac;
        }
    }
    ctx->pc = 0x1F5298u;
    // 0x1f5298: 0xc4600698  lwc1        $f0, 0x698($v1)
    ctx->pc = 0x1f5298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f529c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1f529cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f52a0: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x1F52A0u;
    {
        const bool branch_taken_0x1f52a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f52a0) {
            ctx->pc = 0x1F5328u;
            goto label_1f5328;
        }
    }
    ctx->pc = 0x1F52A8u;
label_1f52a8:
    // 0x1f52a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f52ac:
    // 0x1f52ac: 0xa04701f4  sb          $a3, 0x1F4($v0)
    ctx->pc = 0x1f52acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 500), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f52b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f52b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f52b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f52b8: 0xc4610690  lwc1        $f1, 0x690($v1)
    ctx->pc = 0x1f52b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f52bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f52bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f52c0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1f52c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1f52c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f52c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1f52c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f52cc: 0xc4410694  lwc1        $f1, 0x694($v0)
    ctx->pc = 0x1f52ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f52d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f52d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f52d4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1f52d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1f52d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f52d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f52dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f52dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f52e0: 0xc4610698  lwc1        $f1, 0x698($v1)
    ctx->pc = 0x1f52e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f52e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f52e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f52e8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1f52e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f52ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f52f0: 0xc4400750  lwc1        $f0, 0x750($v0)
    ctx->pc = 0x1f52f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f52f4: 0xc4410690  lwc1        $f1, 0x690($v0)
    ctx->pc = 0x1f52f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f52f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f52f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f52fc: 0xe4400750  swc1        $f0, 0x750($v0)
    ctx->pc = 0x1f52fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1872), bits); }
    // 0x1f5300: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f5300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5304: 0xc4600754  lwc1        $f0, 0x754($v1)
    ctx->pc = 0x1f5304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5308: 0xc4610694  lwc1        $f1, 0x694($v1)
    ctx->pc = 0x1f5308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f530c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f530cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f5310: 0xe4600754  swc1        $f0, 0x754($v1)
    ctx->pc = 0x1f5310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1876), bits); }
    // 0x1f5314: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f5314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5318: 0xc4400758  lwc1        $f0, 0x758($v0)
    ctx->pc = 0x1f5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f531c: 0xc4410698  lwc1        $f1, 0x698($v0)
    ctx->pc = 0x1f531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5320: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f5320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f5324: 0xe4400758  swc1        $f0, 0x758($v0)
    ctx->pc = 0x1f5324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1880), bits); }
label_1f5328:
    // 0x1f5328: 0x14c0ffcf  bnez        $a2, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1F5328u;
    {
        const bool branch_taken_0x1f5328 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5328u;
        // 0x1f532c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5328) {
            ctx->pc = 0x1F5268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5268;
        }
    }
    ctx->pc = 0x1F5330u;
    // 0x1f5330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f5330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5334:
    // 0x1f5334: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5334u;
        // 0x1f5338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F533Cu;
    // 0x1f533c: 0x0  nop
    ctx->pc = 0x1f533cu;
    // NOP
    // 0x1f5340: 0x90820187  lbu         $v0, 0x187($a0)
    ctx->pc = 0x1f5340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 391)));
    // 0x1f5344: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5344u;
    {
        const bool branch_taken_0x1f5344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5344u;
        // 0x1f5348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5344) {
            ctx->pc = 0x1F5360u;
            goto label_1f5360;
        }
    }
    ctx->pc = 0x1F534Cu;
    // 0x1f534c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F534Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F534Cu;
        // 0x1f5350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F534Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5354u;
    // 0x1f5354: 0x0  nop
    ctx->pc = 0x1f5354u;
    // NOP
label_1f5358:
    // 0x1f5358: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5358u;
        // 0x1f535c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5360u;
label_1f5360:
    // 0x1f5360: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1f5360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f5364:
    // 0x1f5364: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f5364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f5368: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f5368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f536c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f536cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f5370: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f5370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f5374: 0x24420520  addiu       $v0, $v0, 0x520
    ctx->pc = 0x1f5374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1312));
    // 0x1f5378: 0x90430044  lbu         $v1, 0x44($v0)
    ctx->pc = 0x1f5378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1f537c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F537Cu;
    {
        const bool branch_taken_0x1f537c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F537Cu;
        // 0x1f5380: 0x28c70002  slti        $a3, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f537c) {
            ctx->pc = 0x1F5390u;
            goto label_1f5390;
        }
    }
    ctx->pc = 0x1F5384u;
    // 0x1f5384: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x1f5384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1f5388: 0x1045fff3  beq         $v0, $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F5388u;
    {
        const bool branch_taken_0x1f5388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f5388) {
            ctx->pc = 0x1F5358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5358;
        }
    }
    ctx->pc = 0x1F5390u;
label_1f5390:
    // 0x1f5390: 0x54e0fff4  bnel        $a3, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F5390u;
    {
        const bool branch_taken_0x1f5390 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5390) {
            ctx->pc = 0x1F5394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5390u;
            // 0x1f5394: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5364;
        }
    }
    ctx->pc = 0x1F5398u;
    // 0x1f5398: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5398u;
        // 0x1f539c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F53A0u;
}
