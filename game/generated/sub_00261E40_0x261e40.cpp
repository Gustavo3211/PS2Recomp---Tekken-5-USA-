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

// Function: sub_00261E40
// Address: 0x261e40 - 0x261fd8
void sub_00261E40_0x261e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261E40_0x261e40");
#endif

    switch (ctx->pc) {
        case 0x261e40u: goto label_261e40;
        case 0x261e44u: goto label_261e44;
        case 0x261e48u: goto label_261e48;
        case 0x261e4cu: goto label_261e4c;
        case 0x261e50u: goto label_261e50;
        case 0x261e54u: goto label_261e54;
        case 0x261e58u: goto label_261e58;
        case 0x261e5cu: goto label_261e5c;
        case 0x261e60u: goto label_261e60;
        case 0x261e64u: goto label_261e64;
        case 0x261e68u: goto label_261e68;
        case 0x261e6cu: goto label_261e6c;
        case 0x261e70u: goto label_261e70;
        case 0x261e74u: goto label_261e74;
        case 0x261e78u: goto label_261e78;
        case 0x261e7cu: goto label_261e7c;
        case 0x261e80u: goto label_261e80;
        case 0x261e84u: goto label_261e84;
        case 0x261e88u: goto label_261e88;
        case 0x261e8cu: goto label_261e8c;
        case 0x261e90u: goto label_261e90;
        case 0x261e94u: goto label_261e94;
        case 0x261e98u: goto label_261e98;
        case 0x261e9cu: goto label_261e9c;
        case 0x261ea0u: goto label_261ea0;
        case 0x261ea4u: goto label_261ea4;
        case 0x261ea8u: goto label_261ea8;
        case 0x261eacu: goto label_261eac;
        case 0x261eb0u: goto label_261eb0;
        case 0x261eb4u: goto label_261eb4;
        case 0x261eb8u: goto label_261eb8;
        case 0x261ebcu: goto label_261ebc;
        case 0x261ec0u: goto label_261ec0;
        case 0x261ec4u: goto label_261ec4;
        case 0x261ec8u: goto label_261ec8;
        case 0x261eccu: goto label_261ecc;
        case 0x261ed0u: goto label_261ed0;
        case 0x261ed4u: goto label_261ed4;
        case 0x261ed8u: goto label_261ed8;
        case 0x261edcu: goto label_261edc;
        case 0x261ee0u: goto label_261ee0;
        case 0x261ee4u: goto label_261ee4;
        case 0x261ee8u: goto label_261ee8;
        case 0x261eecu: goto label_261eec;
        case 0x261ef0u: goto label_261ef0;
        case 0x261ef4u: goto label_261ef4;
        case 0x261ef8u: goto label_261ef8;
        case 0x261efcu: goto label_261efc;
        case 0x261f00u: goto label_261f00;
        case 0x261f04u: goto label_261f04;
        case 0x261f08u: goto label_261f08;
        case 0x261f0cu: goto label_261f0c;
        case 0x261f10u: goto label_261f10;
        case 0x261f14u: goto label_261f14;
        case 0x261f18u: goto label_261f18;
        case 0x261f1cu: goto label_261f1c;
        case 0x261f20u: goto label_261f20;
        case 0x261f24u: goto label_261f24;
        case 0x261f28u: goto label_261f28;
        case 0x261f2cu: goto label_261f2c;
        case 0x261f30u: goto label_261f30;
        case 0x261f34u: goto label_261f34;
        case 0x261f38u: goto label_261f38;
        case 0x261f3cu: goto label_261f3c;
        case 0x261f40u: goto label_261f40;
        case 0x261f44u: goto label_261f44;
        case 0x261f48u: goto label_261f48;
        case 0x261f4cu: goto label_261f4c;
        case 0x261f50u: goto label_261f50;
        case 0x261f54u: goto label_261f54;
        case 0x261f58u: goto label_261f58;
        case 0x261f5cu: goto label_261f5c;
        case 0x261f60u: goto label_261f60;
        case 0x261f64u: goto label_261f64;
        case 0x261f68u: goto label_261f68;
        case 0x261f6cu: goto label_261f6c;
        case 0x261f70u: goto label_261f70;
        case 0x261f74u: goto label_261f74;
        case 0x261f78u: goto label_261f78;
        case 0x261f7cu: goto label_261f7c;
        case 0x261f80u: goto label_261f80;
        case 0x261f84u: goto label_261f84;
        case 0x261f88u: goto label_261f88;
        case 0x261f8cu: goto label_261f8c;
        case 0x261f90u: goto label_261f90;
        case 0x261f94u: goto label_261f94;
        case 0x261f98u: goto label_261f98;
        case 0x261f9cu: goto label_261f9c;
        case 0x261fa0u: goto label_261fa0;
        case 0x261fa4u: goto label_261fa4;
        case 0x261fa8u: goto label_261fa8;
        case 0x261facu: goto label_261fac;
        case 0x261fb0u: goto label_261fb0;
        case 0x261fb4u: goto label_261fb4;
        case 0x261fb8u: goto label_261fb8;
        case 0x261fbcu: goto label_261fbc;
        case 0x261fc0u: goto label_261fc0;
        case 0x261fc4u: goto label_261fc4;
        case 0x261fc8u: goto label_261fc8;
        case 0x261fccu: goto label_261fcc;
        case 0x261fd0u: goto label_261fd0;
        case 0x261fd4u: goto label_261fd4;
        default: break;
    }

    ctx->pc = 0x261e40u;

label_261e40:
    // 0x261e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x261e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_261e44:
    // 0x261e44: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x261e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_261e48:
    // 0x261e48: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x261e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_261e4c:
    // 0x261e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x261e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261e50:
    // 0x261e50: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x261e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_261e54:
    // 0x261e54: 0x2451ec30  addiu       $s1, $v0, -0x13D0
    ctx->pc = 0x261e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
label_261e58:
    // 0x261e58: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x261e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_261e5c:
    // 0x261e5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x261e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_261e60:
    // 0x261e60: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x261e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_261e64:
    // 0x261e64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x261e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_261e68:
    // 0x261e68: 0xc097fdc  jal         func_25FF70
label_261e6c:
    if (ctx->pc == 0x261E6Cu) {
        ctx->pc = 0x261E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E68u;
        // 0x261e6c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E70u;
        goto label_261e70;
    }
    ctx->pc = 0x261E68u;
    SET_GPR_U32(ctx, 31, 0x261E70u);
    ctx->pc = 0x261E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E68u;
    // 0x261e6c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x261E68u, 0x261E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E70u;
label_261e70:
    // 0x261e70: 0x86060022  lh          $a2, 0x22($s0)
    ctx->pc = 0x261e70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_261e74:
    // 0x261e74: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
label_261e78:
    if (ctx->pc == 0x261E78u) {
        ctx->pc = 0x261E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E74u;
        // 0x261e78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261E7Cu;
        goto label_261e7c;
    }
    ctx->pc = 0x261E74u;
    {
        const bool branch_taken_0x261e74 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E74u;
        // 0x261e78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e74) {
            ctx->pc = 0x261EA8u;
            goto label_261ea8;
        }
    }
    ctx->pc = 0x261E7Cu;
label_261e7c:
    // 0x261e7c: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x261e7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_261e80:
    // 0x261e80: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x261e80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_261e84:
    // 0x261e84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x261e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_261e88:
    // 0x261e88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261e8c:
    // 0x261e8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_261e90:
    // 0x261e90: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x261e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_261e94:
    // 0x261e94: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x261e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_261e98:
    // 0x261e98: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x261e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261e9c:
    // 0x261e9c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x261e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261ea0:
    // 0x261ea0: 0x10000002  b           . + 4 + (0x2 << 2)
label_261ea4:
    if (ctx->pc == 0x261EA4u) {
        ctx->pc = 0x261EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EA0u;
        // 0x261ea4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261EA8u;
        goto label_261ea8;
    }
    ctx->pc = 0x261EA0u;
    {
        const bool branch_taken_0x261ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EA0u;
        // 0x261ea4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ea0) {
            ctx->pc = 0x261EACu;
            goto label_261eac;
        }
    }
    ctx->pc = 0x261EA8u;
label_261ea8:
    // 0x261ea8: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x261ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_261eac:
    // 0x261eac: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_261eb0:
    if (ctx->pc == 0x261EB0u) {
        ctx->pc = 0x261EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EACu;
        // 0x261eb0: 0x86030020  lh          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261EB4u;
        goto label_261eb4;
    }
    ctx->pc = 0x261EACu;
    {
        const bool branch_taken_0x261eac = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EACu;
        // 0x261eb0: 0x86030020  lh          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261eac) {
            ctx->pc = 0x261EC0u;
            goto label_261ec0;
        }
    }
    ctx->pc = 0x261EB4u;
label_261eb4:
    // 0x261eb4: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x261eb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_261eb8:
    // 0x261eb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_261ebc:
    if (ctx->pc == 0x261EBCu) {
        ctx->pc = 0x261EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EB8u;
        // 0x261ebc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261EC0u;
        goto label_261ec0;
    }
    ctx->pc = 0x261EB8u;
    {
        const bool branch_taken_0x261eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EB8u;
        // 0x261ebc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261eb8) {
            ctx->pc = 0x261EC4u;
            goto label_261ec4;
        }
    }
    ctx->pc = 0x261EC0u;
label_261ec0:
    // 0x261ec0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_261ec4:
    // 0x261ec4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x261ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261ec8:
    // 0x261ec8: 0xe0f809  jalr        $a3
label_261ecc:
    if (ctx->pc == 0x261ECCu) {
        ctx->pc = 0x261ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EC8u;
        // 0x261ecc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261ED0u;
        goto label_261ed0;
    }
    ctx->pc = 0x261EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x261ED0u);
        ctx->pc = 0x261ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EC8u;
        // 0x261ecc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261EC8u, 0x261ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261ED0u;
label_261ed0:
    // 0x261ed0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x261ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_261ed4:
    // 0x261ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261ed8:
    // 0x261ed8: 0xc097fdc  jal         func_25FF70
label_261edc:
    if (ctx->pc == 0x261EDCu) {
        ctx->pc = 0x261EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ED8u;
        // 0x261edc: 0x2471ed98  addiu       $s1, $v1, -0x1268 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261EE0u;
        goto label_261ee0;
    }
    ctx->pc = 0x261ED8u;
    SET_GPR_U32(ctx, 31, 0x261EE0u);
    ctx->pc = 0x261EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261ED8u;
    // 0x261edc: 0x2471ed98  addiu       $s1, $v1, -0x1268 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x261ED8u, 0x261EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261EE0u;
label_261ee0:
    // 0x261ee0: 0x86060022  lh          $a2, 0x22($s0)
    ctx->pc = 0x261ee0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_261ee4:
    // 0x261ee4: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
label_261ee8:
    if (ctx->pc == 0x261EE8u) {
        ctx->pc = 0x261EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EE4u;
        // 0x261ee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261EECu;
        goto label_261eec;
    }
    ctx->pc = 0x261EE4u;
    {
        const bool branch_taken_0x261ee4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EE4u;
        // 0x261ee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ee4) {
            ctx->pc = 0x261F18u;
            goto label_261f18;
        }
    }
    ctx->pc = 0x261EECu;
label_261eec:
    // 0x261eec: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x261eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_261ef0:
    // 0x261ef0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x261ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_261ef4:
    // 0x261ef4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x261ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_261ef8:
    // 0x261ef8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261efc:
    // 0x261efc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_261f00:
    // 0x261f00: 0x6869ffff  ldl         $t1, -0x1($v1)
    ctx->pc = 0x261f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_261f04:
    // 0x261f04: 0x6c69fff8  ldr         $t1, -0x8($v1)
    ctx->pc = 0x261f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_261f08:
    // 0x261f08: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x261f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261f0c:
    // 0x261f0c: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x261f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261f10:
    // 0x261f10: 0x10000002  b           . + 4 + (0x2 << 2)
label_261f14:
    if (ctx->pc == 0x261F14u) {
        ctx->pc = 0x261F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F10u;
        // 0x261f14: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F18u;
        goto label_261f18;
    }
    ctx->pc = 0x261F10u;
    {
        const bool branch_taken_0x261f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F10u;
        // 0x261f14: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f10) {
            ctx->pc = 0x261F1Cu;
            goto label_261f1c;
        }
    }
    ctx->pc = 0x261F18u;
label_261f18:
    // 0x261f18: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x261f18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_261f1c:
    // 0x261f1c: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_261f20:
    if (ctx->pc == 0x261F20u) {
        ctx->pc = 0x261F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F1Cu;
        // 0x261f20: 0x86030020  lh          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F24u;
        goto label_261f24;
    }
    ctx->pc = 0x261F1Cu;
    {
        const bool branch_taken_0x261f1c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F1Cu;
        // 0x261f20: 0x86030020  lh          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f1c) {
            ctx->pc = 0x261F30u;
            goto label_261f30;
        }
    }
    ctx->pc = 0x261F24u;
label_261f24:
    // 0x261f24: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x261f24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_261f28:
    // 0x261f28: 0x10000002  b           . + 4 + (0x2 << 2)
label_261f2c:
    if (ctx->pc == 0x261F2Cu) {
        ctx->pc = 0x261F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F28u;
        // 0x261f2c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F30u;
        goto label_261f30;
    }
    ctx->pc = 0x261F28u;
    {
        const bool branch_taken_0x261f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F28u;
        // 0x261f2c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f28) {
            ctx->pc = 0x261F34u;
            goto label_261f34;
        }
    }
    ctx->pc = 0x261F30u;
label_261f30:
    // 0x261f30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_261f34:
    // 0x261f34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x261f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261f38:
    // 0x261f38: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x261f38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
label_261f3c:
    // 0x261f3c: 0xe0f809  jalr        $a3
label_261f40:
    if (ctx->pc == 0x261F40u) {
        ctx->pc = 0x261F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F3Cu;
        // 0x261f40: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F44u;
        goto label_261f44;
    }
    ctx->pc = 0x261F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x261F44u);
        ctx->pc = 0x261F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F3Cu;
        // 0x261f40: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261F3Cu, 0x261F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261F44u;
label_261f44:
    // 0x261f44: 0xc097fdc  jal         func_25FF70
label_261f48:
    if (ctx->pc == 0x261F48u) {
        ctx->pc = 0x261F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F44u;
        // 0x261f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F4Cu;
        goto label_261f4c;
    }
    ctx->pc = 0x261F44u;
    SET_GPR_U32(ctx, 31, 0x261F4Cu);
    ctx->pc = 0x261F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F44u;
    // 0x261f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x261F44u, 0x261F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F4Cu;
label_261f4c:
    // 0x261f4c: 0x86070022  lh          $a3, 0x22($s0)
    ctx->pc = 0x261f4cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_261f50:
    // 0x261f50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x261f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261f54:
    // 0x261f54: 0x4e0000c  bltz        $a3, . + 4 + (0xC << 2)
label_261f58:
    if (ctx->pc == 0x261F58u) {
        ctx->pc = 0x261F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F54u;
        // 0x261f58: 0x2626eba0  addiu       $a2, $s1, -0x1460 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F5Cu;
        goto label_261f5c;
    }
    ctx->pc = 0x261F54u;
    {
        const bool branch_taken_0x261f54 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x261F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F54u;
        // 0x261f58: 0x2626eba0  addiu       $a2, $s1, -0x1460 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f54) {
            ctx->pc = 0x261F88u;
            goto label_261f88;
        }
    }
    ctx->pc = 0x261F5Cu;
label_261f5c:
    // 0x261f5c: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x261f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_261f60:
    // 0x261f60: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x261f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_261f64:
    // 0x261f64: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x261f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_261f68:
    // 0x261f68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261f6c:
    // 0x261f6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x261f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_261f70:
    // 0x261f70: 0x6868ffff  ldl         $t0, -0x1($v1)
    ctx->pc = 0x261f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_261f74:
    // 0x261f74: 0x6c68fff8  ldr         $t0, -0x8($v1)
    ctx->pc = 0x261f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_261f78:
    // 0x261f78: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x261f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261f7c:
    // 0x261f7c: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x261f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261f80:
    // 0x261f80: 0x10000002  b           . + 4 + (0x2 << 2)
label_261f84:
    if (ctx->pc == 0x261F84u) {
        ctx->pc = 0x261F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F80u;
        // 0x261f84: 0x8fa80024  lw          $t0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F88u;
        goto label_261f88;
    }
    ctx->pc = 0x261F80u;
    {
        const bool branch_taken_0x261f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F80u;
        // 0x261f84: 0x8fa80024  lw          $t0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f80) {
            ctx->pc = 0x261F8Cu;
            goto label_261f8c;
        }
    }
    ctx->pc = 0x261F88u;
label_261f88:
    // 0x261f88: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x261f88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_261f8c:
    // 0x261f8c: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_261f90:
    if (ctx->pc == 0x261F90u) {
        ctx->pc = 0x261F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F8Cu;
        // 0x261f90: 0x86030020  lh          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261F94u;
        goto label_261f94;
    }
    ctx->pc = 0x261F8Cu;
    {
        const bool branch_taken_0x261f8c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x261F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F8Cu;
        // 0x261f90: 0x86030020  lh          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f8c) {
            ctx->pc = 0x261FA0u;
            goto label_261fa0;
        }
    }
    ctx->pc = 0x261F94u;
label_261f94:
    // 0x261f94: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x261f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_261f98:
    // 0x261f98: 0x10000002  b           . + 4 + (0x2 << 2)
label_261f9c:
    if (ctx->pc == 0x261F9Cu) {
        ctx->pc = 0x261F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F98u;
        // 0x261f9c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261FA0u;
        goto label_261fa0;
    }
    ctx->pc = 0x261F98u;
    {
        const bool branch_taken_0x261f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F98u;
        // 0x261f9c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f98) {
            ctx->pc = 0x261FA4u;
            goto label_261fa4;
        }
    }
    ctx->pc = 0x261FA0u;
label_261fa0:
    // 0x261fa0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x261fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_261fa4:
    // 0x261fa4: 0x100f809  jalr        $t0
label_261fa8:
    if (ctx->pc == 0x261FA8u) {
        ctx->pc = 0x261FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FA4u;
        // 0x261fa8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261FACu;
        goto label_261fac;
    }
    ctx->pc = 0x261FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x261FACu);
        ctx->pc = 0x261FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FA4u;
        // 0x261fa8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261FA4u, 0x261FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261FACu;
label_261fac:
    // 0x261fac: 0x2624eba0  addiu       $a0, $s1, -0x1460
    ctx->pc = 0x261facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962080));
label_261fb0:
    // 0x261fb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x261fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261fb4:
    // 0x261fb4: 0xc098910  jal         func_262440
label_261fb8:
    if (ctx->pc == 0x261FB8u) {
        ctx->pc = 0x261FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FB4u;
        // 0x261fb8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261FBCu;
        goto label_261fbc;
    }
    ctx->pc = 0x261FB4u;
    SET_GPR_U32(ctx, 31, 0x261FBCu);
    ctx->pc = 0x261FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261FB4u;
    // 0x261fb8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262440u, 0x261FB4u, 0x261FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FBCu;
label_261fbc:
    // 0x261fbc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x261fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_261fc0:
    // 0x261fc0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x261fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_261fc4:
    // 0x261fc4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x261fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_261fc8:
    // 0x261fc8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x261fc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_261fcc:
    // 0x261fcc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x261fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_261fd0:
    // 0x261fd0: 0x3e00008  jr          $ra
label_261fd4:
    if (ctx->pc == 0x261FD4u) {
        ctx->pc = 0x261FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FD0u;
        // 0x261fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261FD8u;
        goto label_fallthrough_0x261fd0;
    }
    ctx->pc = 0x261FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FD0u;
        // 0x261fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261fd0:
    ctx->pc = 0x261FD8u;
}
